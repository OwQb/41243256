#include"function.h"

int calculator_question(void)
{
    int coordinate;//選項位置
    int problem_save;//儲存隨機題目
    int options_save[4] = { 0 };//儲存個選項位置
    srand((unsigned)time(NULL));

    problem_save = calculator_problem();//隨機題目

    options_save[0] = rand() % 4 + 1;//初始隨機答案
    coordinate = question_options_coordinate(options_save[0]);//給予隨機數,設定各選項座標
    calculator_options_true(problem_save, coordinate);//根據隨機的題目輸出正確選項

    do { options_save[1] = rand() % 4 + 1; } while (options_save[0] == options_save[1]);//使隨機出來的數不等於前1個
    coordinate = question_options_coordinate(options_save[1]);//給予隨機數,設定各選項座標
    calculator_options_false1(problem_save, coordinate);//根據隨機的題目輸出錯誤選項1

    do { options_save[2] = rand() % 4 + 1; } while (options_save[0] == options_save[2] || options_save[1] == options_save[2]);//使隨機出來的數不等於前2個
    coordinate = question_options_coordinate(options_save[2]);//給予隨機數,設定各選項座標
    calculator_options_false2(problem_save, coordinate);//根據隨機的題目輸出錯誤選項2

    do { options_save[3] = rand() % 4 + 1; } while (options_save[0] == options_save[3] || options_save[1] == options_save[3] || options_save[2] == options_save[3]);//使隨機出來的數不等於前3個
    coordinate = question_options_coordinate(options_save[3]);//給予隨機數,設定各選項座標
    calculator_options_false3(problem_save, coordinate);//根據隨機的題目輸出錯誤選項3

    return options_save[0];//返回正確答案位置
}
//*********************************************************************
int calculator_problem(void)//隨機題目
{
    int problem;
    problem = rand() % 20 + 1;//隨機題目數
    setbkmode(TRANSPARENT);//設置文字背景色為透明
    settextstyle(20, 0, "微軟正黑體");//(字高,字寬(預設隨輸出變化),"字體(要系統有的)")
    settextcolor(BLACK);//字體顏色
    switch (problem)
    {
    case 1:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "哪一種網路應用,使用者可以下載或上傳檔案?");//輸出文字(文字x,文字y,"文字")
        //outtextxy(50, 330, "");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 2:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "將多種型態的資訊如語音、視訊、傳真等整合在一個網路服務稱為");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 3:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "	在設定網路連線時,SMTP伺服器是指？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 4:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "在設定網路連線時,POP3伺服器是指？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 5:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "WWW是何者的縮寫？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 6:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "目前國內最大的學術性Internet服務機構是");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 7:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "進入網路瀏覽器 程式後,若欲進入 Hinet 多媒體網站,則可在「位址」命令列輸入命令如下？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 8:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "將一串數列逐一搜尋直到找到想要的元素,");//輸出文字(文字x,文字y,"文字")
        outtextxy(50, 330, "通常使用在資料量較小的資料列的是下列那一種搜尋法： ");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 9:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "N個資料作氣泡排序時,須經過幾次比較？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 10:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "下列那項非堆疊事例");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 11:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "在資料結構中,\"stack\"稱為：");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 12:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "下列那三個結構是結構化程式設計的控制結構？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 13:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "下列何者對於記憶體的敘述為非");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 14:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "	一般而言,電腦硬體結構可分為五大單元,以下敘述何者錯誤");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 15:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "在購買電腦時若型錄說明為Pentium III 800,其中「800」指的是");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 16:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "下列有關電腦系統的敘述,何者錯誤");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 17:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "數據機是接到電腦的那一種介面");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 18:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "	用來監督管理電腦所有資源的軟體為");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 19:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "學校的電腦網路頻寬如果為100M, 網路下後面需接一條的網路線,");//輸出文字(文字x,文字y,"文字")
        outtextxy(50, 330, "網路線的接頭類似電話線接頭,我們稱為何種接頭");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 20:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "一般我們稱為主記憶體的是下列何種記憶體");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    }
    return problem;//回傳隨機到的題目
}
//*********************************************************************
int calculator_options_true(int problem, int coordinate)//正確選項
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "FTP");//輸出文字(文字x,文字y,"文字")
        break;
    case 2:
        outtextxy(70, coordinate, "整體服務數位網路");//輸出文字(文字x,文字y,"文字")
        break;
    case 3:
        outtextxy(70, coordinate, "寄信伺服器");//輸出文字(文字x,文字y,"文字")
        break;
    case 4:
        outtextxy(70, coordinate, "收信伺服器");//輸出文字(文字x,文字y,"文字")
        break;
    case 5:
        outtextxy(70, coordinate, "World Wide Web");//輸出文字(文字x,文字y,"文字")
        break;
    case 6:
        outtextxy(70, coordinate, "TANet");//輸出文字(文字x,文字y,"文字")
        break;
    case 7:
        outtextxy(70, coordinate, "http:\//www.hinet.net");//輸出文字(文字x,文字y,"文字")
        break;
    case 8:
        outtextxy(70, coordinate, "循序搜尋法");//輸出文字(文字x,文字y,"文字")
        break;
    case 9:
        outtextxy(70, coordinate, "N(N-1)/2");//輸出文字(文字x,文字y,"文字")
        break;
    case 10:
        outtextxy(70, coordinate, "排隊買票");//輸出文字(文字x,文字y,"文字")
        break;
    case 11:
        outtextxy(70, coordinate, "堆疊");//輸出文字(文字x,文字y,"文字")
        break;
    case 12:
        outtextxy(70, coordinate, "循序、選擇、重複");//輸出文字(文字x,文字y,"文字")
        break;
    case 13:
        outtextxy(70, coordinate, "RAM可分為DRAM與SRAM");//輸出文字(文字x,文字y,"文字")
        break;
    case 14:
        outtextxy(70, coordinate, "控制單元負責做AND、OR、NOT等運算");//輸出文字(文字x,文字y,"文字")
        break;
    case 15:
        outtextxy(70, coordinate, "CPU的速度為800MHz");//輸出文字(文字x,文字y,"文字")
        break;
    case 16:
        outtextxy(70, coordinate, "BIOS存在硬碟中");//輸出文字(文字x,文字y,"文字")
        break;
    case 17:
        outtextxy(70, coordinate, "串列埠");//輸出文字(文字x,文字y,"文字")
        break;
    case 18:
        outtextxy(70, coordinate, "作業系統");//輸出文字(文字x,文字y,"文字")
        break;
    case 19:
        outtextxy(70, coordinate, "RJ-45");//輸出文字(文字x,文字y,"文字")
        break;
    case 20:
        outtextxy(70, coordinate, "隨機存取記憶體");//輸出文字(文字x,文字y,"文字")
        break;
    }
    return 0;
}
//*********************************************************************
int calculator_options_false1(int problem, int coordinate)//錯誤選項1
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "WWW");//輸出文字(文字x,文字y,"文字")
        break;
    case 2:
        outtextxy(70, coordinate, "區域網路");//輸出文字(文字x,文字y,"文字")
        break;
    case 3:
        outtextxy(70, coordinate, "收信伺服器");//輸出文字(文字x,文字y,"文字")
        break;
    case 4:
        outtextxy(70, coordinate, "寄信伺服器");//輸出文字(文字x,文字y,"文字")
        break;
    case 5:
        outtextxy(70, coordinate, "World Web Wide");//輸出文字(文字x,文字y,"文字")
        break;
    case 6:
        outtextxy(70, coordinate, "SeedNet");//輸出文字(文字x,文字y,"文字")
        break;
    case 7:
        outtextxy(70, coordinate, "ftp:\//www.hinet.net");//輸出文字(文字x,文字y,"文字")
        break;
    case 8:
        outtextxy(70, coordinate, "合併搜尋法");//輸出文字(文字x,文字y,"文字")
        break;
    case 9:
        outtextxy(70, coordinate, "N/2");//輸出文字(文字x,文字y,"文字")
        break;
    case 10:
        outtextxy(70, coordinate, "堆積木");//輸出文字(文字x,文字y,"文字")
        break;
    case 11:
        outtextxy(70, coordinate, "佇列");//輸出文字(文字x,文字y,"文字")
        break;
    case 12:
        outtextxy(70, coordinate, "循序、索引、選擇");//輸出文字(文字x,文字y,"文字")
        break;
    case 13:
        outtextxy(70, coordinate, "主記憶體最主要是存放欲執行的程式與資料");//輸出文字(文字x,文字y,"文字")
        break;
    case 14:
        outtextxy(70, coordinate, "鍵盤屬於輸入單元");//輸出文字(文字x,文字y,"文字")
        break;
    case 15:
        outtextxy(70, coordinate, "主記憶體有800MB");//輸出文字(文字x,文字y,"文字")
        break;
    case 16:
        outtextxy(70, coordinate, "控制單元負責指令解碼");//輸出文字(文字x,文字y,"文字")
        break;
    case 17:
        outtextxy(70, coordinate, "並列埠");//輸出文字(文字x,文字y,"文字")
        break;
    case 18:
        outtextxy(70, coordinate, "管理資訊系統");//輸出文字(文字x,文字y,"文字")
        break;
    case 19:
        outtextxy(70, coordinate, "BNC");//輸出文字(文字x,文字y,"文字")
        break;
    case 20:
        outtextxy(70, coordinate, "虛擬記憶體");//輸出文字(文字x,文字y,"文字")
        break;
    }
    return 0;
}
//*********************************************************************
int calculator_options_false2(int problem, int coordinate)//錯誤選項2
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "Gopher");//輸出文字(文字x,文字y,"文字")
        break;
    case 2:
        outtextxy(70, coordinate, "加值型網路");//輸出文字(文字x,文字y,"文字")
        break;
    case 3:
        outtextxy(70, coordinate, "檔案伺服器");//輸出文字(文字x,文字y,"文字")
        break;
    case 4:
        outtextxy(70, coordinate, "檔案伺服器");//輸出文字(文字x,文字y,"文字")
        break;
    case 5:
        outtextxy(70, coordinate, "Web WorldWide");//輸出文字(文字x,文字y,"文字")
        break;
    case 6:
        outtextxy(70, coordinate, "HiNet");//輸出文字(文字x,文字y,"文字")
        break;
    case 7:
        outtextxy(70, coordinate, "http:\//hinet.net.tw");//輸出文字(文字x,文字y,"文字")
        break;
    case 8:
        outtextxy(70, coordinate, "快速搜尋法");//輸出文字(文字x,文字y,"文字")
        break;
    case 9:
        outtextxy(70, coordinate, "N");//輸出文字(文字x,文字y,"文字")
        break;
    case 10:
        outtextxy(70, coordinate, "蓋房子");//輸出文字(文字x,文字y,"文字")
        break;
    case 11:
        outtextxy(70, coordinate, "樹");//輸出文字(文字x,文字y,"文字")
        break;
    case 12:
        outtextxy(70, coordinate, "索引、選擇、重複");//輸出文字(文字x,文字y,"文字")
        break;
    case 13:
        outtextxy(70, coordinate, "主記憶體其容量大小通常以MB（百萬位元組）表示");//輸出文字(文字x,文字y,"文字")
        break;
    case 14:
        outtextxy(70, coordinate, "算術邏輯單元又稱ALU");//輸出文字(文字x,文字y,"文字")
        break;
    case 15:
        outtextxy(70, coordinate, "硬碟有800MB");//輸出文字(文字x,文字y,"文字")
        break;
    case 16:
        outtextxy(70, coordinate, "加法運算在ALU中執行");//輸出文字(文字x,文字y,"文字")
        break;
    case 17:
        outtextxy(70, coordinate, "ECP/EPP");//輸出文字(文字x,文字y,"文字")
        break;
    case 18:
        outtextxy(70, coordinate, "檔案系統");//輸出文字(文字x,文字y,"文字")
        break;
    case 19:
        outtextxy(70, coordinate, "FDD");//輸出文字(文字x,文字y,"文字")
        break;
    case 20:
        outtextxy(70, coordinate, "唯讀記憶體");//輸出文字(文字x,文字y,"文字")
        break;
    }
    return 0;
}
//*********************************************************************
int calculator_options_false3(int programming_problem, int coordinate)//錯誤選項3
{
    switch (programming_problem)
    {
    case 1:
        outtextxy(70, coordinate, "News");//輸出文字(文字x,文字y,"文字")
        break;
    case 2:
        outtextxy(70, coordinate, "皆非");//輸出文字(文字x,文字y,"文字")
        break;
    case 3:
        outtextxy(70, coordinate, "網站伺服器");//輸出文字(文字x,文字y,"文字")
        break;
    case 4:
        outtextxy(70, coordinate, "網站伺服器");//輸出文字(文字x,文字y,"文字")
        break;
    case 5:
        outtextxy(70, coordinate, "WideWeb World");//輸出文字(文字x,文字y,"文字")
        break;
    case 6:
        outtextxy(70, coordinate, "BitNet");//輸出文字(文字x,文字y,"文字")
        break;
    case 7:
        outtextxy(70, coordinate, "ftp:\//hinet.net.com");//輸出文字(文字x,文字y,"文字")
        break;
    case 8:
        outtextxy(70, coordinate, "二分搜尋法");//輸出文字(文字x,文字y,"文字")
        break;
    case 9:
        outtextxy(70, coordinate, "N(N+1)/2");//輸出文字(文字x,文字y,"文字")
        break;
    case 10:
        outtextxy(70, coordinate, "堆盤子");//輸出文字(文字x,文字y,"文字")
        break;
    case 11:
        outtextxy(70, coordinate, "鏈結串列");//輸出文字(文字x,文字y,"文字")
        break;
    case 12:
        outtextxy(70, coordinate, "樹狀、循序、重複");//輸出文字(文字x,文字y,"文字")
        break;
    case 13:
        outtextxy(70, coordinate, "主記憶體大都採用靜態隨機存取記憶體（SRAM）");//輸出文字(文字x,文字y,"文字")
        break;
    case 14:
        outtextxy(70, coordinate, "滑鼠屬於輸入單元");//輸出文字(文字x,文字y,"文字")
        break;
    case 15:
        outtextxy(70, coordinate, "主機板型號為800");//輸出文字(文字x,文字y,"文字")
        break;
    case 16:
        outtextxy(70, coordinate, "比較大小的運算在ALU中執行");//輸出文字(文字x,文字y,"文字")
        break;
    case 17:
        outtextxy(70, coordinate, "VGA");//輸出文字(文字x,文字y,"文字")
        break;
    case 18:
        outtextxy(70, coordinate, "I/O系統");//輸出文字(文字x,文字y,"文字")
        break;
    case 19:
        outtextxy(70, coordinate, "FTP");//輸出文字(文字x,文字y,"文字")
        break;
    case 20:
        outtextxy(70, coordinate, "快取記憶體");//輸出文字(文字x,文字y,"文字")
        break;
    }
    return 0;
}