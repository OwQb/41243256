#include"function.h"

int programming_question(void)
{
    int coordinate;//�ﶵ��m
    int problem_save;//�x�s�H���D��
    int options_save[4] = { 0 };//�x�s�ӿﶵ��m
    srand((unsigned)time(NULL));

    problem_save = programming_problem();//�H���D��

    options_save[0] = rand() % 4 + 1;//��l�H������
    coordinate = question_options_coordinate(options_save[0]);//�����H����,�]�w�U�ﶵ�y��
    programming_options_true(problem_save, coordinate);//�ھ��H�����D�ؿ�X���T�ﶵ

    do { options_save[1] = rand() % 4 + 1; } while (options_save[0] == options_save[1]);//���H���X�Ӫ��Ƥ�����e1��
    coordinate = question_options_coordinate(options_save[1]);//�����H����,�]�w�U�ﶵ�y��
    programming_options_false1(problem_save, coordinate);//�ھ��H�����D�ؿ�X���~�ﶵ1

    do { options_save[2] = rand() % 4 + 1; } while (options_save[0] == options_save[2] || options_save[1] == options_save[2]);//���H���X�Ӫ��Ƥ�����e2��
    coordinate = question_options_coordinate(options_save[2]);//�����H����,�]�w�U�ﶵ�y��
    programming_options_false2(problem_save, coordinate);//�ھ��H�����D�ؿ�X���~�ﶵ2

    do { options_save[3] = rand() % 4 + 1; } while (options_save[0] == options_save[3] || options_save[1] == options_save[3] || options_save[2] == options_save[3]);//���H���X�Ӫ��Ƥ�����e3��
    coordinate = question_options_coordinate(options_save[3]);//�����H����,�]�w�U�ﶵ�y��
    programming_options_false3(problem_save, coordinate);//�ھ��H�����D�ؿ�X���~�ﶵ3

    return options_save[0];//��^���T���צ�m
}
//*********************************************************************
int programming_problem(void)//�H���D��
{
    int problem;
    problem = rand() % 20 + 1;//�H���D�ؼ�
    setbkmode(TRANSPARENT);//�]�m��r�I���⬰�z��
    settextstyle(20, 0, "�L�n������");//(�r��,�r�e(�w�]�H��X�ܤ�),"�r��(�n�t�Φ���)")
    settextcolor(BLACK);//�r���C��
    switch (problem)
    {
    case 1:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�O�c��C�y���{�Ǫ��򥻳��");//��X��r(��rx,��ry,"��r")
        //outtextxy(50, 330, "");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 2:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "C�y���{���q_____�}�l����");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 3:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�H�U���k�����T���O");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 4:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�U�C����C�y�����ԭz���~���O");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 5:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�U�CC�y���ϥΪ��ѧO�X���X�k���O");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 6:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "C�y������²���ƫ��O�]�A");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 7:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�bC�y���{�����A��F��5%2�����G�O");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 8:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�Yint a=3,b=4�F�h����a < b ? a : b���ȬO");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 9:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�]����ܼ�a=2�A�h����U�C�y�y��A�B�I���ܼ�b���Ȥ���0.5���O");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 10:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "sizeof( double ) �O");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 11:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�H�U�ﶵ���ԭz���T���O");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 12:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�H�U��F�����ȻPx �L���B��ȫ��u���O");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 13:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�H�U�ԭz���T���O");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 14:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�p�Gc���r�����ܶq�A�P�_c�O�_���Ů椣��ϥ�________.(���]�w���Ů�ASCII�X��32)");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 15:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�H�U����Ʋժ��y�z���T���O");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 16:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�H�U�Ʋթw�q�������T���O");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 17:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�b����y�y�G int a[ ][3]={1,2,3,4,5,6};��Aa[1][0]���ȬO_____");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 18:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�U�z��C�y���r�żƲժ��y�z�����~���O");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 19:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "C�y�����A�Y��������ƪ������A�h�t���q�{�Ө�ƪ������O_____");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 20:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "C�y�����W�w��ƪ���^�Ȫ������O��____");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    }
    return problem;//�^���H���쪺�D��
}
//*********************************************************************
int programming_options_true(int problem, int coordinate)//���T�ﶵ
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "���");//��X��r(��rx,��ry,"��r")
        break;
    case 2:
        outtextxy(70, coordinate, "�{������main���");//��X��r(��rx,��ry,"��r")
        break;
    case 3:
        outtextxy(70, coordinate, "C�y���{���`�O�qmain( )��ƶ}�l����");//��X��r(��rx,��ry,"��r")
        break;
    case 4:
        outtextxy(70, coordinate, "C�y�����Ϥ��j�p�g");//��X��r(��rx,��ry,"��r")
        break;
    case 5:
        outtextxy(70, coordinate, "x");//��X��r(��rx,��ry,"��r")
        break;
    case 6:
        outtextxy(70, coordinate, "��ơB�ꫬ�B�r����");//��X��r(��rx,��ry,"��r")
        break;
    case 7:
        outtextxy(70, coordinate, "1");//��X��r(��rx,��ry,"��r")
        break;
    case 8:
        outtextxy(70, coordinate, "3");//��X��r(��rx,��ry,"��r")
        break;
    case 9:
        outtextxy(70, coordinate, "b=(float)(1/a)");//��X��r(��rx,��ry,"��r")
        break;
    case 10:
        outtextxy(70, coordinate, "�@�Ӿ�ƪ�F��");//��X��r(��rx,��ry,"��r")
        break;
    case 11:
        outtextxy(70, coordinate, "���c�Ƶ{�����T�ذ򥻵��c�O�`�����c�B��ܵ��c�B���ǵ��c");//��X��r(��rx,��ry,"��r")
        break;
    case 12:
        outtextxy(70, coordinate, "0 < x < 5");//��X��r(��rx,��ry,"��r")
        break;
    case 13:
        outtextxy(70, coordinate, "C �sĶ�{�����ɮ׫��.c ����l�{���ɮ׽sĶ���ɮ׫��.obj���G�i���ɮ�");//��X��r(��rx,��ry,"��r")
        break;
    case 14:
        outtextxy(70, coordinate, "if(c=='32')");//��X��r(��rx,��ry,"��r")
        break;
    case 15:
        outtextxy(70, coordinate, "�Ʋժ��j�p�O�T�w���A�Ҧ��Ʋդ��������������ۦP");//��X��r(��rx,��ry,"��r")
        break;
    case 16:
        outtextxy(70, coordinate, "int a[3][]={{1,2},{1,2,3},{1,2,3,4}};");//��X��r(��rx,��ry,"��r")
        break;
    case 17:
        outtextxy(70, coordinate, "4");//��X��r(��rx,��ry,"��r")
        break;
    case 18:
        outtextxy(70, coordinate, "�i�H�b��Ȼy�y���q�L��ȹB���\" = \"��r�żƲվ�����");//��X��r(��rx,��ry,"��r")
        break;
    case 19:
        outtextxy(70, coordinate, "int��");//��X��r(��rx,��ry,"��r")
        break;
    case 20:
        outtextxy(70, coordinate, "�b�w�q�Ө�Ʈɩҫ��w�������ҨM�w");//��X��r(��rx,��ry,"��r")
        break;
    }
    return 0;
}
//*********************************************************************
int programming_options_false1(int problem, int coordinate)//���~�ﶵ1
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "�L�{");//��X��r(��rx,��ry,"��r")
        break;
    case 2:
        outtextxy(70, coordinate, "�{�����Ĥ@�Ӱ���y�y");//��X��r(��rx,��ry,"��r")
        break;
    case 3:
        outtextxy(70, coordinate, "C�y���{���`�O�q�Ĥ@�өw�q����ƶ}�l����");//��X��r(��rx,��ry,"��r")
        break;
    case 4:
        outtextxy(70, coordinate, "C�{�����u�@�L�{�O�s��B�sĶ�B�s���B����");//��X��r(��rx,��ry,"��r")
        break;
    case 5:
        outtextxy(70, coordinate, "3ax");//��X��r(��rx,��ry,"��r")
        break;
    case 6:
        outtextxy(70, coordinate, "��ơB�r�����B�޿諬");//��X��r(��rx,��ry,"��r")
        break;
    case 7:
        outtextxy(70, coordinate, "3");//��X��r(��rx,��ry,"��r")
        break;
    case 8:
        outtextxy(70, coordinate, "4");//��X��r(��rx,��ry,"��r")
        break;
    case 9:
        outtextxy(70, coordinate, "b=1.0/a");//��X��r(��rx,��ry,"��r")
        break;
    case 10:
        outtextxy(70, coordinate, "�@�Ө�ƩI�s");//��X��r(��rx,��ry,"��r")
        break;
    case 11:
        outtextxy(70, coordinate, "C �y����l�{�����sĶ�]�ઽ������");//��X��r(��rx,��ry,"��r")
        break;
    case 12:
        outtextxy(70, coordinate, "x>10 && x<5");//��X��r(��rx,��ry,"��r")
        break;
    case 13:
        outtextxy(70, coordinate, "C �sĶ�{�����ɮ׫��.c ����l�{���ɮ׽sĶ���ɮ׫��.exe ���i������");//��X��r(��rx,��ry,"��r")
        break;
    case 14:
        outtextxy(70, coordinate, "if(c==32)");//��X��r(��rx,��ry,"��r")
        break;
    case 15:
        outtextxy(70, coordinate, "�Ʋժ��j�p�O�T�w���A���i�H�����P�������Ʋդ���");//��X��r(��rx,��ry,"��r")
        break;
    case 16:
        outtextxy(70, coordinate, "int b[][3]={0,1,2,3};");//��X��r(��rx,��ry,"��r")
        break;
    case 17:
        outtextxy(70, coordinate, "1");//��X��r(��rx,��ry,"��r")
        break;
    case 18:
        outtextxy(70, coordinate, "�r�żƲեi�H�s��r�Ŧ�");//��X��r(��rx,��ry,"��r")
        break;
    case 19:
        outtextxy(70, coordinate, "long��");//��X��r(��rx,��ry,"��r")
        break;
    case 20:
        outtextxy(70, coordinate, "�եθӨ�Ʈɨt���{�ɨM�w");//��X��r(��rx,��ry,"��r")
        break;
    }
    return 0;
}
//*********************************************************************
int programming_options_false2(int problem, int coordinate)//���~�ﶵ2
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "�l�{��");//��X��r(��rx,��ry,"��r")
        break;
    case 2:
        outtextxy(70, coordinate, "�{�����Ĥ@�Ө��");//��X��r(��rx,��ry,"��r")
        break;
    case 3:
        outtextxy(70, coordinate, "�bC�y���{�����A�n�I�s����ƥ����bmain( )��Ƥ��w�q");//��X��r(��rx,��ry,"��r")
        break;
    case 4:
        outtextxy(70, coordinate, "C�{�Ǫ��T�ذ򥻵��c�O���ǡB��ܡB�`��");//��X��r(��rx,��ry,"��r")EN_question
        break;
    case 5:
        outtextxy(70, coordinate, "case");//��X��r(��rx,��ry,"��r")
        break;
    case 6:
        outtextxy(70, coordinate, "��ơB�ꫬ�B�޿諬�B�r����");//��X��r(��rx,��ry,"��r")
        break;
    case 7:
        outtextxy(70, coordinate, "2");//��X��r(��rx,��ry,"��r")
        break;
    case 8:
        outtextxy(70, coordinate, "0");//��X��r(��rx,��ry,"��r")
        break;
    case 9:
        outtextxy(70, coordinate, "b=1/(float)a");//��X��r(��rx,��ry,"��r")
        break;
    case 10:
        outtextxy(70, coordinate, "�@������T�ת�F��");//��X��r(��rx,��ry,"��r")
        break;
    case 11:
        outtextxy(70, coordinate, "�ϥ�N��S �y�{�ϵL�k�y�z�����t��k");//��X��r(��rx,��ry,"��r")
        break;
    case 12:
        outtextxy(70, coordinate, "x>10 || x<5");//��X��r(��rx,��ry,"��r")
        break;
    case 13:
        outtextxy(70, coordinate, "C �sĶ�{�����ɮ׫��.obj ���G�i���ɮ׽sĶ���ɮ׫��.exe ���i������");//��X��r(��rx,��ry,"��r")
        break;
    case 14:
        outtextxy(70, coordinate, "if(c=='\40')");//��X��r(��rx,��ry,"��r")
        break;
    case 15:
        outtextxy(70, coordinate, "�Ʋժ��j�p�O�i�ܪ��A���Ҧ��Ʋդ��������������ۦP");//��X��r(��rx,��ry,"��r")
        break;
    case 16:
        outtextxy(70, coordinate, "int c[100][100]={0};");//��X��r(��rx,��ry,"��r")
        break;
    case 17:
        outtextxy(70, coordinate, "2");//��X��r(��rx,��ry,"��r")
        break;
    case 18:
        outtextxy(70, coordinate, "�r�żƲդ����r�Ŧ�i�H�����J�B��X");//��X��r(��rx,��ry,"��r")
        break;
    case 19:
        outtextxy(70, coordinate, "float��");//��X��r(��rx,��ry,"��r")
        break;
    case 20:
        outtextxy(70, coordinate, "�եθӨ�Ʈɪ��D�եΨ�������ҨM�w");//��X��r(��rx,��ry,"��r")
        break;
    }
    return 0;
}
//*********************************************************************
int programming_options_false3(int programming_problem, int coordinate)//���~�ﶵ3
{
    switch (programming_problem)
    {
    case 1:
        outtextxy(70, coordinate, "�l�ҵ{");//��X��r(��rx,��ry,"��r")
        break;
    case 2:
        outtextxy(70, coordinate, "�]�t�ɮפ����Ĥ@�Ө��");//��X��r(��rx,��ry,"��r")
        break;
    case 3:
        outtextxy(70, coordinate, "C�y���{������main( )��ƥ�����b�{�����}�l����");//��X��r(��rx,��ry,"��r")
        break;
    case 4:
        outtextxy(70, coordinate, "C�{���qmain��ƶ}�l����");//��X��r(��rx,��ry,"��r")
        break;
    case 5:
        outtextxy(70, coordinate, "-e2");//��X��r(��rx,��ry,"��r")
        break;
    case 6:
        outtextxy(70, coordinate, "��ơB�ꫬ�B�޿諬");//��X��r(��rx,��ry,"��r")
        break;
    case 7:
        outtextxy(70, coordinate, "2.5");//��X��r(��rx,��ry,"��r")
        break;
    case 8:
        outtextxy(70, coordinate, "1");//��X��r(��rx,��ry,"��r")
        break;
    case 9:
        outtextxy(70, coordinate, "b=1/(a*1.0)");//��X��r(��rx,��ry,"��r")
        break;
    case 10:
        outtextxy(70, coordinate, "���X�k����F��");//��X��r(��rx,��ry,"��r")
        break;
    case 11:
        outtextxy(70, coordinate, "�q�������������C �y����l�{���A�����i������ഫ");//��X��r(��rx,��ry,"��r")
        break;
    case 12:
        outtextxy(70, coordinate, "x<10 && x> 5");//��X��r(��rx,��ry,"��r")
        break;
    case 13:
        outtextxy(70, coordinate, "�s���{�����ɮ׫��.c ����l�{���ɮ׳s�����ɮ׫��.exe���i������");//��X��r(��rx,��ry,"��r")
        break;
    case 14:
        outtextxy(70, coordinate, "if(c==' ')");//��X��r(��rx,��ry,"��r")
        break;
    case 15:
        outtextxy(70, coordinate, "�Ʋժ��j�p�O�i�ܪ��A�i�H�����P�������Ʋդ���");//��X��r(��rx,��ry,"��r")
        break;
    case 16:
        outtextxy(70, coordinate, "int a[2][3];");//��X��r(��rx,��ry,"��r")
        break;
    case 17:
        outtextxy(70, coordinate, "5");//��X��r(��rx,��ry,"��r")
        break;
    case 18:
        outtextxy(70, coordinate, "���i�H�����Y�B��Ź�r�żƲդ����r�Ŧ�i����");//��X��r(��rx,��ry,"��r")
        break;
    case 19:
        outtextxy(70, coordinate, "double��");//��X��r(��rx,��ry,"��r")
        break;
    case 20:
        outtextxy(70, coordinate, "return�y�y������F�������ҨM�w");//��X��r(��rx,��ry,"��r")
        break;
    }
    return 0;
}

