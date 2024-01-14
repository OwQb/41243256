#include"function.h"

/*
*                                        !!!注意事項!!!
* 0.本程式使用easyx,請至https://easyx.cn/easyx下載安裝
* 1.記得先進"專案">>"屬性">>"進階">>將字元集修改為"使用多位元組字元集"
* 2.本專題使用的tools.cpp及tools.h檔不屬於本人撰寫,來源請至https://www.bilibili.com/video/BV1vM4y1X7Kb/?share_source=copy_web&vd_source=f387be602c0e9f90a4635284f77db973
* 3. tools.cpp及tools.h為兼容透明格式
*/

/*
                        <暫存程式>
mciSendString("stop BGM", 0, 0, 0);//暫停撥放mp3

*/

ExMessage msg;//取鼠標信息
IMAGE curriculum;//課表圖
IMAGE flashing;//閃光
struct Resource 
{
    IMAGE bg[BG_NUMBER], im[IM_NUMBER];//圖片變數名
}res;

int main_scenes =0;//目前主場景
int player_passlevel = 0;//通關數
int check_account_Enter_how_much = 0;//帳號輸入數量
int check_password_Enter_how_much = 0;//密碼輸入數量
int cheater = 0;//0為正常帳號,1為作弊帳號
char account[11] = { 0 };//儲存輸入帳號
char check_account[50] = { 0 };//儲存文件讀取帳號
char password[11] = { 0 };//儲存輸入密碼
char check_password[11] = { 0 };//儲存文件讀取密碼
char check_passlevel;//儲存文件讀取通關數
FILE* pfile;//文件位置

