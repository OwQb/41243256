#include"function.h"

//*********************************************************
int loading_animation(void)//�i�ױ��ʵe
{
    putimagePNG(0, 0, &bg[0]);//��X�@�i�Ϥ�(�y��x,�y��y,�Ϥ��ܼƦW)
    setbkmode(TRANSPARENT);//�]�m��r�I���⬰�z��
    settextcolor(BLACK);//�r���C��
    settextstyle(40, 0, "�L�n������");//(�r��,�r�e(�w�]�H��X�ܤ�),"�r��(�n�t�Φ���)")
    outtextxy(270, 250, "Ū����...");//��X��r(��rx,��ry,"��r")
    for (int i = 0;i <= 300;i += 3)//�i�ױ��ʵe
    {
        setfillcolor(BLACK);//�]�m�x�ζ�R��
        fillroundrect(i + 270, 300, 270, 310, 10, 10);//ø�s�ꨤ�x��(��,�W,�k,�U,��e,�갪)
        Sleep(10);
    }
    flushmessage();//�M�Ź��з�e�H���H���H���ɽ�
    return 0;
}

int day1_animation(void)
{
    putimagePNG(0, 0, &bg[1]);//��X�@�i�Ϥ�(�y��x,�y��y,�Ϥ��ܼƦW)
    putimagePNG(175, 0, &curriculum);//��X�@�i�Ϥ�(�y��x,�y��y,�Ϥ��ܼƦW)
    setfillcolor(WHITE);//�x�ζ�R���զ�
    fillrectangle(290, 0, 620, 600);//ø�s�x��(��,�W,�k,�U)
    Sleep(1000);
    setbkmode(TRANSPARENT);//�]�m��r�I���⬰�z��
    settextcolor(RED);//�r���C��
    settextstyle(70, 0, "�L�n������");//(�r��,�r�e(�w�]�H��X�ܤ�),"�r��(�n�t�Φ���)")

    BeginBatchDraw();//�Ы�ø�Ͻw�İ�(�S��ø�Ͻw�İϱN�ɭP�d�y)
    for (int i = 600;i >= -80; i -= 20)//��r"�Ĥ@��"���ʵe
    {
        putimagePNG(175, 0, &curriculum);//��X�@�i�Ϥ�(�y��x,�y��y,�Ϥ��ܼƦW)
        fillrectangle(290, 0, 620, 600);//ø�s�x��(��,�W,�k,�U)
        outtextxy(325, i, "�Ĥ@��");//��X��r(��rx,��ry,"��r")
        Sleep(10);
        if (i == 220) { Sleep(2000); }//�N��r���b����
        FlushBatchDraw();//��Xø�Ͻw�İ�
    }
    for (int i = 600;i >= -80; i -= 20)//��r"GO!"���ʵe
    {
        putimagePNG(175, 0, &curriculum);//��X�@�i�Ϥ�(�y��x,�y��y,�Ϥ��ܼƦW)
        fillrectangle(290, 0, 620, 600);//ø�s�x��(��,�W,�k,�U)
        outtextxy(325, i, "GO!");//��X��r(��rx,��ry,"��r")
        Sleep(10);
        if (i == 220) { Sleep(2000); }//�N��r���b����
        FlushBatchDraw();//��Xø�Ͻw�İ�
    }
    Sleep(500);
    for (int j = 800, i = -400;i <= 0, j >= 400; i += 10, j -= 10)//ubuntu�ϼаʵe01
    {
        putimagePNG(i, 0, &liunx[0]);//��X�@�i�Ϥ�(�y��x,�y��y,�Ϥ��ܼƦW)
        putimagePNG(j, 0, &liunx[1]);//��X�@�i�Ϥ�(�y��x,�y��y,�Ϥ��ܼƦW)
        Sleep(10);
        FlushBatchDraw();//��Xø�Ͻw�İ�
    }
    Sleep(500);
    for (int j = 400, i = 0;i >= -400, j <= 800; i -= 10, j += 10)//ubuntu�ϼаʵe02
    {
        putimagePNG(0, 0, &bg[1]);//��X�@�i�Ϥ�(�y��x,�y��y,�Ϥ��ܼƦW)
        putimagePNG(i, 0, &liunx[0]);//��X�@�i�Ϥ�(�y��x,�y��y,�Ϥ��ܼƦW)
        putimagePNG(j, 0, &liunx[1]);//��X�@�i�Ϥ�(�y��x,�y��y,�Ϥ��ܼƦW)
        Sleep(10);
        FlushBatchDraw();//��Xø�Ͻw�İ�
    }
    EndBatchDraw();//����ø�Ͻw�İ�
    flushmessage();//�M�Ź��з�e�H���H���H���ɽ�
    return 0;
}
//*********************************************************