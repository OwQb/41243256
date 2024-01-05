#include"function.h"

int information_question(void)
{
    int coordinate;//選項位置
    int problem_save;//儲存隨機題目
    int options_save[4] = { 0 };//儲存個選項位置
    srand((unsigned)time(NULL));

    problem_save = information_problem();//隨機題目

    options_save[0] = rand() % 4 + 1;//初始隨機答案
    coordinate = question_options_coordinate(options_save[0]);//給予隨機數,設定各選項座標
    information_options_true(problem_save, coordinate);//根據隨機的題目輸出正確選項

    do { options_save[1] = rand() % 4 + 1; } while (options_save[0] == options_save[1]);//使隨機出來的數不等於前1個
    coordinate = question_options_coordinate(options_save[1]);//給予隨機數,設定各選項座標
    information_options_false1(problem_save, coordinate);//根據隨機的題目輸出錯誤選項1

    do { options_save[2] = rand() % 4 + 1; } while (options_save[0] == options_save[2] || options_save[1] == options_save[2]);//使隨機出來的數不等於前2個
    coordinate = question_options_coordinate(options_save[2]);//給予隨機數,設定各選項座標
    information_options_false2(problem_save, coordinate);//根據隨機的題目輸出錯誤選項2

    do { options_save[3] = rand() % 4 + 1; } while (options_save[0] == options_save[3] || options_save[1] == options_save[3] || options_save[2] == options_save[3]);//使隨機出來的數不等於前3個
    coordinate = question_options_coordinate(options_save[3]);//給予隨機數,設定各選項座標
    information_options_false3(problem_save, coordinate);//根據隨機的題目輸出錯誤選項3

    return options_save[0];//返回正確答案位置
}
//*********************************************************************
int information_problem(void)//隨機題目
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
        outtextxy(50, 300, "下列哪一項是控制軟體系統複雜性的方法？");//輸出文字(文字x,文字y,"文字")
        //outtextxy(50, 330, "");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 2:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "下列哪一項不是 UML 的特性？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 3:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "下列哪一項是像其他工程領域一樣從現成的元件建立軟體的嘗試？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 4:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "下列哪一項是表示物件導向設計的符號系統？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 5:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "下列哪一種軟體工程方法是最嚴格的？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 6:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, " n 代表資料筆數，則堆積排序法(Heap Sort)的時間複雜度(Time Complexity)為何？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 7:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "確保資訊系統運作過程的正常有效性,以防止惡意行為導致資訊系統被毀壞或延遲,稱為？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 8:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, " 4 個節點可組成幾個不同之distinct binary tree？ ");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 9:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, " 一個資料表的欄位為其他資料表的主鍵時稱之為");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 10:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "在物件導向程式語言中,關於subclass與public parent class之間的關係，下列何者正確？ ");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 11:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "那一種主記憶體管理方式可避免外部破碎");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 12:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "下列有關高度為 h,節點數為 n 的二元搜尋樹之敘述,何者錯誤？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 13:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "下列何者不是 Python 的特色？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 14:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "Python 屬於下列何種語言？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 15:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "下列何者是 Python 系統的內建編輯器？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 16:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "資料結構的種類通常不包含下列何者？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 17:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "下列何者不是一種Data Structure");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 18:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "用來描述處理問題的方法與步驟稱之為？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 19:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "下列何者不是演算法的特性？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 20:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "下列撰寫程式步驟何者是正確的？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    }
    return problem;//回傳隨機到的題目
}
//*********************************************************************
int information_options_true(int problem, int coordinate)//正確選項
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "Modularity");//輸出文字(文字x,文字y,"文字")
        break;
    case 2:
        outtextxy(70, coordinate, "Dataflow diagrams");//輸出文字(文字x,文字y,"文字")
        break;
    case 3:
        outtextxy(70, coordinate, "Component architecture");//輸出文字(文字x,文字y,"文字")
        break;
    case 4:
        outtextxy(70, coordinate, "UML");//輸出文字(文字x,文字y,"文字")
        break;
    case 5:
        outtextxy(70, coordinate, "Waterfall model");//輸出文字(文字x,文字y,"文字")
        break;
    case 6:
        outtextxy(70, coordinate, " O(n log n)");//輸出文字(文字x,文字y,"文字")
        break;
    case 7:
        outtextxy(70, coordinate, "Availability");//輸出文字(文字x,文字y,"文字")
        break;
    case 8:
        outtextxy(70, coordinate, "14");//輸出文字(文字x,文字y,"文字")
        break;
    case 9:
        outtextxy(70, coordinate, "foreign key");//輸出文字(文字x,文字y,"文字")
        break;
    case 10:
        outtextxy(70, coordinate, "子類別是父類別的一種");//輸出文字(文字x,文字y,"文字")
        break;
    case 11:
        outtextxy(70, coordinate, "paging");//輸出文字(文字x,文字y,"文字")
        break;
    case 12:
        outtextxy(70, coordinate, "對任一 n 筆資料序列進行 tree sorting 所需最少時間與 n 的平方值成正比 ");//輸出文字(文字x,文字y,"文字")
        break;
    case 13:
        outtextxy(70, coordinate, "編譯式語言");//輸出文字(文字x,文字y,"文字")
        break;
    case 14:
        outtextxy(70, coordinate, "高階語言");//輸出文字(文字x,文字y,"文字")
        break;
    case 15:
        outtextxy(70, coordinate, "IDLE");//輸出文字(文字x,文字y,"文字")
        break;
    case 16:
        outtextxy(70, coordinate, "Module");//輸出文字(文字x,文字y,"文字")
        break;
    case 17:
        outtextxy(70, coordinate, "Database");//輸出文字(文字x,文字y,"文字")
        break;
    case 18:
        outtextxy(70, coordinate, "演算法");//輸出文字(文字x,文字y,"文字")
        break;
    case 19:
        outtextxy(70, coordinate, "快速性");//輸出文字(文字x,文字y,"文字")
        break;
    case 20:
        outtextxy(70, coordinate, "需求、演算法、程式碼、偵錯、可執行");//輸出文字(文字x,文字y,"文字")
        break;
    }
    return 0;
}
//*********************************************************************
int information_options_false1(int problem, int coordinate)//錯誤選項1
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "CRC cards");//輸出文字(文字x,文字y,"文字")
        break;
    case 2:
        outtextxy(70, coordinate, "Class diagrams");//輸出文字(文字x,文字y,"文字")
        break;
    case 3:
        outtextxy(70, coordinate, "Open-source development");//輸出文字(文字x,文字y,"文字")
        break;
    case 4:
        outtextxy(70, coordinate, "Modular designs");//輸出文字(文字x,文字y,"文字")
        break;
    case 5:
        outtextxy(70, coordinate, "Incremental model");//輸出文字(文字x,文字y,"文字")
        break;
    case 6:
        outtextxy(70, coordinate, "O(logn)");//輸出文字(文字x,文字y,"文字")
        break;
    case 7:
        outtextxy(70, coordinate, "Audit");//輸出文字(文字x,文字y,"文字")
        break;
    case 8:
        outtextxy(70, coordinate, "16");//輸出文字(文字x,文字y,"文字")
        break;
    case 9:
        outtextxy(70, coordinate, "composite key");//輸出文字(文字x,文字y,"文字")
        break;
    case 10:
        outtextxy(70, coordinate, "父類別可使用子類別的所有函式");//輸出文字(文字x,文字y,"文字")
        break;
    case 11:
        outtextxy(70, coordinate, "contiguous memory allocation");//輸出文字(文字x,文字y,"文字")
        break;
    case 12:
        outtextxy(70, coordinate, "搜尋特定節點所需時間與 h 成正比");//輸出文字(文字x,文字y,"文字")
        break;
    case 13:
        outtextxy(70, coordinate, "簡單易學");//輸出文字(文字x,文字y,"文字")
        break;
    case 14:
        outtextxy(70, coordinate, "中階語言");//輸出文字(文字x,文字y,"文字")
        break;
    case 15:
        outtextxy(70, coordinate, "Spyder");//輸出文字(文字x,文字y,"文字")
        break;
    case 16:
        outtextxy(70, coordinate, "Queue");//輸出文字(文字x,文字y,"文字")
        break;
    case 17:
        outtextxy(70, coordinate, "Queue");//輸出文字(文字x,文字y,"文字")
        break;
    case 18:
        outtextxy(70, coordinate, "資料結構");//輸出文字(文字x,文字y,"文字")
        break;
    case 19:
        outtextxy(70, coordinate, "有限性");//輸出文字(文字x,文字y,"文字")
        break;
    case 20:
        outtextxy(70, coordinate, "需求、演算法、偵錯、程式碼、可執行");//輸出文字(文字x,文字y,"文字")
        break;
    }
    return 0;
}
//*********************************************************************
int information_options_false2(int problem, int coordinate)//錯誤選項2
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "Specifications");//輸出文字(文字x,文字y,"文字")
        break;
    case 2:
        outtextxy(70, coordinate, "Use case diagrams");//輸出文字(文字x,文字y,"文字")
        break;
    case 3:
        outtextxy(70, coordinate, "Extreme programming");//輸出文字(文字x,文字y,"文字")
        break;
    case 4:
        outtextxy(70, coordinate, "Dataflow diagrams");//輸出文字(文字x,文字y,"文字")
        break;
    case 5:
        outtextxy(70, coordinate, "Extreme programming");//輸出文字(文字x,文字y,"文字")
        break;
    case 6:
        outtextxy(70, coordinate, "O(n)");//輸出文字(文字x,文字y,"文字")
        break;
    case 7:
        outtextxy(70, coordinate, "Identity");//輸出文字(文字x,文字y,"文字")
        break;
    case 8:
        outtextxy(70, coordinate, "9");//輸出文字(文字x,文字y,"文字")
        break;
    case 9:
        outtextxy(70, coordinate, "primary key");//輸出文字(文字x,文字y,"文字")
        break;
    case 10:
        outtextxy(70, coordinate, "父類別是子類別的一種 ");//輸出文字(文字x,文字y,"文字")
        break;
    case 11:
        outtextxy(70, coordinate, "first fit memory allocation");//輸出文字(文字x,文字y,"文字")
        break;
    case 12:
        outtextxy(70, coordinate, "依由小到大之次序輸出所有結點資料所需時間與 n 成正比");//輸出文字(文字x,文字y,"文字")
        break;
    case 13:
        outtextxy(70, coordinate, "移植性高");//輸出文字(文字x,文字y,"文字")
        break;
    case 14:
        outtextxy(70, coordinate, "低階語言");//輸出文字(文字x,文字y,"文字")
        break;
    case 15:
        outtextxy(70, coordinate, "IPython");//輸出文字(文字x,文字y,"文字")
        break;
    case 16:
        outtextxy(70, coordinate, "Graph");//輸出文字(文字x,文字y,"文字")
        break;
    case 17:
        outtextxy(70, coordinate, "Stack");//輸出文字(文字x,文字y,"文字")
        break;
    case 18:
        outtextxy(70, coordinate, "程式語言");//輸出文字(文字x,文字y,"文字")
        break;
    case 19:
        outtextxy(70, coordinate, "明確性");//輸出文字(文字x,文字y,"文字")
        break;
    case 20:
        outtextxy(70, coordinate, "演算法、需求、程式碼、偵錯、可執行");//輸出文字(文字x,文字y,"文字")
        break;
    }
    return 0;
}
//*********************************************************************
int information_options_false3(int problem, int coordinate)//錯誤選項3
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "Beta testing");//輸出文字(文字x,文字y,"文字")
        break;
    case 2:
        outtextxy(70, coordinate, "Sequence diagrams");//輸出文字(文字x,文字y,"文字")
        break;
    case 3:
        outtextxy(70, coordinate, "volutionary prototyping");//輸出文字(文字x,文字y,"文字")
        break;
    case 4:
        outtextxy(70, coordinate, "Structure charts");//輸出文字(文字x,文字y,"文字")
        break;
    case 5:
        outtextxy(70, coordinate, "Evolutionary prototyping");//輸出文字(文字x,文字y,"文字")
        break;
    case 6:
        outtextxy(70, coordinate, "O(n^2)");//輸出文字(文字x,文字y,"文字")
        break;
    case 7:
        outtextxy(70, coordinate, "Integrity");//輸出文字(文字x,文字y,"文字")
        break;
    case 8:
        outtextxy(70, coordinate, "5");//輸出文字(文字x,文字y,"文字")
        break;
    case 9:
        outtextxy(70, coordinate, "secondary key");//輸出文字(文字x,文字y,"文字")
        break;
    case 10:
        outtextxy(70, coordinate, "子類別不能使用父類別的所有函式");//輸出文字(文字x,文字y,"文字")
        break;
    case 11:
        outtextxy(70, coordinate, "segmentation");//輸出文字(文字x,文字y,"文字")
        break;
    case 12:
        outtextxy(70, coordinate, "對任一 n 筆資料序列進行 treesorting 所需最多時間與 n 的平方值成正比");//輸出文字(文字x,文字y,"文字")
        break;
    case 13:
        outtextxy(70, coordinate, "免費");//輸出文字(文字x,文字y,"文字")
        break;
    case 14:
        outtextxy(70, coordinate, "組合語言");//輸出文字(文字x,文字y,"文字")
        break;
    case 15:
        outtextxy(70, coordinate, "Notebook");//輸出文字(文字x,文字y,"文字")
        break;
    case 16:
        outtextxy(70, coordinate, "Array");//輸出文字(文字x,文字y,"文字")
        break;
    case 17:
        outtextxy(70, coordinate, "Linked List");//輸出文字(文字x,文字y,"文字")
        break;
    case 18:
        outtextxy(70, coordinate, "作業系統");//輸出文字(文字x,文字y,"文字")
        break;
    case 19:
        outtextxy(70, coordinate, "正確性");//輸出文字(文字x,文字y,"文字")
        break;
    case 20:
        outtextxy(70, coordinate, "程式碼、偵錯、演算法、需求、可執行");//輸出文字(文字x,文字y,"文字")
        break;
    }
    return 0;
}