//*********************************************************
//<遊戲開始和初始化>
//遊戲初始化
int main(void)
{
    player_passlevel = 0; //初始化通關數
    cheater = 0;//預設為正常帳號
    memset(account, 0, 11);//初始化輸入的帳號
    memset(password, 0, 11);//初始化輸入的密碼
    system("cls");//清空螢幕,重製畫面
    srand((unsigned)time(NULL));

    initgraph(800, 600);//繪製窗口大小
    loading_data(&res);//加載資料
    putimagePNG(0, 0, res.bg + 2);//輸出一張圖片(座標x,座標y,圖片變數名)
    setbkmode(TRANSPARENT);//設置文字背景色為透明
    settextcolor(WHITE);//字體顏色
    settextstyle(100, 0, "微軟正黑體");//(字高,字寬(預設隨輸出變化),"字體(要系統有的)")
    outtextxy(200, 200, "請先登入!!");//輸出文字(文字x,文字y,"文字")
    Selectr_login_register();//選擇登入或註冊
    system("pause");
    return 0;
}
//*********************************************************
//選擇登入或註冊
int Selectr_login_register(void)
{
    char Selectr[10] = { 0 };
    int check_Selectr_Enter_how_much = 0;
    do {
        printf("請先登入/註冊帳號(輸入數字 1 登入/輸入數字 2 註冊):");
        rewind(stdin); check_Selectr_Enter_how_much = 0;
        while ((Selectr[check_Selectr_Enter_how_much] = getchar()) != '\n') { check_Selectr_Enter_how_much++; }
        if (check_Selectr_Enter_how_much >= 2) { system("cls"); memset(Selectr, 0, 10); printf("輸入項過多,請重新輸入\n"); }//memset為清空Selectr字元陣列(指標,設定值,Byte數)
        else if (Selectr[0] == '1') { login_register(1); }
        else if (Selectr[0] == '2') { login_register(2); }
        else { system("cls"); memset(Selectr, 0, 10); printf("輸入錯誤,請重新輸入\n"); }
    } while (Selectr[0] != '1' && Selectr[0] != '2');
    return 0;
}
//*********************************************************
//登入/註冊
int login_register(int login_register)
{
    //登入
    if (login_register == 1)
    {
        //檢查登入是否輸入正確
        while (1)
        {
            //檢查登入帳號是否違規輸入
            while (1)
            {
                int check_ture = 0;//確認是否輸入正確
                printf("請輸入登入帳號(輸入數字 0 返回):");
                rewind(stdin); check_account_Enter_how_much = 0;//初始化帳號輸入數量&清空緩存區
                while ((account[check_account_Enter_how_much] = getchar()) != '\n') { check_account_Enter_how_much++; }
                if (check_account_Enter_how_much >= 11) { system("cls"); memset(account, 0, 11); check_ture = 1; printf("輸入項過多,請重新輸入\n"); }//memset為清空Selectr字元陣列(指標,設定值,Byte數)
                else if (check_account_Enter_how_much == 1 && account[0] == '0') { system("cls"); Selectr_login_register(); }//當輸入數量為1且輸入為0時返回選擇登入或註冊
                else { for (int i = 0; i < check_account_Enter_how_much; i++) { if (isalpha(account[i]) == 0) { system("cls"); memset(account, 0, 11); check_ture = 1; printf("帳號必須為純英文,請重新輸入\n"); } } }//isalpha為檢查是否為英文字母,返回0為非英文字母,返回非0為英文字母
                if (check_ture == 0) { account[check_account_Enter_how_much] = NULL; break; }//刪除換行字元
            }
            //檢查登入密碼是否違規輸入
            while (1)
            {
                int check_ture = 0;//確認是否輸入正確
                printf("請輸入登入密碼(輸入數字 0 返回):");
                rewind(stdin); check_password_Enter_how_much = 0;//初始化密碼輸入數量&清空緩存區
                while ((password[check_password_Enter_how_much] = getchar()) != '\n') { check_password_Enter_how_much++; }//計算密碼輸入數量
                if (check_password_Enter_how_much >= 11) { system("cls"); memset(password, 0, 11); check_ture = 1; printf("請輸入登入帳號(輸入數字 0 返回):%s\n", account); printf("輸入項過多,請重新輸入\n"); }//memset為清空Selectr字元陣列(指標,設定值,Byte數)
                else if (check_password_Enter_how_much == 1 && password[0] == '0') { system("cls"); Selectr_login_register(); }//當輸入數量為1且輸入為0時返回選擇登入或註冊
                else { for (int i = 0; i < check_password_Enter_how_much; i++) { if (isdigit(password[i]) == 0) { system("cls"); memset(password, 0, 11); check_ture = 1; printf("請輸入登入帳號(輸入數字 0 返回):%s\n", account); printf("密碼必須為純數字,請重新輸入\n"); } } }//isdigit為檢查是否為數字,返回0為非數字,返回非0為數字
                if (check_ture == 0) { break; } 
            }
            memset(check_account, 0, 50);//清空路徑
            sprintf_s(check_account, "account\\%s.txt", account);//添加路徑
            if ((pfile = fopen(check_account, "r")) == NULL) { system("cls"); memset(account, 0, 10); memset(password, 0, 11); printf("找不到該帳號, 請重新輸入\n"); }
            else
            {
                fseek(pfile,9, SEEK_SET); fgets(check_password,20, pfile);//讀取文件密碼
                //檢查密碼是否輸入正確&是否為作弊帳號
                if (strcmp(check_password, password) == 0 && strcmp("BLUE", account) == 0)
                {
                    fseek(pfile, check_password_Enter_how_much + 21, SEEK_SET); check_passlevel = fgetc(pfile);
                    player_passlevel = check_passlevel - '0';
                    fclose(pfile);
                    printf("登入成功!!作弊模式啟用!!"); cheater = 1; front_page();//首頁
                }
                //檢查密碼是否輸入正確
                else if (strcmp(check_password, password) == 0) 
                {
                    fseek(pfile, check_password_Enter_how_much + 21, SEEK_SET); check_passlevel = fgetc(pfile);
                    player_passlevel = check_passlevel - '0';
                    fclose(pfile);
                    printf("登入成功!!"); cheater = 0; front_page();//首頁
                }
                //密碼輸入錯誤則清空輸入的帳號和輸入的密碼
                else { system("cls");  fclose(pfile); memset(account, 0, 11); memset(password, 0, 11); printf("密碼錯誤, 請重新輸入帳號密碼\n"); }
            }
        }
    }
    //註冊
    else
    {
        //檢查註冊是否輸入正確
        while (1)
        {
            //檢查註冊帳號是否違規輸入
            while (1)
            {
                int check_ture = 0;//確認是否輸入正確
                printf("請輸入註冊帳號(輸入數字 0 返回):");
                rewind(stdin); check_account_Enter_how_much = 0;//初始化帳號輸入數量&清空緩存區
                while ((account[check_account_Enter_how_much] = getchar()) != '\n') { check_account_Enter_how_much++; }//計算帳號輸入數量
                if (check_account_Enter_how_much >= 11) { system("cls"); memset(account, 0, 11); check_ture = 1; printf("輸入項過多,請重新輸入\n"); }//memset為清空Selectr字元陣列(指標,設定值,Byte數)
                else if (check_account_Enter_how_much == 1 && account[0] == '0') { system("cls"); Selectr_login_register(); }//當輸入數量為1且輸入為0時返回選擇登入或註冊
                else { for (int i = 0; i < check_account_Enter_how_much; i++) { if (isalpha(account[i]) == 0) { system("cls"); memset(account, 0, 11); check_ture = 1; printf("帳號必須為純英文,請重新輸入\n"); } } }//isalpha為檢查是否為英文字母,返回0為非英文字母,返回非0為英文字母
                if (check_ture == 0) { account[check_account_Enter_how_much] = NULL; break; }//刪除換行字元
            }
            //檢查註冊密碼是否違規輸入
            while (1)
            {
                int check_ture = 0;//確認是否輸入正確
                printf("請輸入註冊密碼(輸入數字 0 返回):");
                rewind(stdin); check_password_Enter_how_much = 0;//初始化密碼輸入數量&清空緩存區
                while ((password[check_password_Enter_how_much] = getchar()) != '\n') { check_password_Enter_how_much++; }//計算密碼輸入數量
                if (check_password_Enter_how_much >= 11) { system("cls"); memset(password, 0, 11); check_ture = 1; printf("請輸入註冊帳號(輸入數字 0 返回):%s\n", account); printf("輸入項過多,請重新輸入\n"); }//memset為清空Selectr字元陣列(指標,設定值,Byte數)
                else if (check_password_Enter_how_much == 1 && password[0] == '0') { system("cls"); Selectr_login_register(); }//當輸入數量為1且輸入為0時返回選擇登入或註冊
                else { for (int i = 0; i < check_password_Enter_how_much; i++) { if (isdigit(password[i]) == 0) { system("cls"); memset(password, 0, 11); check_ture = 1; printf("請輸入註冊帳號(輸入數字 0 返回):%s\n", account); printf("密碼必須為純數字,請重新輸入\n"); } } }//isdigit為檢查是否為數字,返回0為非數字,返回非0為數字
                if (check_ture == 0) { break; }
            }
            memset(check_account, 0, 50);//清空路徑
            sprintf_s(check_account, "account\\%s.txt", account);//添加路徑
            if ((pfile = fopen(check_account, "r")) != NULL) { system("cls"); memset(account, 0, 11); memset(password, 0, 11); printf("已有%s帳號請重新註冊\n", account); }
            else if ((pfile = fopen(check_account, "w")) == NULL) { system("cls"); memset(account, 0, 11); memset(password, 0, 11); printf("發生嚴重錯誤,找不到account文件夾\n"); }
            else {//註冊時填入玩家初始信息
                fprintf(pfile, "password:%s", password);//玩家密碼
                fprintf(pfile, "passlevel:0");//玩家通關數(初始為0)
                fclose(pfile);
                printf("註冊成功!!(按任意鍵返回)\n");
                rewind(stdin);
                getchar();//用來替代按任意鍵返回
                system("cls"); Selectr_login_register();//清空畫面,返回選擇登入或註冊
            }
        }
    }
    return 0;
}
//*********************************************************
//<遊戲資料>
//保存遊戲進度
int save_player_passlevel(void)
{
    if((pfile = fopen(check_account, "r+")) == NULL){ system("cls"); printf("保存遊戲進度時發生嚴重錯誤,找不到文件,建議退出遊戲重新註冊帳號\n"); }
    fseek(pfile, check_password_Enter_how_much + 21, SEEK_SET); fputc(player_passlevel + 48,pfile);//移動讀寫頭,修改通關數
    fclose(pfile);
    return 0;
}
//*********************************************************
//加載資料
int loading_data(struct Resource *res)
{
    mciSendString("open BGM/Bgm-level.mp3 alias BGM", 0, 0, 0);//導入mp3檔(alias為修改調用檔案名稱)
    loadimage(&curriculum, "image/curriculum.png");//導入圖片
    loadimage(&flashing, "image/flashing.png");//導入圖片
    for (int i = 0; i <= BG_NUMBER-1; i++)//用於省去載入多張圖片
    {
        char path[50] = { 0 };//清除前一個圖片路徑字串
        sprintf_s(path, "image/bg%d.png", i + 1);//sprintf_s將格式化字串儲存到緩衝區
        loadimage(res->bg + i, path, getwidth(), getheight());//(載入的圖片,圖片路徑字串,根據視窗大小改變圖片長寬)
    }
    for (int i = 0; i <= IM_NUMBER -1; i++)//用於省去載入多張圖片
    {
        char path[50] = { 0 };//清除前一個圖片路徑字串
        sprintf_s(path, "image/im%d.png", i + 1);//sprintf_s將格式化字串儲存到緩衝區
        loadimage(res->im + i, path);//(載入的圖片,圖片路徑字串,改變圖片長寬)
    }
    return 0;
}
//*********************************************************
//<頁面和關卡>
//首頁
int front_page(void)
{
    main_scenes = 0;//設置當前場景(首頁為0)
    mciSendString("play BGM repeat", 0, 0, 0);//循環播放mp3
	putimagePNG(0, 0, res.bg + 0);//輸出一張圖片(座標x,座標y,圖片變數名)
    mouse(msg, main_scenes, cheater, &player_passlevel);//請求鼠標偵測
	return 0;
}
//*********************************************************
//初始劇情
int inital_plot(void)
{
    main_scenes = 1;//設置當前場景(初始劇情為1)
    putimagePNG(0, 0, res.bg + 2);//輸出一張圖片(座標x,座標y,圖片變數名)
    setbkmode(TRANSPARENT);//設置文字背景色為透明
    settextcolor(WHITE);//字體顏色
    settextstyle(30, 0, "微軟正黑體");//(字高,字寬(預設隨輸出變化),"字體(要系統有的)")
    outtextxy(160, 200, "前情提要");//輸出文字(文字x,文字y,"文字")
    outtextxy(160, 260, "懷著熱情的你踏入了虎尾科技大學");//輸出文字(文字x,文字y,"文字")
    outtextxy(160, 295, "面對新的環境,新的同學的你是否能夠撐到畢業呢?");//輸出文字(文字x,文字y,"文字")
    outtextxy(160, 330, "目標是撐過大一!加油!不要被當!");//輸出文字(文字x,文字y,"文字")
    mouse(msg, main_scenes , cheater,&player_passlevel);//請求鼠標偵測
    return 0;
}
//*********************************************************
//主菜單
int main_menu(void)
{
    main_scenes = 2;//設置當前場景(主菜單為2)
    putimagePNG(0, 0, res.bg +5);//輸出一張圖片(座標x,座標y,圖片變數名)
    putimagePNG(170, 0, &curriculum);
    main_menu_button_fillrectangle_size(player_passlevel);//設定菜單白色矩形遮住範圍,減少行數用
    setfillcolor(RGB(205, 133, 63));//設置矩形填充色(使用RGB)
    fillroundrect(10, 10, 110, 60, 10, 10);//繪製圓角矩形(左,上,右,下,圓寬,圓高)
    setbkmode(TRANSPARENT);//設置文字背景色為透明
    settextcolor(BLACK);//字體顏色
    settextstyle(30, 0, "微軟正黑體");//(字高,字寬(預設隨輸出變化),"字體(要系統有的)")
    outtextxy(22, 20, "主頁面");//輸出文字(文字x,文字y,"文字")
    mouse(msg, main_scenes , cheater,&player_passlevel);//請求鼠標偵測
    return 0;
}
//*********************************************************
//linux關卡
int linux_level(void)
{
    main_scenes = 3;//設置當前場景(初始教學為3)
    setbkmode(TRANSPARENT);//設置文字背景色為透明
    settextcolor(WHITE);//字體顏色
    settextstyle(40, 0, "微軟正黑體");//(字高,字寬(預設隨輸出變化),"字體(要系統有的)")
    outtextxy(380, 0, "Tux");//輸出文字(文字x,文字y,"文字")
    putimagePNG(350, 100, res.im + 2);
    mouse(msg, main_scenes, cheater, &player_passlevel);//請求鼠標偵測
    return 0;
}
//*********************************************************
//程式設計關卡
int  programming_level(void)
{
    main_scenes = 4;//設置當前場景(程式設計為4)
    setbkmode(TRANSPARENT);//設置文字背景色為透明
    settextcolor(WHITE);//字體顏色
    settextstyle(40, 0, "微軟正黑體");//(字高,字寬(預設隨輸出變化),"字體(要系統有的)")
    outtextxy(350, 0, "你最愛的");//輸出文字(文字x,文字y,"文字")
    putimagePNG(350, 100, res.im + 5);
    mouse(msg, main_scenes, cheater, &player_passlevel);//請求鼠標偵測
    return 0;
}
//*********************************************************
//體育關卡
int  PE_level(void)
{
    main_scenes = 5;//設置當前場景(體育為5)
    setbkmode(TRANSPARENT);//設置文字背景色為透明
    settextcolor(WHITE);//字體顏色
    settextstyle(40, 0, "微軟正黑體");//(字高,字寬(預設隨輸出變化),"字體(要系統有的)")
    outtextxy(350, 0, "好累不想動");//輸出文字(文字x,文字y,"文字")
    putimagePNG(350, 100, res.im + 8);
    mouse(msg, main_scenes, cheater, &player_passlevel);//請求鼠標偵測
    return 0;
}
//*********************************************************
//計概關卡
int  calculator_level(void)
{
    main_scenes = 6;//設置當前場景(計概為6)
    setbkmode(TRANSPARENT);//設置文字背景色為透明
    settextcolor(WHITE);//字體顏色
    settextstyle(40, 0, "微軟正黑體");//(字高,字寬(預設隨輸出變化),"字體(要系統有的)")
    outtextxy(350, 0, "快背阿");//輸出文字(文字x,文字y,"文字")
    putimagePNG(350, 100, res.im + 11);
    mouse(msg, main_scenes, cheater, &player_passlevel);//請求鼠標偵測
    return 0;
}
//*********************************************************
//網際網路關卡
int  internet_level(void)
{
    main_scenes = 7;//設置當前場景(網際網路為7)
    setbkmode(TRANSPARENT);//設置文字背景色為透明
    settextcolor(WHITE);//字體顏色
    settextstyle(40, 0, "微軟正黑體");//(字高,字寬(預設隨輸出變化),"字體(要系統有的)")
    outtextxy(350, 0, "時代變了");//輸出文字(文字x,文字y,"文字")
    putimagePNG(350, 100, res.im + 14);
    mouse(msg, main_scenes, cheater, &player_passlevel);//請求鼠標偵測
    return 0;
}
//*********************************************************
//資導關卡
int  information_level(void)
{
    main_scenes = 8;//設置當前場景(資導為8)
    setbkmode(TRANSPARENT);//設置文字背景色為透明
    settextcolor(WHITE);//字體顏色
    settextstyle(40, 0, "微軟正黑體");//(字高,字寬(預設隨輸出變化),"字體(要系統有的)")
    outtextxy(350, 0, "英文要學好");//輸出文字(文字x,文字y,"文字")
    putimagePNG(350, 100, res.im + 17);
    mouse(msg, main_scenes, cheater, &player_passlevel);//請求鼠標偵測
    return 0;
}
//*********************************************************
//英文關卡
int  EN_level(void)
{
    main_scenes = 9;//設置當前場景(英文為9)
    setbkmode(TRANSPARENT);//設置文字背景色為透明
    settextcolor(WHITE);//字體顏色
    settextstyle(40, 0, "微軟正黑體");//(字高,字寬(預設隨輸出變化),"字體(要系統有的)")
    outtextxy(350, 0, "understand?");//輸出文字(文字x,文字y,"文字")
    putimagePNG(350, 100, res.im + 20);
    mouse(msg, main_scenes, cheater, &player_passlevel);//請求鼠標偵測
    return 0;
}
//*********************************************************
//通識關卡
int  General_Education_level(void)
{
    main_scenes = 10;//設置當前場景(通識為10)
    setbkmode(TRANSPARENT);//設置文字背景色為透明
    settextcolor(WHITE);//字體顏色
    settextstyle(40, 0, "微軟正黑體");//(字高,字寬(預設隨輸出變化),"字體(要系統有的)")
    outtextxy(350, 0, "點名 點名 點名");//輸出文字(文字x,文字y,"文字")
    putimagePNG(350, 100, res.im + 23);
    mouse(msg, main_scenes, cheater, &player_passlevel);//請求鼠標偵測
    return 0;
}
//*********************************************************
//程式設計實習關卡
int programming_Internship_level(void)
{
    main_scenes = 11;//設置當前場景(程式設計實習為11)
    setbkmode(TRANSPARENT);//設置文字背景色為透明
    settextcolor(WHITE);//字體顏色
    settextstyle(40, 0, "微軟正黑體");//(字高,字寬(預設隨輸出變化),"字體(要系統有的)")
    outtextxy(350, 0, "又遇見你最愛的");//輸出文字(文字x,文字y,"文字")
    putimagePNG(350, 100, res.im + 5);
    mouse(msg, main_scenes, cheater, &player_passlevel);//請求鼠標偵測
    return 0;
}
//********************************************************* 
//國文關卡
int CH_level(void)
{
    main_scenes = 12;//設置當前場景(國文為12)
    setbkmode(TRANSPARENT);//設置文字背景色為透明
    settextcolor(WHITE);//字體顏色
    settextstyle(40, 0, "微軟正黑體");//(字高,字寬(預設隨輸出變化),"字體(要系統有的)")
    outtextxy(350, 0, "儒子可教?");//輸出文字(文字x,文字y,"文字")
    putimagePNG(350, 100, res.im + 26);
    mouse(msg, main_scenes, cheater, &player_passlevel);//請求鼠標偵測
    return 0;
}
//*********************************************************
//社會實踐關卡
int social_practice_level(void)
{
    main_scenes = 13;//設置當前場景(社會實踐為13)
    setbkmode(TRANSPARENT);//設置文字背景色為透明
    settextcolor(WHITE);//字體顏色
    settextstyle(40, 0, "微軟正黑體");//(字高,字寬(預設隨輸出變化),"字體(要系統有的)")
    outtextxy(350, 0, "出什麼題好勒?");//輸出文字(文字x,文字y,"文字")
    putimagePNG(350, 100, res.im + 29);
    mouse(msg, main_scenes, cheater, &player_passlevel);//請求鼠標偵測
    return 0;
}
//*********************************************************
//數學關卡
int math_level(void)
{
    main_scenes = 14;//設置當前場景(數學為14)
    setbkmode(TRANSPARENT);//設置文字背景色為透明
    settextcolor(WHITE);//字體顏色
    settextstyle(40, 0, "微軟正黑體");//(字高,字寬(預設隨輸出變化),"字體(要系統有的)")
    outtextxy(350, 0, "可不上,但要懂");//輸出文字(文字x,文字y,"文字")
    putimagePNG(350, 100, res.im + 32);
    mouse(msg, main_scenes, cheater, &player_passlevel);//請求鼠標偵測
    return 0;
}
//*********************************************************
//資導2關卡
int information2_level(void)
{
    main_scenes = 15;//設置當前場景(資導2為15)
    setbkmode(TRANSPARENT);//設置文字背景色為透明
    settextcolor(WHITE);//字體顏色
    settextstyle(40, 0, "微軟正黑體");//(字高,字寬(預設隨輸出變化),"字體(要系統有的)")
    outtextxy(350, 0, "簡報要做好");//輸出文字(文字x,文字y,"文字")
    putimagePNG(350, 100, res.im + 17);
    mouse(msg, main_scenes, cheater, &player_passlevel);//請求鼠標偵測
    return 0;
}
//*********************************************************
//計概2關卡
int  calculator2_level(void)
{
    main_scenes = 16;//設置當前場景(計概2為16)
    setbkmode(TRANSPARENT);//設置文字背景色為透明
    settextcolor(WHITE);//字體顏色
    settextstyle(40, 0, "微軟正黑體");//(字高,字寬(預設隨輸出變化),"字體(要系統有的)")
    outtextxy(350, 0, "這天小考");//輸出文字(文字x,文字y,"文字")
    putimagePNG(350, 100, res.im + 11);
    mouse(msg, main_scenes, cheater, &player_passlevel);//請求鼠標偵測
    return 0;
}
//*********************************************************
//數學2關卡
int math2_level(void)
{
    main_scenes = 17;//設置當前場景(數學2為17)
    setbkmode(TRANSPARENT);//設置文字背景色為透明
    settextcolor(WHITE);//字體顏色
    settextstyle(40, 0, "微軟正黑體");//(字高,字寬(預設隨輸出變化),"字體(要系統有的)")
    outtextxy(350, 0, "上完回家");//輸出文字(文字x,文字y,"文字")
    putimagePNG(350, 100, res.im + 32);
    mouse(msg, main_scenes, cheater, &player_passlevel);//請求鼠標偵測
    return 0;
}
//*********************************************************
//期末考關卡
int final_exam_level(void)
{
    main_scenes = 18;//設置當前場景(期末考為18)
    setbkmode(TRANSPARENT);//設置文字背景色為透明
    settextcolor(WHITE);//字體顏色
    settextstyle(40, 0, "微軟正黑體");//(字高,字寬(預設隨輸出變化),"字體(要系統有的)")
    outtextxy(350, 0, "哈哈都沒讀");//輸出文字(文字x,文字y,"文字")
    putimagePNG(350, 100, res.im + 37);
    mouse(msg, main_scenes, cheater, &player_passlevel);//請求鼠標偵測
    return 0;
}
//*********************************************************
//win
int win(int me_HP)
{
    //判斷是否為期末考
    if (main_scenes == 18)
    {
        if (me_HP == 800) { putimagePNG(0, 0, res.bg + 7); }//我方滿血輸出100分
        else if (me_HP >= 400) { putimagePNG(0, 0, res.bg + 8); }//我方半血輸出80分
        else if (me_HP >= 100) { putimagePNG(0, 0, res.bg + 9); }//我方殘血輸出60分
    }
    else { putimagePNG(0, 0, res.bg + 3); }
    main_scenes = -1;
    mouse(msg, main_scenes, cheater, &player_passlevel);//請求鼠標偵測
    return 0;
}
//*********************************************************
//lose
int lose(void)
{
    //判斷是否為期末考
    if (main_scenes == 18) { putimagePNG(0, 0, res.bg + 6); }
    else { putimagePNG(0, 0, res.bg + 4); }
    main_scenes = 1 - main_scenes;
    mouse(msg, main_scenes, cheater, &player_passlevel);//請求鼠標偵測
    return 0;
}
//*********************************************************
//<動畫區>
//進度條動畫
int loading_animation(void)
{
    putimagePNG(0, 0, res.bg + 1);//輸出一張圖片(座標x,座標y,圖片變數名)
    setbkmode(TRANSPARENT);//設置文字背景色為透明
    settextcolor(BLACK);//字體顏色
    settextstyle(40, 0, "微軟正黑體");//(字高,字寬(預設隨輸出變化),"字體(要系統有的)")
    outtextxy(270, 250, "讀取中...");//輸出文字(文字x,文字y,"文字")
    for (int i = 0;i <= 300;i += 3)//進度條動畫
    {
        setfillcolor(BLACK);//設置矩形填充色
        fillroundrect(i + 270, 300, 270, 310, 10, 10);//繪製圓角矩形(左,上,右,下,圓寬,圓高)
        Sleep(10);
    }
    flushmessage();//清空鼠標當前信息以防信息暴衝
    return 0;
}
//*********************************************************
//過場動畫
int animation(int im_1,int im_2)
{
    BeginBatchDraw();//創建繪圖緩衝區(沒有繪圖緩衝區將導致卡頓)
    Sleep(1000);
    for (int j = 800, i = -400; i <= 0, j >= 400; i += 10, j -= 10)//動畫01(關)
    {
        putimagePNG(i, 0, res.im + im_1);//輸出一張圖片(座標x,座標y,圖片變數名)
        putimagePNG(j, 0, res.im + im_2);//輸出一張圖片(座標x,座標y,圖片變數名)
        Sleep(10);
        FlushBatchDraw();//輸出繪圖緩衝區
    }
    Sleep(500);
    for (int j = 400, i = 0; i >= -400, j <= 800; i -= 10, j += 10)//動畫02(開)
    {
        putimagePNG(0, 0, res.bg + 2);//輸出一張圖片(座標x,座標y,圖片變數名)
        attack_button_inital();//空關卡頁面
        putimagePNG(i, 0, res.im + im_1);//輸出一張圖片(座標x,座標y,圖片變數名)
        putimagePNG(j, 0, res.im + im_2);//輸出一張圖片(座標x,座標y,圖片變數名)
        Sleep(10);
        FlushBatchDraw();//輸出繪圖緩衝區
    }
    EndBatchDraw();//結束繪圖緩衝區
    flushmessage();//清空鼠標當前信息以防信息暴衝
    return 0;
}
//*********************************************************
//初始攻擊按鈕畫面
int attack_button_inital(void)
{
    putimagePNG(0, 0, res.bg + 2);//輸出一張圖片(座標x,座標y,圖片變數名)
    setbkmode(TRANSPARENT);//設置文字背景色為透明

    setfillcolor(RED);//設置矩形填充色
    fillroundrect(100, 50, 700, 60, 10, 10);//繪製圓角矩形(左,上,右,下,圓寬,圓高)血量敵

    setfillcolor(BLUE);//設置矩形填充色
    fillroundrect(0, 285, 800, 295, 10, 10);//繪製圓角矩形(左,上,右,下,圓寬,圓高)血量我

    setfillcolor(WHITE);//設置矩形填充色
    fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)

    settextstyle(40, 0, "微軟正黑體");//(字高,字寬(預設隨輸出變化),"字體(要系統有的)")
    settextcolor(WHITE);//字體顏色
    setfillcolor(RGB(131, 139, 139));//設置矩形填充色(使用RGB)
    fillroundrect(50, 525, 150, 575, 10, 10);//繪製圓角矩形(左,上,右,下,圓寬,圓高)
    outtextxy(90, 530, "A");//輸出文字(文字x,文字y,"文字")
    fillroundrect(250, 525, 350, 575, 10, 10);//繪製圓角矩形(左,上,右,下,圓寬,圓高)
    outtextxy(290, 530, "B");//輸出文字(文字x,文字y,"文字")
    fillroundrect(450, 525, 550, 575, 10, 10);//繪製圓角矩形(左,上,右,下,圓寬,圓高)
    outtextxy(490, 530, "C");//輸出文字(文字x,文字y,"文字")
    fillroundrect(650, 525, 750, 575, 10, 10);//繪製圓角矩形(左,上,右,下,圓寬,圓高)
    outtextxy(690, 530, "D");//輸出文字(文字x,文字y,"文字")
    return 0;
}
//*********************************************************
//<按鈕動畫區>
//主菜單按鈕
int main_menu_button(ExMessage msg, int button_size)
{
    BeginBatchDraw();//創建繪圖緩衝區(沒有繪圖緩衝區將導致卡頓)
    if (msg.x >= 170 && msg.x <= 170 + (button_size * 92) +92  && msg.y >= 0 && msg.y <= 0 + 600)
    {
        main_menu_button_fillrectangle_size(button_size);//設定菜單白色矩形遮住範圍,減少行數用
        if(msg.x >= 170 && msg.x <= 170 + 92 && msg.y >= 0 && msg.y <= 0 + 600){ main_menu_button_redframe_size(0); }//設定菜單紅框
        else if (msg.x >= 262 && msg.x <= 262 + 92 && msg.y >= 0 && msg.y <= 0 + 600) { main_menu_button_redframe_size(1); }//設定菜單紅框
        else if (msg.x >= 354 && msg.x <= 354 + 92 && msg.y >= 0 && msg.y <= 0 + 600) { main_menu_button_redframe_size(2); }//設定菜單紅框
        else if (msg.x >= 446 && msg.x <= 446 + 92 && msg.y >= 0 && msg.y <= 0 + 600) { main_menu_button_redframe_size(3); }//設定菜單紅框
        else if (msg.x >= 538 && msg.x <= 538 + 92 && msg.y >= 0 && msg.y <= 0 + 600) { main_menu_button_redframe_size(4); }//設定菜單紅框
        FlushBatchDraw();//輸出繪圖緩衝區
    }
    else
    {
        main_menu_button_fillrectangle_size(button_size);//設定菜單白色矩形遮住範圍,減少行數用
        FlushBatchDraw();//輸出繪圖緩衝區
    }
    EndBatchDraw();//結束繪圖緩衝區
    return 0;
}
//*********************************************************
//期末考按鈕
int final_exam_button(ExMessage msg)
{
    if (msg.x >= 640 && msg.x <= 640 + 150 && msg.y >= 290 && msg.y <= 300 + 200)
    {
        putimagePNG(640, 0, res.im + 34);
    }
    else
    {
        putimagePNG(640, 0, res.im + 33);
    }
    return 0;
}
//*********************************************************
//期末考通過彩蛋
int flashing_animation(ExMessage msg)
{
    BeginBatchDraw();//創建繪圖緩衝區(沒有繪圖緩衝區將導致卡頓)
    putimagePNG(msg.x-25, msg.y-25, &flashing);
    FlushBatchDraw();//輸出繪圖緩衝區
    EndBatchDraw();//結束繪圖緩衝區
    return 0;
}
//*********************************************************
//設定菜單白色矩形遮住範圍,減少行數用
int main_menu_button_fillrectangle_size(int fillrectangle_size)
{
    if (fillrectangle_size >= 4) { fillrectangle_size = 4; }
    putimagePNG(170, 0, &curriculum);//輸出一張圖片(座標x,座標y,圖片變數名)
    setfillcolor(WHITE);//設置矩形填充色
    fillrectangle(257 + fillrectangle_size * 92, 0, 630, 600);//繪製矩形(左,上,右,下)
    return 0;
}
//*********************************************************
//設定菜單紅框,減少行數用
int main_menu_button_redframe_size(int redframe_size)
{
    setfillcolor(RED);//設置矩形填充色
    fillrectangle(170 +redframe_size * 92, 0, 175 + redframe_size * 92, 600);//繪製矩形(左,上,右,下)
    fillrectangle(257 + redframe_size * 92, 0, 262 + redframe_size * 92, 600);//繪製矩形(左,上,右,下)
    fillrectangle(170 + redframe_size * 92, 0, 262 + redframe_size * 92, 5);//繪製矩形(左,上,右,下)
    fillrectangle(170 + redframe_size * 92, 595, 262 + redframe_size * 92, 600);//繪製矩形(左,上,右,下)
    return 0;
}
//*********************************************************