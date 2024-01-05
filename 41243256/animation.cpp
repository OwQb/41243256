#include"function.h"

//*********************************************************
int loading_animation(void)//進度條動畫
{
    putimagePNG(0, 0, &bg[0]);//輸出一張圖片(座標x,座標y,圖片變數名)
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

int day1_animation(void)
{
    putimagePNG(0, 0, &bg[1]);//輸出一張圖片(座標x,座標y,圖片變數名)
    putimagePNG(175, 0, &curriculum);//輸出一張圖片(座標x,座標y,圖片變數名)
    setfillcolor(WHITE);//矩形填充為白色
    fillrectangle(290, 0, 620, 600);//繪製矩形(左,上,右,下)
    Sleep(1000);
    setbkmode(TRANSPARENT);//設置文字背景色為透明
    settextcolor(RED);//字體顏色
    settextstyle(70, 0, "微軟正黑體");//(字高,字寬(預設隨輸出變化),"字體(要系統有的)")

    BeginBatchDraw();//創建繪圖緩衝區(沒有繪圖緩衝區將導致卡頓)
    for (int i = 600;i >= -80; i -= 20)//文字"第一天"的動畫
    {
        putimagePNG(175, 0, &curriculum);//輸出一張圖片(座標x,座標y,圖片變數名)
        fillrectangle(290, 0, 620, 600);//繪製矩形(左,上,右,下)
        outtextxy(325, i, "第一天");//輸出文字(文字x,文字y,"文字")
        Sleep(10);
        if (i == 220) { Sleep(2000); }//將文字停在中間
        FlushBatchDraw();//輸出繪圖緩衝區
    }
    for (int i = 600;i >= -80; i -= 20)//文字"GO!"的動畫
    {
        putimagePNG(175, 0, &curriculum);//輸出一張圖片(座標x,座標y,圖片變數名)
        fillrectangle(290, 0, 620, 600);//繪製矩形(左,上,右,下)
        outtextxy(325, i, "GO!");//輸出文字(文字x,文字y,"文字")
        Sleep(10);
        if (i == 220) { Sleep(2000); }//將文字停在中間
        FlushBatchDraw();//輸出繪圖緩衝區
    }
    Sleep(500);
    for (int j = 800, i = -400;i <= 0, j >= 400; i += 10, j -= 10)//ubuntu圖標動畫01
    {
        putimagePNG(i, 0, &liunx[0]);//輸出一張圖片(座標x,座標y,圖片變數名)
        putimagePNG(j, 0, &liunx[1]);//輸出一張圖片(座標x,座標y,圖片變數名)
        Sleep(10);
        FlushBatchDraw();//輸出繪圖緩衝區
    }
    Sleep(500);
    for (int j = 400, i = 0;i >= -400, j <= 800; i -= 10, j += 10)//ubuntu圖標動畫02
    {
        putimagePNG(0, 0, &bg[1]);//輸出一張圖片(座標x,座標y,圖片變數名)
        putimagePNG(i, 0, &liunx[0]);//輸出一張圖片(座標x,座標y,圖片變數名)
        putimagePNG(j, 0, &liunx[1]);//輸出一張圖片(座標x,座標y,圖片變數名)
        Sleep(10);
        FlushBatchDraw();//輸出繪圖緩衝區
    }
    EndBatchDraw();//結束繪圖緩衝區
    flushmessage();//清空鼠標當前信息以防信息暴衝
    return 0;
}
//*********************************************************