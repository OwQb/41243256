#include"function.h"

int linux_question(void)
{
    int coordinate;//選項位置
    int problem_save;//儲存隨機題目
    int options_save[4] = { 0 };//儲存個選項位置
    srand((unsigned)time(NULL));

    problem_save = linux_problem();//隨機題目

    options_save[0] = rand() % 4 + 1;//初始隨機答案
    coordinate = question_options_coordinate(options_save[0]);//給予隨機數,設定各選項座標
    linux_options_true(problem_save, coordinate);//根據隨機的題目輸出正確選項

    do { options_save[1] = rand() % 4 + 1; } while (options_save[0] == options_save[1]);//使隨機出來的數不等於前1個
    coordinate = question_options_coordinate(options_save[1]);//給予隨機數,設定各選項座標
    linux_options_false1(problem_save, coordinate);//根據隨機的題目輸出錯誤選項1

    do { options_save[2] = rand() % 4 + 1; } while (options_save[0] == options_save[2] || options_save[1] == options_save[2]);//使隨機出來的數不等於前2個
    coordinate = question_options_coordinate(options_save[2]);//給予隨機數,設定各選項座標
    linux_options_false2(problem_save, coordinate);//根據隨機的題目輸出錯誤選項2

    do { options_save[3] = rand() % 4 + 1; } while (options_save[0] == options_save[3] || options_save[1] == options_save[3] || options_save[2] == options_save[3]);//使隨機出來的數不等於前3個
    coordinate = question_options_coordinate(options_save[3]);//給予隨機數,設定各選項座標
    linux_options_false3(problem_save, coordinate);//根據隨機的題目輸出錯誤選項3

    return options_save[0];//返回正確答案位置
}
//*********************************************************************
int linux_problem(void)//隨機題目
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
        outtextxy(50, 300, "如果開啟Terminal應用程式，看到如下提示訊息，請問「目前使用中的使用者帳號」是什麼?");//輸出文字(文字x,文字y,"文字")
        outtextxy(50, 330, "nfu@nfu-VirtualBox:~$");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 2:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "ubuntu的Terminal切換到左邊一個標籤頁(tab)的熱鍵是？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 3:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "如覺得IP來源位址1.2.3.4的機器在攻擊你，該如何透過iptables防禦它？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 4:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "新增一個Terminal視窗的熱鍵是？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 5:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "哪一個命令能用來創建命令的簡寫或別名?");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 6:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "下列哪一個Ubuntu版本不是LTS？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 7:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "依照上課所教(介紹證照的時候)的分類,Linux Mint是屬於那一系列的發行版?");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 8:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "那列哪一個Linux發行版即將於2024年6月30日停止更新,也就是EOS(或說是EOL)?");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 9:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "文字編輯器nano儲存檔案的熱鍵是什麼？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 10:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "通常apt-get會問是否同意進行該操作，而使用者通常會回答Y。");//輸出文字(文字x,文字y,"文字")
        outtextxy(50, 330, "如果不想多花( 浪費) 這麼一些時間輸入Y，可以在指令加上什麼選項？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 11:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "登陸系統后首先進入下列哪一個目錄?");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 12:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "系統的配置文件在______目錄下");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 13:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "哪一個命令能用來查找在文件TESTFILE 中只包含四個字元的行?");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 14:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "當Linux 內核執行硬體的檢測和激活交換分區后，運行下列哪一個程序?");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 15:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "用」rm -i」，系統會提示什麼來讓你確認");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 16:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "用下面哪個命令可以不用退出vi 編輯器來切換文件");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 17:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "除非特別指定，cp 假定要拷貝的文件在下面哪個目錄下");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 18:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "下面哪個命令是全屏文本編輯器");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 19:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "Linux 的命令用下面哪個選擇來解釋");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 20:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "在一行內運行多個命令需要用什麼字元隔開");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    }
    return problem;//回傳隨機到的題目
}
//*********************************************************************
int linux_options_true(int problem ,int coordinate)//正確選項
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "nfu");//輸出文字(文字x,文字y,"文字")
        break;
    case 2:
        outtextxy(70, coordinate, "Ctrl+PageUp");//輸出文字(文字x,文字y,"文字")
        break;
    case 3:
        outtextxy(70, coordinate, "sudo iptables -A INPUT -s 1.2.3.4 -j DROP");//輸出文字(文字x,文字y,"文字")
        break;
    case 4:
        outtextxy(70, coordinate, "Ctrl+Alt+t");//輸出文字(文字x,文字y,"文字")
        break;
    case 5:
        outtextxy(70, coordinate, "alias");//輸出文字(文字x,文字y,"文字")
        break;
    case 6:
        outtextxy(70, coordinate, "23.04");//輸出文字(文字x,文字y,"文字")
        break;
    case 7:
        outtextxy(70, coordinate, "Debian系列");//輸出文字(文字x,文字y,"文字")
        break;
    case 8:
        outtextxy(70, coordinate, "CentOS");//輸出文字(文字x,文字y,"文字")
        break;
    case 9:
        outtextxy(70, coordinate, "Ctrl + o");//輸出文字(文字x,文字y,"文字")
        break;
    case 10:
        outtextxy(70, coordinate, "-y");//輸出文字(文字x,文字y,"文字")
        break;
    case 11:
        outtextxy(70, coordinate, "用戶自己的主目錄");//輸出文字(文字x,文字y,"文字")
        break;
    case 12:
        outtextxy(70, coordinate, "/etc");//輸出文字(文字x,文字y,"文字")
        break;
    case 13:
        outtextxy(70, coordinate, "grep '^....$' TESTFILE");//輸出文字(文字x,文字y,"文字")
        break;
    case 14:
        outtextxy(70, coordinate, "/sbin/init");//輸出文字(文字x,文字y,"文字")
        break;
    case 15:
        outtextxy(70, coordinate, "是否真的刪除");//輸出文字(文字x,文字y,"文字")
        break;
    case 16:
        outtextxy(70, coordinate, ":e for edit command");//輸出文字(文字x,文字y,"文字")
        break;
    case 17:
        outtextxy(70, coordinate, "當前目錄");//輸出文字(文字x,文字y,"文字")
        break;
    case 18:
        outtextxy(70, coordinate, "vi");//輸出文字(文字x,文字y,"文字")
        break;
    case 19:
        outtextxy(70, coordinate, "shell");//輸出文字(文字x,文字y,"文字")
        break;
    case 20:
        outtextxy(70, coordinate, ";");//輸出文字(文字x,文字y,"文字")
        break;
    }
    return 0;
}
//*********************************************************************
int linux_options_false1(int problem, int coordinate)//錯誤選項1
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "nfu-VirtualBox");//輸出文字(文字x,文字y,"文字")
        break;
    case 2:
        outtextxy(70, coordinate, "Ctrl+Home");//輸出文字(文字x,文字y,"文字")
        break;
    case 3:
        outtextxy(70, coordinate, "sudo iptables -A INPUT -s 1.2.3.4 -j Reject");//輸出文字(文字x,文字y,"文字")
        break;
    case 4:
        outtextxy(70, coordinate, "Ctrl+Shift+t");//輸出文字(文字x,文字y,"文字")
        break;
    case 5:
        outtextxy(70, coordinate, "awk");//輸出文字(文字x,文字y,"文字")
        break;
    case 6:
        outtextxy(70, coordinate, "18.04");//輸出文字(文字x,文字y,"文字")
        break;
    case 7:
        outtextxy(70, coordinate, "Red Hat系列");//輸出文字(文字x,文字y,"文字")
        break;
    case 8:
        outtextxy(70, coordinate, "Oracle Linux");//輸出文字(文字x,文字y,"文字")
        break;
    case 9:
        outtextxy(70, coordinate, "Ctrl + s");//輸出文字(文字x,文字y,"文字")
        break;
    case 10:
        outtextxy(70, coordinate, "--ok");//輸出文字(文字x,文字y,"文字")
        break;
    case 11:
        outtextxy(70, coordinate, "/root");//輸出文字(文字x,文字y,"文字")
        break;
    case 12:
        outtextxy(70, coordinate, "/home");//輸出文字(文字x,文字y,"文字")
        break;
    case 13:
        outtextxy(70, coordinate, "grep '^????$' TESTFILE");//輸出文字(文字x,文字y,"文字")
        break;
    case 14:
        outtextxy(70, coordinate, "/sbin/reboot");//輸出文字(文字x,文字y,"文字")
        break;
    case 15:
        outtextxy(70, coordinate, "命令行的每個選項");//輸出文字(文字x,文字y,"文字")
        break;
    case 16:
        outtextxy(70, coordinate, "map command");//輸出文字(文字x,文字y,"文字")
        break;
    case 17:
        outtextxy(70, coordinate, "home 目錄");//輸出文字(文字x,文字y,"文字")
        break;
    case 18:
        outtextxy(70, coordinate, "ed");//輸出文字(文字x,文字y,"文字")
        break;
    case 19:
        outtextxy(70, coordinate, "核心");//輸出文字(文字x,文字y,"文字")
        break;
    case 20:
        outtextxy(70, coordinate, "$");//輸出文字(文字x,文字y,"文字")
        break;
    }
    return 0;
}
//*********************************************************************
int linux_options_false2(int problem, int coordinate)//錯誤選項2
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "VirtualBox");//輸出文字(文字x,文字y,"文字")
        break;
    case 2:
        outtextxy(70, coordinate, "Ctrl+PageDown");//輸出文字(文字x,文字y,"文字")
        break;
    case 3:
        outtextxy(70, coordinate, "sudo iptables -A OUTPUT -s 1.2.3.4 -j Reject");//輸出文字(文字x,文字y,"文字")
        break;
    case 4:
        outtextxy(70, coordinate, "Alt+Shift+t");//輸出文字(文字x,文字y,"文字")
        break;
    case 5:
        outtextxy(70, coordinate, "echo");//輸出文字(文字x,文字y,"文字")
        break;
    case 6:
        outtextxy(70, coordinate, "22.04");//輸出文字(文字x,文字y,"文字")
        break;
    case 7:
        outtextxy(70, coordinate, "它其實不是Linux");//輸出文字(文字x,文字y,"文字")
        break;
    case 8:
        outtextxy(70, coordinate, "AlmaLinux");//輸出文字(文字x,文字y,"文字")
        break;
    case 9:
        outtextxy(70, coordinate, ":w");//輸出文字(文字x,文字y,"文字")
        break;
    case 10:
        outtextxy(70, coordinate, "-Y");//輸出文字(文字x,文字y,"文字")
        break;
    case 11:
        outtextxy(70, coordinate, "root 的主目錄");//輸出文字(文字x,文字y,"文字")
        break;
    case 12:
        outtextxy(70, coordinate, "/usr");//輸出文字(文字x,文字y,"文字")
        break;
    case 13:
        outtextxy(70, coordinate, "grep '....' TESTFILE");//輸出文字(文字x,文字y,"文字")
        break;
    case 14:
        outtextxy(70, coordinate, "/sbin/startup");//輸出文字(文字x,文字y,"文字")
        break;
    case 15:
        outtextxy(70, coordinate, "是否有寫的許可權");//輸出文字(文字x,文字y,"文字")
        break;
    case 16:
        outtextxy(70, coordinate, "export command");//輸出文字(文字x,文字y,"文字")
        break;
    case 17:
        outtextxy(70, coordinate, "root 目錄");//輸出文字(文字x,文字y,"文字")
        break;
    case 18:
        outtextxy(70, coordinate, "pr");//輸出文字(文字x,文字y,"文字")
        break;
    case 19:
        outtextxy(70, coordinate, "用戶介面");//輸出文字(文字x,文字y,"文字")
        break;
    case 20:
        outtextxy(70, coordinate, "*");//輸出文字(文字x,文字y,"文字")
        break;
    }
    return 0;
}
//*********************************************************************
int linux_options_false3(int problem, int coordinate)//錯誤選項3
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "@");//輸出文字(文字x,文字y,"文字")
        break;
    case 2:
        outtextxy(70, coordinate, "Ctrl+End");//輸出文字(文字x,文字y,"文字")
        break;
    case 3:
        outtextxy(70, coordinate, "sudo iptables -A OUTPUT -s 1.2.3.4 -j DROP");//輸出文字(文字x,文字y,"文字")
        break;
    case 4:
        outtextxy(70, coordinate, "t");//輸出文字(文字x,文字y,"文字")
        break;
    case 5:
        outtextxy(70, coordinate, "alien");//輸出文字(文字x,文字y,"文字")
        break;
    case 6:
        outtextxy(70, coordinate, "20.04");//輸出文字(文字x,文字y,"文字")
        break;
    case 7:
        outtextxy(70, coordinate, "其他系列");//輸出文字(文字x,文字y,"文字")
        break;
    case 8:
        outtextxy(70, coordinate, "Rocky Linux");//輸出文字(文字x,文字y,"文字")
        break;
    case 9:
        outtextxy(70, coordinate, ":wq");//輸出文字(文字x,文字y,"文字")
        break;
    case 10:
        outtextxy(70, coordinate, "--skip");//輸出文字(文字x,文字y,"文字")
        break;
    case 11:
        outtextxy(70, coordinate, "/home");//輸出文字(文字x,文字y,"文字")
        break;
    case 12:
        outtextxy(70, coordinate, "/dev");//輸出文字(文字x,文字y,"文字")
        break;
    case 13:
        outtextxy(70, coordinate, "grep '????' TESTFILE");//輸出文字(文字x,文字y,"文字")
        break;
    case 14:
        outtextxy(70, coordinate, "/bin/sh");//輸出文字(文字x,文字y,"文字")
        break;
    case 15:
        outtextxy(70, coordinate, "文件的位置");//輸出文字(文字x,文字y,"文字")
        break;
    case 16:
        outtextxy(70, coordinate, "set command");//輸出文字(文字x,文字y,"文字")
        break;
    case 17:
        outtextxy(70, coordinate, "用戶目錄");//輸出文字(文字x,文字y,"文字")
        break;
    case 18:
        outtextxy(70, coordinate, "cw");//輸出文字(文字x,文字y,"文字")
        break;
    case 19:
        outtextxy(70, coordinate, "應用管理器");//輸出文字(文字x,文字y,"文字")
        break;
    case 20:
        outtextxy(70, coordinate, "@");//輸出文字(文字x,文字y,"文字")
        break;
    }
    return 0;
}
//************************************************************************
int question_options_coordinate(int options)//給予隨機數,設定各選項座標
{
    int coordinate;
    if (options == 1) { coordinate = 370; }
    else if (options == 2) { coordinate = 400; }
    else if (options == 3) { coordinate = 430; }
    else if (options == 4) { coordinate = 460; }
    return coordinate;
}
//************************************************************************
int ABCD(void)//輸出ABCD
{
    setbkmode(TRANSPARENT);//設置文字背景色為透明
    settextstyle(20, 0, "微軟正黑體");//(字高,字寬(預設隨輸出變化),"字體(要系統有的)")
    settextcolor(BLACK);//字體顏色
    outtextxy(50, 370, "A. ");//輸出文字(文字x,文字y,"文字")
    outtextxy(50, 400, "B.");//輸出文字(文字x,文字y,"文字")
    outtextxy(50, 430, "C.");//輸出文字(文字x,文字y,"文字")
    outtextxy(50, 460, "D.");//輸出文字(文字x,文字y,"文字")
    return 0;
}
//************************************************************************
/*
#include"function.h"

int _question(void)
{
    int coordinate;//選項位置
    int problem_save;//儲存隨機題目
    int options_save[4] = { 0 };//儲存個選項位置
    srand((unsigned)time(NULL));

    problem_save = _problem();//隨機題目

    options_save[0] = rand() % 4 + 1;//初始隨機答案
    coordinate = question_options_coordinate(options_save[0]);//給予隨機數,設定各選項座標
    _options_true(problem_save, coordinate);//根據隨機的題目輸出正確選項

    do { options_save[1] = rand() % 4 + 1; } while (options_save[0] == options_save[1]);//使隨機出來的數不等於前1個
    coordinate = question_options_coordinate(options_save[1]);//給予隨機數,設定各選項座標
    _options_false1(problem_save, coordinate);//根據隨機的題目輸出錯誤選項1

    do { options_save[2] = rand() % 4 + 1; } while (options_save[0] == options_save[2] || options_save[1] == options_save[2]);//使隨機出來的數不等於前2個
    coordinate = question_options_coordinate(options_save[2]);//給予隨機數,設定各選項座標
    _options_false2(problem_save, coordinate);//根據隨機的題目輸出錯誤選項2

    do { options_save[3] = rand() % 4 + 1; } while (options_save[0] == options_save[3] || options_save[1] == options_save[3] || options_save[2] == options_save[3]);//使隨機出來的數不等於前3個
    coordinate = question_options_coordinate(options_save[3]);//給予隨機數,設定各選項座標
    _options_false3(problem_save, coordinate);//根據隨機的題目輸出錯誤選項3

    return options_save[0];//返回正確答案位置
}
//*********************************************************************
int _problem(void)//隨機題目
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
        //**********************************************************************************************************************************************************
        outtextxy(50, 300, "");//輸出文字(文字x,文字y,"文字")
        //outtextxy(50, 330, "");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 2:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 3:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 4:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 5:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 6:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 7:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 8:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 9:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 10:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 11:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 12:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 13:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 14:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 15:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 16:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 17:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 18:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 19:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 20:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    }
    return problem;//回傳隨機到的題目
}
//*********************************************************************
int _options_true(int problem, int coordinate)//正確選項
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "1");//輸出文字(文字x,文字y,"文字")
        break;
    case 2:
        outtextxy(70, coordinate, "1");//輸出文字(文字x,文字y,"文字")
        break;
    case 3:
        outtextxy(70, coordinate, "1");//輸出文字(文字x,文字y,"文字")
        break;
    case 4:
        outtextxy(70, coordinate, "1");//輸出文字(文字x,文字y,"文字")
        break;
    case 5:
        outtextxy(70, coordinate, "1");//輸出文字(文字x,文字y,"文字")
        break;
    case 6:
        outtextxy(70, coordinate, "1");//輸出文字(文字x,文字y,"文字")
        break;
    case 7:
        outtextxy(70, coordinate, "1");//輸出文字(文字x,文字y,"文字")
        break;
    case 8:
        outtextxy(70, coordinate, "1");//輸出文字(文字x,文字y,"文字")
        break;
    case 9:
        outtextxy(70, coordinate, "1");//輸出文字(文字x,文字y,"文字")
        break;
    case 10:
        outtextxy(70, coordinate, "1");//輸出文字(文字x,文字y,"文字")
        break;
    case 11:
        outtextxy(70, coordinate, "1");//輸出文字(文字x,文字y,"文字")
        break;
    case 12:
        outtextxy(70, coordinate, "1");//輸出文字(文字x,文字y,"文字")
        break;
    case 13:
        outtextxy(70, coordinate, "1");//輸出文字(文字x,文字y,"文字")
        break;
    case 14:
        outtextxy(70, coordinate, "1");//輸出文字(文字x,文字y,"文字")
        break;
    case 15:
        outtextxy(70, coordinate, "1");//輸出文字(文字x,文字y,"文字")
        break;
    case 16:
        outtextxy(70, coordinate, "1");//輸出文字(文字x,文字y,"文字")
        break;
    case 17:
        outtextxy(70, coordinate, "1");//輸出文字(文字x,文字y,"文字")
        break;
    case 18:
        outtextxy(70, coordinate, "1");//輸出文字(文字x,文字y,"文字")
        break;
    case 19:
        outtextxy(70, coordinate, "1");//輸出文字(文字x,文字y,"文字")
        break;
    case 20:
        outtextxy(70, coordinate, "1");//輸出文字(文字x,文字y,"文字")
        break;
    }
    return 0;
}
//*********************************************************************
int _options_false1(int problem, int coordinate)//錯誤選項1
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 2:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 3:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 4:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 5:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 6:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 7:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 8:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 9:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 10:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 11:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 12:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 13:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 14:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 15:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 16:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 17:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 18:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 19:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 20:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    }
    return 0;
}
//*********************************************************************
int _options_false2(int problem, int coordinate)//錯誤選項2
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 2:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 3:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 4:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 5:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 6:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 7:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 8:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 9:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 10:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 11:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 12:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 13:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 14:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 15:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 16:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 17:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 18:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 19:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 20:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    }
    return 0;
}
//*********************************************************************
int _options_false3(int problem, int coordinate)//錯誤選項3
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 2:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 3:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 4:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 5:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 6:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 7:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 8:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 9:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 10:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 11:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 12:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 13:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 14:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 15:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 16:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 17:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 18:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 19:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    case 20:
        outtextxy(70, coordinate, "");//輸出文字(文字x,文字y,"文字")
        break;
    }
    return 0;
}



*/

