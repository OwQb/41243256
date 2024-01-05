#include"function.h"

int enemy_HP = 0, me_HP = 0, me_a = 0, enemy_a = 0;
int answer = 0, beat_enemy_number=0;

//************************************************************************
//<按鈕>
//處理鼠標信息
int mouse(ExMessage msg, int main_scenes,int cheater, int* player_passlevel)
{
    //不斷獲取鼠標當前信息
    while (1) 
    {
        //peek為偷窺,偷窺一下鼠標當前使否有操作,以防信息丟失
        if (peekmessage(&msg, EM_MOUSE)) 
        {
            //<加載按鈕圖示>
            //首頁按鈕&登出按鈕
            if (main_scenes == 0) { front_page_button(msg); Sign_out_button(msg); }
            //主菜單按鈕&返回首頁按鈕&期末考按鈕
            else if (main_scenes == 2) { main_menu_button(msg, *player_passlevel); main_menu_front_button(msg); if (*player_passlevel >= 5) { final_exam_button(msg); } }
            //攻擊按鈕
            else if (main_scenes >= 3) { attack_button(msg); }
            //WIN按鈕
            else if (main_scenes == -1) { win_confirm_button(msg); }
            //LOSE按鈕
            else if (main_scenes <= -2) { lose_confirm_button(msg); }
            //<當鼠標點擊時>
            switch (msg.message)
            {
             //<當鼠標點擊左鍵>
            case WM_LBUTTONDOWN:
                //初始劇情
                if (main_scenes == 1)
                {
                    loading_animation();//進度條動畫
                    main_menu();//主菜單
                }
                //首頁按鈕&確認按鈕
                else if (msg.x >= 250 && msg.x <= 250 + 300 && msg.y >= 400 && msg.y <= 400 + 50 )
                {
                    if (main_scenes == 0){loading_animation();/*進度條動畫*/ inital_plot();/*初始劇情*/ }
                    else if (main_scenes == -1 || main_scenes <= -2){main_menu();/*主菜單*/ }
                }
                //在試一次按鈕
                else if (msg.x >= 250 && msg.x <= 250 + 300 && msg.y >= 300 && msg.y <= 300 + 50)
                {
                    //初始化linux關卡
                    if (main_scenes == -2)
                    {
                        animation(0,1);//linux動畫
                        enemy_HP = 600;//初始化關卡數據
                        me_HP = 800;//初始化關卡數據
                        me_a = 120;//初始化關卡數據
                        enemy_a = 100;//初始化關卡數據
                        attack_button_inital();//場景初始化
                        answer = linux_question();//linux隨機題庫
                        if (cheater == 1) { system("cls"); printf("%d", answer); }//若登入帳號為作弊帳號,顯示答案
                        linux_level(); //linux關卡
                    }
                    //初始化程式設計關卡
                    else if (main_scenes <= -3 && main_scenes >= -5)
                    {
                        animation(3, 4);//程式設計動畫
                        enemy_HP = 600;//初始化關卡數據
                        me_HP = 800;//初始化關卡數據
                        me_a = 120;//初始化關卡數據
                        enemy_a = 100;//初始化關卡數據
                        beat_enemy_number = 0;//初始化關卡數據
                        attack_button_inital();//場景初始化
                        answer = programming_question();//程式設計隨機題庫
                        if (cheater == 1) { system("cls"); printf("%d", answer); }//若登入帳號為作弊帳號,顯示答案
                        programming_level();//程式設計關卡
                    }
                    //初始化網際網路關卡
                    else if (main_scenes <= -6 && main_scenes >= -9)
                    {
                        animation(12,13);//網際網路動畫
                        enemy_HP = 600;//初始化關卡數據
                        me_HP = 800;//初始化關卡數據
                        me_a = 120;//初始化關卡數據
                        enemy_a = 100;//初始化關卡數據
                        beat_enemy_number = 0;//初始化關卡數據
                        attack_button_inital();//場景初始化
                        answer = internet_question();//網際網路隨機題庫
                        if (cheater == 1) { system("cls"); printf("%d", answer); }//若登入帳號為作弊帳號,顯示答案
                        internet_level();//網際網路關卡
                    }
                    //初始化程式設計實習關卡
                    else if (main_scenes <= -10 && main_scenes >= -12)
                    {
                        animation(3, 4);//程式設計實習動畫
                        enemy_HP = 600;//初始化關卡數據
                        me_HP = 800;//初始化關卡數據
                        me_a = 120;//初始化關卡數據
                        enemy_a = 100;//初始化關卡數據
                        beat_enemy_number = 0;//初始化關卡數據
                        attack_button_inital();//場景初始化
                        answer = programming_question();//程式設計實習隨機題庫
                        if (cheater == 1) { system("cls"); printf("%d", answer); }//若登入帳號為作弊帳號,顯示答案
                        programming_Internship_level();//程式設計實習關卡
                    }
                    //初始化數學關卡
                    else if (main_scenes <= -13 && main_scenes >= -16)
                    {
                        animation(30, 31);//數學動畫
                        enemy_HP = 600;//初始化關卡數據
                        me_HP = 800;//初始化關卡數據
                        me_a = 120;//初始化關卡數據
                        enemy_a = 100;//初始化關卡數據
                        beat_enemy_number = 0;//初始化關卡數據
                        attack_button_inital();//場景初始化
                        answer = math_question();//隨機數學題庫
                        if (cheater == 1) { system("cls"); printf("%d", answer); }//若登入帳號為作弊帳號,顯示答案
                        math_level();//數學關卡
                    }
                    //初始化期末考關卡
                    else if (main_scenes == -17)
                    {
                        animation(35, 36);//期末考動畫
                        enemy_HP = 600;//初始化關卡數據
                        me_HP = 800;//初始化關卡數據
                        me_a = 30;//初始化關卡數據
                        enemy_a = 100;//初始化關卡數據
                        attack_button_inital();//場景初始化
                        final_exam_question();
                        if (cheater == 1) { system("cls"); printf("%d", answer); }//若登入帳號為作弊帳號,顯示答案
                        final_exam_level();//期末考關卡
                    }
                }
                //初始化期末考
                else if (msg.x >= 640 && msg.x <= 640 + 150 && msg.y >= 290 && msg.y <= 300 + 200 && *player_passlevel >= 5 && main_scenes == 2)
                {
                    animation(35, 36);//期末考動畫
                    enemy_HP = 600;//初始化關卡數據
                    me_HP = 800;//初始化關卡數據
                    me_a = 30;//初始化關卡數據
                    enemy_a = 100;//初始化關卡數據
                    attack_button_inital();//場景初始化
                    final_exam_question();//期末考隨機題庫
                    if (cheater == 1) { system("cls"); printf("%d", answer); }//若登入帳號為作弊帳號,顯示答案
                    final_exam_level();//期末考關卡
                }
                //返回首頁&登出
                else if (msg.x >= 10 && msg.x <= 100 + 100 && msg.y >= 10 && msg.y <= 10 + 50)
                {
                    if (main_scenes == 2){ loading_animation();/*進度條動畫*/front_page(); }
                    else if (main_scenes == 0) { loading_animation();/*進度條動畫*/ main(); }
                }
                //菜單按鈕
                if (main_scenes == 2)
                {
                    //初始化星期一
                    if (msg.x >= 170 && msg.x <= 170 + 92 && msg.y >= 0 && msg.y <= 0 + 600 && *player_passlevel >= 0)
                    {
                        animation(0,1);//linux動畫
                        enemy_HP = 600;//初始化關卡數據
                        me_HP = 800;//初始化關卡數據
                        me_a = 120;//初始化關卡數據
                        enemy_a = 100;//初始化關卡數據
                        attack_button_inital();//場景初始化
                        answer = linux_question();//linux隨機題庫
                        if (cheater == 1) { system("cls"); printf("%d", answer); }//若登入帳號為作弊帳號,顯示答案
                        linux_level();//linux關卡
                    }
                    //初始化星期二
                    else if (msg.x >= 262 && msg.x <= 262 + 92 && msg.y >= 0 && msg.y <= 0 + 600 && *player_passlevel >= 1)//初始化程式設計關卡
                    {
                        animation(3, 4);//程式設計動畫
                        enemy_HP = 600;//初始化關卡數據
                        me_HP = 800;//初始化關卡數據
                        me_a = 120;//初始化關卡數據
                        enemy_a = 100;//初始化關卡數據
                        beat_enemy_number = 0;//初始化關卡數據
                        attack_button_inital();//場景初始化
                        answer = programming_question();//程式設計隨機題庫
                        if (cheater == 1) { system("cls"); printf("%d", answer); }//若登入帳號為作弊帳號,顯示答案
                        programming_level();//程式設計關卡
                    }
                    //初始化星期三
                    else if (msg.x >= 354 && msg.x <= 354 + 92 && msg.y >= 0 && msg.y <= 0 + 600 && *player_passlevel >= 2)
                    {
                        animation(12, 13);//第三天動畫
                        enemy_HP = 600;//初始化關卡數據
                        me_HP = 800;//初始化關卡數據
                        me_a = 120;//初始化關卡數據
                        enemy_a = 100;//初始化關卡數據
                        beat_enemy_number = 0;//初始化關卡數據
                        attack_button_inital();//場景初始化
                        answer = internet_question();//程式設計隨機題庫
                        if (cheater == 1) { system("cls"); printf("%d", answer); }//若登入帳號為作弊帳號,顯示答案
                        internet_level();//網際網路關卡
                    }
                    //初始化星期四
                    else if (msg.x >= 446 && msg.x <= 446 + 92 && msg.y >= 0 && msg.y <= 0 + 600 && *player_passlevel >= 3)
                    {
                        animation(3, 4);//程式設計動畫
                        enemy_HP = 600;//初始化關卡數據
                        me_HP = 800;//初始化關卡數據
                        me_a = 120;//初始化關卡數據
                        enemy_a = 100;//初始化關卡數據
                        beat_enemy_number = 0;//初始化關卡數據
                        attack_button_inital();//場景初始化
                        answer = programming_question();//程式設計隨機題庫
                        if (cheater == 1) { system("cls"); printf("%d", answer); }//若登入帳號為作弊帳號,顯示答案
                        programming_Internship_level();//程式設計教學關卡
                    }
                    //初始化星期五
                    else if (msg.x >= 538 && msg.x <= 538 + 92 && msg.y >= 0 && msg.y <= 0 + 600 && *player_passlevel >= 4)
                    {
                        animation(30, 31);//數學動畫
                        enemy_HP = 600;//初始化關卡數據
                        me_HP = 800;//初始化關卡數據
                        me_a = 120;//初始化關卡數據
                        enemy_a = 100;//初始化關卡數據
                        beat_enemy_number = 0;//初始化關卡數據
                        attack_button_inital();//場景初始化
                        answer = math_question();//數學隨機題庫
                        if (cheater == 1) { system("cls"); printf("%d", answer); }//若登入帳號為作弊帳號,顯示答案
                        math_level();//數學關卡
                    }
                }
                //攻擊按鈕A
                else if (msg.x >= 50 && msg.x <= 50 + 100 && msg.y >= 525 && msg.y <= 525 + 50 && main_scenes >= 3 && main_scenes <= 18)
                {
                    answer == 1 ? me_attack() : enemy_attack();//結算攻擊傷害並撥放扣血動畫
                    level_ABCD_button(main_scenes, cheater, player_passlevel);//判斷是否獲勝
                }
                //攻擊按鈕B
                else if (msg.x >= 250 && msg.x <= 250 + 100 && msg.y >= 525 && msg.y <= 525 + 50 && main_scenes >= 3 && main_scenes <= 18)
                {
                answer == 2 ? me_attack() : enemy_attack();//結算攻擊傷害並撥放扣血動畫
                level_ABCD_button(main_scenes, cheater, player_passlevel);//判斷是否獲勝
                }
                //攻擊按鈕C
                else if (msg.x >= 450 && msg.x <= 450 + 100 && msg.y >= 525 && msg.y <= 525+ 50 && main_scenes >= 3 && main_scenes <= 18)//攻擊按鈕C
                {
                answer == 3 ? me_attack() : enemy_attack();//結算攻擊傷害並撥放扣血動畫
                level_ABCD_button(main_scenes, cheater, player_passlevel);//判斷是否獲勝
                }
                //攻擊按鈕D
                else if (msg.x >= 650 && msg.x <= 650 + 100 && msg.y >= 525 && msg.y <= 525 + 50 && main_scenes >= 3 && main_scenes <= 18)
                {
                answer == 4 ? me_attack() : enemy_attack();//結算攻擊傷害並撥放扣血動畫
                level_ABCD_button(main_scenes, cheater, player_passlevel);//判斷是否獲勝
                }
                break;
            default:
                break;
            }
        }
    }
    return 0;
}
//************************************************************************
//判斷是否勝利
int level_ABCD_button(int main_scenes, int cheater, int* player_passlevel)
{
    //星期一
    if (main_scenes == 3)
    {
        if (enemy_HP <= 0) { if (*player_passlevel == 0) { ++(*player_passlevel); save_player_passlevel(); } win(me_HP); }//初次獲勝增加通關術,敵方血量為零時失敗
        else if (me_HP <= 0) { lose(); }//當我方血量為零時失敗
        answer = linux_question();//隨機linux題庫
        if (cheater == 1) { system("cls"); printf("%d", answer); }//若登入帳號為作弊帳號,顯示答案
    }
    //星期二
    else if (main_scenes >= 4 && main_scenes <= 6)
    {
        if (enemy_HP <= 0) {
            beat_enemy_number++;//進入下一階段
            //初始化體育關卡數據
            if (beat_enemy_number == 1)
            {
                animation(6,7);//體育動畫
                enemy_HP = 600;//初始化關卡數據
                me_HP = 800;//初始化關卡數據
                me_a = 120;//初始化關卡數據
                enemy_a = 100;//初始化關卡數據
                attack_button_inital();//場景初始化
                answer = PE_question();//體育隨機題庫
                if (cheater == 1) { system("cls"); printf("%d", answer); }//若登入帳號為作弊帳號,顯示答案
                PE_level();//體育關卡
            }
            //初始化計概關卡數據
            else if (beat_enemy_number == 2)
            {
                animation(9, 10);//計概動畫
                enemy_HP = 600;//初始化關卡數據
                me_HP = 800;//初始化關卡數據
                me_a = 120;//初始化關卡數據
                enemy_a = 100;//初始化關卡數據
                attack_button_inital();//場景初始化
                answer = calculator_question();//計概隨機題庫
                if (cheater == 1) { system("cls"); printf("%d", answer); }//若登入帳號為作弊帳號,顯示答案
                calculator_level();//計概關卡
            }
            //連贏三小關獲勝
            else if (beat_enemy_number == 3) { if (*player_passlevel == 1) { ++(*player_passlevel); save_player_passlevel(); } win(me_HP); }//初次獲勝增加通關術,敵方血量為零時失敗
        }//當敵方血量為零時獲勝
        else if (me_HP <= 0) { lose(); }//當我方血量為零時失敗
        if (beat_enemy_number == 0) { answer = programming_question(); if (cheater == 1) { system("cls"); printf("%d", answer); } }
        else if (beat_enemy_number == 1) { answer = PE_question(); if (cheater == 1) { system("cls"); printf("%d", answer); } }
        else if (beat_enemy_number == 2) { answer = calculator_question(); if (cheater == 1) { system("cls"); printf("%d", answer); } }
    }
    //星期三
    else if (main_scenes >= 7 && main_scenes <= 10)
    {
        if (enemy_HP <= 0) {
            beat_enemy_number++;//進入下一階段
            //初始化關卡數據
            if (beat_enemy_number == 1)
            {
                animation(15,16);//資導動畫
                enemy_HP = 600;//初始化關卡數據
                me_HP = 800;//初始化關卡數據
                me_a = 120;//初始化關卡數據
                enemy_a = 100;//初始化關卡數據
                attack_button_inital();//場景初始化
                answer = information_question();//隨機題庫
                if (cheater == 1) { system("cls"); printf("%d", answer); }//若登入帳號為作弊帳號,顯示答案
                information_level();//初始關卡
            }
            //初始化關卡數據
            else if (beat_enemy_number == 2)
            {
                animation(18,19);//英文動畫
                enemy_HP = 600;//初始化關卡數據
                me_HP = 800;//初始化關卡數據
                me_a = 120;//初始化關卡數據
                enemy_a = 100;//初始化關卡數據
                attack_button_inital();//場景初始化
                answer = EN_question();//英文隨機題庫
                if (cheater == 1) { system("cls"); printf("%d", answer); }//若登入帳號為作弊帳號,顯示答案
                EN_level();//初始關卡
            }
            //初始化關卡數據
            else if (beat_enemy_number == 3)
            {
                animation(21, 22);//通識動畫
                enemy_HP = 600;//初始化關卡數據
                me_HP = 800;//初始化關卡數據
                me_a = 120;//初始化關卡數據
                enemy_a = 100;//初始化關卡數據
                attack_button_inital();//場景初始化
                answer = General_Education_question(); //通識隨機題庫
                if (cheater == 1) { system("cls"); printf("%d", answer); }//若登入帳號為作弊帳號,顯示答案
                General_Education_level();//初始關卡
            }
            //連贏四小關獲勝
            else if (beat_enemy_number == 4) { if (*player_passlevel == 2) { ++(*player_passlevel); save_player_passlevel(); } win(me_HP); }//初次獲勝增加通關術,敵方血量為零時失敗
        }//當敵方血量為零時獲勝
        else if (me_HP <= 0) { lose(); }//當我方血量為零時失敗
        if (beat_enemy_number == 0) { answer = internet_question(); if (cheater == 1) { system("cls"); printf("%d", answer); } }
        else if (beat_enemy_number == 1) { answer = information_question(); if (cheater == 1) { system("cls"); printf("%d", answer); } }
        else if (beat_enemy_number == 2) { answer = EN_question(); if (cheater == 1) { system("cls"); printf("%d", answer); } }
        else if (beat_enemy_number == 3) { { answer = General_Education_question(); if (cheater == 1) { system("cls"); printf("%d", answer); } }
        }
    }
    //星期四
    else if (main_scenes >= 11 && main_scenes <= 13)
    {
    if (enemy_HP <= 0) {
        beat_enemy_number++;//進入下一階段
        //初始化國文關卡數據
        if (beat_enemy_number == 1)
        {
            animation(24, 25);//國文動畫
            enemy_HP = 600;//初始化關卡數據
            me_HP = 800;//初始化關卡數據
            me_a = 120;//初始化關卡數據
            enemy_a = 100;//初始化關卡數據
            attack_button_inital();//場景初始化
            answer = CH_question();//國文隨機題庫
            if (cheater == 1) { system("cls"); printf("%d", answer); }//若登入帳號為作弊帳號,顯示答案
            CH_level();//初始關卡
        }
        //初始化社會實踐關卡數據
        else if (beat_enemy_number == 2)
        {
            animation(27, 28);//動畫
            enemy_HP = 600;//初始化關卡數據
            me_HP = 800;//初始化關卡數據
            me_a = 120;//初始化關卡數據
            enemy_a = 100;//初始化關卡數據
            attack_button_inital();//場景初始化
            answer = social_practice_question();//社會實踐隨機題庫
            if (cheater == 1) { system("cls"); printf("%d", answer); }//若登入帳號為作弊帳號,顯示答案
            social_practice_level();//初始關卡
        }
        //連贏三小關獲勝
        else if (beat_enemy_number == 3) { if (*player_passlevel == 3) { ++(*player_passlevel); save_player_passlevel(); } win(me_HP); }//初次獲勝增加通關術,敵方血量為零時失敗
    }//當敵方血量為零時獲勝
    else if (me_HP <= 0) { lose(); }//當我方血量為零時失敗
    if (beat_enemy_number == 0) { answer = programming_question(); if (cheater == 1) { system("cls"); printf("%d", answer); } }
    else if (beat_enemy_number == 1) { answer = CH_question(); if (cheater == 1) { system("cls"); printf("%d", answer); } }
    else if (beat_enemy_number == 2) { answer = social_practice_question(); if (cheater == 1) { system("cls"); printf("%d", answer); } }
    }
    //星期五
    else if (main_scenes >= 14 && main_scenes <= 17)
    {
    if (enemy_HP <= 0) {
        beat_enemy_number++;//進入下一階段
        //初始化關卡數據
        if (beat_enemy_number == 1)
        {
            animation(15, 16);//資導動畫
            enemy_HP = 600;//初始化關卡數據
            me_HP = 800;//初始化關卡數據
            me_a = 120;//初始化關卡數據
            enemy_a = 100;//初始化關卡數據
            attack_button_inital();//場景初始化
            answer = information_question();//資導隨機題庫
            if (cheater == 1) { system("cls"); printf("%d", answer); }//若登入帳號為作弊帳號,顯示答案
            information2_level();//初始關卡
        }
        //初始化關卡數據
        else if (beat_enemy_number == 2)
        {
            animation(9, 10);//計概動畫
            enemy_HP = 600;//初始化關卡數據
            me_HP = 800;//初始化關卡數據
            me_a = 60;//初始化關卡數據
            me_a = 120;//初始化關卡數據
            attack_button_inital();//場景初始化
            answer = calculator_question();//計概隨機題庫
            if (cheater == 1) { system("cls"); printf("%d", answer); }//若登入帳號為作弊帳號,顯示答案
            calculator2_level();//初始關卡
        }
        //初始化關卡數據
        else if (beat_enemy_number == 3)
        {
            animation(30, 31);//動畫
            enemy_HP = 600;//初始化關卡數據
            me_HP = 800;//初始化關卡數據
            me_a = 60;//初始化關卡數據
            me_a = 120;//初始化關卡數據
            attack_button_inital();//場景初始化
            answer = math_question();//隨機題庫
            if (cheater == 1) { system("cls"); printf("%d", answer); }//若登入帳號為作弊帳號,顯示答案
            math2_level();//初始教學
        }
        //連贏四小關獲勝
        else if (beat_enemy_number == 4) { if (*player_passlevel == 4) { ++(*player_passlevel); save_player_passlevel(); } win(me_HP); }//初次獲勝增加通關術
    }//當敵方血量為零時獲勝
    else if (me_HP <= 0) { lose(); }//當我方血量為零時失敗
    if (beat_enemy_number == 0) { answer = math_question(); if (cheater == 1) { system("cls"); printf("%d", answer); } }
    else if (beat_enemy_number == 1) { answer = information_question(); if (cheater == 1) { system("cls"); printf("%d", answer); } }
    else if (beat_enemy_number == 2) { answer = calculator_question(); if (cheater == 1) { system("cls"); printf("%d", answer); } }
    else if (beat_enemy_number == 3) { { answer = math_question(); if (cheater == 1) { system("cls"); printf("%d", answer); } }
    }
    }
    //期末考
    else if (main_scenes == 18)
    {
    if (enemy_HP <= 0) { if (*player_passlevel == 5) { ++(*player_passlevel); save_player_passlevel(); } win(me_HP); }//初次獲勝增加通關術,敵方血量為零時失敗
    else if (me_HP <= 0) { lose(); }//當我方血量為零時失敗
    final_exam_question();//隨機期末考題庫
    if (cheater == 1) { system("cls"); printf("%d", answer); }//若登入帳號為作弊帳號,顯示答案
    }
    return 0;
}
//************************************************************************
//期末考題庫
int final_exam_question(void)
{
    srand((unsigned)time(NULL));
    switch (rand() % 11 + 1)
    {
    case 1:
        answer = linux_question(); break;
    case 2:
        answer = programming_question(); break;
    case 3:
        answer = PE_question(); break;
    case 4:
        answer = calculator_question(); break;
    case 5:
        answer = internet_question(); break;
    case 6:
        answer = information_question(); break;
    case 7:
        answer = EN_question(); break;
    case 8:
        answer = General_Education_question(); break;
    case 9:
        answer = CH_question(); break;
    case 10:
        answer = social_practice_question(); break;
    case 11:
        answer = math_question(); break;
    }
    return 0;
}
//************************************************************************
//<按鈕動畫區>
//首頁按鈕
int front_page_button(ExMessage msg)
{
    setbkmode(TRANSPARENT);//設置文字背景色為透明
    settextstyle(40, 0, "微軟正黑體");//(字高,字寬(預設隨輸出變化),"字體(要系統有的)")
    settextcolor(WHITE);//字體顏色
    BeginBatchDraw();//創建繪圖緩衝區(沒有繪圖緩衝區將導致卡頓)
    if (msg.x >= 250 && msg.x <= 250 + 300 && msg.y >= 400 && msg.y <= 400 + 50)
    {
        setfillcolor(RGB(193, 205, 205));//設置矩形填充色(使用RGB)
        fillroundrect(250, 400, 550, 450, 10, 10);//繪製圓角矩形(左,上,右,下,圓寬,圓高)
        outtextxy(330, 405, "開始遊戲");//輸出文字(文字x,文字y,"文字")
        FlushBatchDraw();//輸出繪圖緩衝區
    }
    else
    {
        setfillcolor(RGB(131, 139, 139));//設置矩形填充色(使用RGB)
        fillroundrect(250, 400, 550, 450, 10, 10);//繪製圓角矩形(左,上,右,下,圓寬,圓高)
        outtextxy(330, 405, "開始遊戲");//輸出文字(文字x,文字y,"文字")
        FlushBatchDraw();//輸出繪圖緩衝區
    }
    EndBatchDraw();//結束繪圖緩衝區
    return 0;
}
//************************************************************************
//攻擊按鈕
int attack_button(ExMessage msg)
{
    setbkmode(TRANSPARENT);//設置文字背景色為透明
    settextstyle(40, 0, "微軟正黑體");//(字高,字寬(預設隨輸出變化),"字體(要系統有的)")
    settextcolor(WHITE);//字體顏色
    BeginBatchDraw();//創建繪圖緩衝區(沒有繪圖緩衝區將導致卡頓)
    setfillcolor(RGB(193, 205, 205));//設置矩形填充色(使用RGB)
    if (msg.x >= 50 && msg.x <= 50 + 100 && msg.y >= 500 && msg.y <= 500 + 50)
    {
        fillroundrect(50, 525, 150, 575, 10, 10);//繪製圓角矩形(左,上,右,下,圓寬,圓高)
        outtextxy(90, 530, "A");//輸出文字(文字x,文字y,"文字")
        FlushBatchDraw();//輸出繪圖緩衝區
    }
    else if (msg.x >= 250 && msg.x <= 250 + 100 && msg.y >= 500 && msg.y <= 500 + 50)
    {
        fillroundrect(250, 525, 350, 575, 10, 10);//繪製圓角矩形(左,上,右,下,圓寬,圓高)
        outtextxy(290, 530, "B");//輸出文字(文字x,文字y,"文字")
        FlushBatchDraw();//輸出繪圖緩衝區
    }
    else if (msg.x >= 450 && msg.x <= 450 + 100 && msg.y >= 500 && msg.y <= 500 + 50)
    {
        fillroundrect(450, 525, 550, 575, 10, 10);//繪製圓角矩形(左,上,右,下,圓寬,圓高)
        outtextxy(490, 530, "C");//輸出文字(文字x,文字y,"文字")
        FlushBatchDraw();//輸出繪圖緩衝區
    }
    else if (msg.x >= 650 && msg.x <= 650 + 100 && msg.y >= 500 && msg.y <= 500 + 50)
    {
        fillroundrect(650, 525, 750, 575, 10, 10);//繪製圓角矩形(左,上,右,下,圓寬,圓高)
        outtextxy(690, 530, "D");//輸出文字(文字x,文字y,"文字")
        FlushBatchDraw();//輸出繪圖緩衝區
    }
    else
    {
        setfillcolor(RGB(131, 139, 139));//設置矩形填充色(使用RGB)
        fillroundrect(50, 525, 150, 575, 10, 10);//繪製圓角矩形(左,上,右,下,圓寬,圓高)
        outtextxy(90, 530, "A");//輸出文字(文字x,文字y,"文字")
        fillroundrect(250, 525, 350, 575, 10, 10);//繪製圓角矩形(左,上,右,下,圓寬,圓高)
        outtextxy(290, 530, "B");//輸出文字(文字x,文字y,"文字")
        fillroundrect(450, 525, 550, 575, 10, 10);//繪製圓角矩形(左,上,右,下,圓寬,圓高)
        outtextxy(490, 530, "C");//輸出文字(文字x,文字y,"文字")
        fillroundrect(650, 525, 750, 575, 10, 10);//繪製圓角矩形(左,上,右,下,圓寬,圓高)
        outtextxy(690, 530, "D");//輸出文字(文字x,文字y,"文字")
        FlushBatchDraw();//輸出繪圖緩衝區
    }
    EndBatchDraw();//結束繪圖緩衝區
    return 0;
}
//************************************************************************
//<結算各類數據,並撥放血條動畫>
//我方攻擊
int me_attack(void)
{
    int save_me_a = 0;
    if (rand() % 100 + 1 <= 50) { save_me_a = me_a*2; }//若暴擊則攻擊力*2
    else { save_me_a = me_a; }//不若暴擊則不變
    BeginBatchDraw();//創建繪圖緩衝區(沒有繪圖緩衝區將導致卡頓)
    for (int i = enemy_HP;i >= enemy_HP - save_me_a;i --)
    {
        if (i < 0) { break; }//防止血條為負
        setfillcolor(WHITE);//設置矩形填充色
        fillroundrect(100, 50, 700, 60, 10, 10);//繪製圓角矩形(左,上,右,下,圓寬,圓高)血量敵
        setfillcolor(RED);//設置矩形填充色
        fillroundrect(100, 50, 100+i, 60, 10, 10);//繪製圓角矩形(左,上,右,下,圓寬,圓高)血量敵
        Sleep(10);
        FlushBatchDraw();//輸出繪圖緩衝區
    }
    EndBatchDraw();//結束繪圖緩衝區
    enemy_HP -= save_me_a;//結算敵方血量
    flushmessage();//清空鼠標當前信息以防信息暴衝
    return 0;
}
//************************************************************************
//敵方攻擊
int enemy_attack(void)
{
    int save_enemy_a = 0;
    if (rand() % 100 + 1 <= 50) { save_enemy_a = enemy_a * 2; }//若暴擊則攻擊力*2
    else { save_enemy_a = enemy_a; }//不若暴擊則不變
    BeginBatchDraw();//創建繪圖緩衝區(沒有繪圖緩衝區將導致卡頓)
    for (int i = me_HP;i >= me_HP - save_enemy_a;i--)
    {
        if (i < 0) { break; }//防止血條為負
        setfillcolor(WHITE);//設置矩形填充色
        fillroundrect(0, 285, 800, 295, 10, 10);//繪製圓角矩形(左,上,右,下,圓寬,圓高)血量我
        setfillcolor(BLUE);//設置矩形填充色
        fillroundrect(0, 285, 0+i, 295, 10, 10);//繪製圓角矩形(左,上,右,下,圓寬,圓高)血量我
        Sleep(10);
        FlushBatchDraw();//輸出繪圖緩衝區
    }
    EndBatchDraw();//結束繪圖緩衝區
    me_HP -= save_enemy_a;//結算我方血量
    flushmessage();//清空鼠標當前信息以防信息暴衝
    return 0;
}
//************************************************************************
//win確定按鈕
int win_confirm_button(ExMessage msg)
{
    setbkmode(TRANSPARENT);//設置文字背景色為透明
    settextstyle(40, 0, "微軟正黑體");//(字高,字寬(預設隨輸出變化),"字體(要系統有的)")
    settextcolor(WHITE);//字體顏色
    BeginBatchDraw();//創建繪圖緩衝區(沒有繪圖緩衝區將導致卡頓)
    if (msg.x >= 250 && msg.x <= 250 + 300 && msg.y >= 400 && msg.y <= 400 + 50)
    {
        setfillcolor(RGB(255, 231, 186));//設置矩形填充色(使用RGB)
        fillroundrect(250, 400, 550, 450, 10, 10);//繪製圓角矩形(左,上,右,下,圓寬,圓高)
        outtextxy(330, 405, "確定");//輸出文字(文字x,文字y,"文字")
        FlushBatchDraw();//輸出繪圖緩衝區
    }
    else
    {
        setfillcolor(RGB(205, 186, 150));//設置矩形填充色(使用RGB)
        fillroundrect(250, 400, 550, 450, 10, 10);//繪製圓角矩形(左,上,右,下,圓寬,圓高)
        outtextxy(330, 405, "確定");//輸出文字(文字x,文字y,"文字")
        FlushBatchDraw();//輸出繪圖緩衝區
    }
    EndBatchDraw();//結束繪圖緩衝區
    return 0;
}
//************************************************************************
//lose確定按鈕&再試一次按鈕
int lose_confirm_button(ExMessage msg)
{
    setbkmode(TRANSPARENT);//設置文字背景色為透明
    settextstyle(40, 0, "微軟正黑體");//(字高,字寬(預設隨輸出變化),"字體(要系統有的)")
    settextcolor(WHITE);//字體顏色
    BeginBatchDraw();//創建繪圖緩衝區(沒有繪圖緩衝區將導致卡頓)
    if (msg.x >= 250 && msg.x <= 250 + 300 && msg.y >= 400 && msg.y <= 400 + 50)
    {
        setfillcolor(RGB(255, 231, 186));//設置矩形填充色(使用RGB)
        fillroundrect(250, 400, 550, 450, 10, 10);//繪製圓角矩形(左,上,右,下,圓寬,圓高)
        outtextxy(330, 405, "確定");//輸出文字(文字x,文字y,"文字")
        FlushBatchDraw();//輸出繪圖緩衝區
    }

    else if (msg.x >= 250 && msg.x <= 250 + 300 && msg.y >= 300 && msg.y <= 300 + 50)
    {
        setfillcolor(RGB(193, 205, 205));//設置矩形填充色(使用RGB)
        fillroundrect(250, 300, 550, 350, 10, 10);//繪製圓角矩形(左,上,右,下,圓寬,圓高)
        outtextxy(330, 305, "再試一次");//輸出文字(文字x,文字y,"文字")
        FlushBatchDraw();//輸出繪圖緩衝區
    }
    else
    {
        setfillcolor(RGB(131, 139, 139));//設置矩形填充色(使用RGB)
        fillroundrect(250, 300, 550, 350, 10, 10);//繪製圓角矩形(左,上,右,下,圓寬,圓高)
        outtextxy(330, 305, "再試一次");//輸出文字(文字x,文字y,"文字")
        setfillcolor(RGB(205, 186, 150));//設置矩形填充色(使用RGB)
        fillroundrect(250, 400, 550, 450, 10, 10);//繪製圓角矩形(左,上,右,下,圓寬,圓高)
        outtextxy(330, 405, "確定");//輸出文字(文字x,文字y,"文字")
        FlushBatchDraw();//輸出繪圖緩衝區
    }
    EndBatchDraw();//結束繪圖緩衝區
    return 0;
}
//************************************************************************
//主頁面按鈕
int main_menu_front_button(ExMessage msg)
{
    setbkmode(TRANSPARENT);//設置文字背景色為透明
    settextcolor(BLACK);//字體顏色
    settextstyle(30, 0, "微軟正黑體");//(字高,字寬(預設隨輸出變化),"字體(要系統有的)")
    if (msg.x >= 10 && msg.x <= 10 + 100 && msg.y >= 10 && msg.y <= 10 + 50)
    {
        setfillcolor(RGB(255, 165, 79));//設置矩形填充色(使用RGB)
        fillroundrect(10, 10, 110, 60, 10, 10);//繪製圓角矩形(左,上,右,下,圓寬,圓高)
        outtextxy(22, 20, "主頁面");//輸出文字(文字x,文字y,"文字")
    }
    else
    {
        setfillcolor(RGB(205, 133, 63));//設置矩形填充色(使用RGB)
        fillroundrect(10, 10, 110, 60, 10, 10);//繪製圓角矩形(左,上,右,下,圓寬,圓高)
        outtextxy(22, 20, "主頁面");//輸出文字(文字x,文字y,"文字")
    }
    return 0;
}
//************************************************************************
//登出按鈕
int Sign_out_button(ExMessage msg)
{
    setbkmode(TRANSPARENT);//設置文字背景色為透明
    settextcolor(BLACK);//字體顏色
    settextstyle(30, 0, "微軟正黑體");//(字高,字寬(預設隨輸出變化),"字體(要系統有的)")
    if (msg.x >= 10 && msg.x <= 10 + 100 && msg.y >= 10 && msg.y <= 10 + 50)
    {
        setfillcolor(RGB(255, 165, 79));//設置矩形填充色(使用RGB)
        fillroundrect(10, 10, 110, 60, 10, 10);//繪製圓角矩形(左,上,右,下,圓寬,圓高)
        outtextxy(35, 20, "登出");//輸出文字(文字x,文字y,"文字")
    }
    else
    {
        setfillcolor(RGB(205, 133, 63));//設置矩形填充色(使用RGB)
        fillroundrect(10, 10, 110, 60, 10, 10);//繪製圓角矩形(左,上,右,下,圓寬,圓高)
        outtextxy(35, 20, "登出");//輸出文字(文字x,文字y,"文字")
    }
    return 0;
}
//************************************************************************