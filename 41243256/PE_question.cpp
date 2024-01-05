#include"function.h"

int PE_question(void)
{
    int coordinate;//�ﶵ��m
    int problem_save;//�x�s�H���D��
    int options_save[4] = { 0 };//�x�s�ӿﶵ��m
    srand((unsigned)time(NULL));

    problem_save = PE_problem();//�H���D��

    options_save[0] = rand() % 4 + 1;//��l�H������
    coordinate = question_options_coordinate(options_save[0]);//�����H����,�]�w�U�ﶵ�y��
    PE_options_true(problem_save, coordinate);//�ھ��H�����D�ؿ�X���T�ﶵ

    do { options_save[1] = rand() % 4 + 1; } while (options_save[0] == options_save[1]);//���H���X�Ӫ��Ƥ�����e1��
    coordinate = question_options_coordinate(options_save[1]);//�����H����,�]�w�U�ﶵ�y��
    PE_options_false1(problem_save, coordinate);//�ھ��H�����D�ؿ�X���~�ﶵ1

    do { options_save[2] = rand() % 4 + 1; } while (options_save[0] == options_save[2] || options_save[1] == options_save[2]);//���H���X�Ӫ��Ƥ�����e2��
    coordinate = question_options_coordinate(options_save[2]);//�����H����,�]�w�U�ﶵ�y��
    PE_options_false2(problem_save, coordinate);//�ھ��H�����D�ؿ�X���~�ﶵ2

    do { options_save[3] = rand() % 4 + 1; } while (options_save[0] == options_save[3] || options_save[1] == options_save[3] || options_save[2] == options_save[3]);//���H���X�Ӫ��Ƥ�����e3��
    coordinate = question_options_coordinate(options_save[3]);//�����H����,�]�w�U�ﶵ�y��
    PE_options_false3(problem_save, coordinate);//�ھ��H�����D�ؿ�X���~�ﶵ3

    return options_save[0];//��^���T���צ�m
}
//*********************************************************************
int PE_problem(void)//�H���D��
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
        outtextxy(50, 300, "�Ʋy���ɤ�,���� 5 ���~,���o�X���̬��ӡH�Ʋy���ɤ�,���� 5 ���~,���o�X���̬��ӡH");//��X��r(��rx,��ry,"��r")
        //outtextxy(50, 330, "");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 2:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�Ʋy���ɨC�@�����X�����|,�N�y���^���誺���ϡH");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 3:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�Ʋy�B�ʤ�,�b�o�y�Τ��ɤ�,�yĲ���ӹL,�h");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 4:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�Ʋy���ɤU�C�y������̥i�ѻP�d��");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 5:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, " �Ʋy���ɤ�,�y�����o�y��,���줣��,�H�}�I�N�y��_,���P�p��j�P�H");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 6:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�Ʋy���ɤ@��|���O�X�����");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 7:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�Ʋy���ɲĤ����M�ӧ�,����o�X���̬��Ӷ��H");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 8:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�Ʋy������o�y�v���@�����H");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 9:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�Ʋy�i�H�Τ�x���y���ʧ@�O");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 10:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�Ʋy�d���y���_���e,�������m��");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 11:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�U�C��̬���y���^��W��");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 12:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "��y���ɷ��Ƭ�10:10��,�ݳs��o�X���~�o�ӡH");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 13:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�b��y�B�ʤ�,���⥭���y���w�ưʧ@�̨������Z���y��h�����n�H");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 14:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "��y�o�y��,���⥲���b�ୱ�����������H");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 15:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "��y�W�h�W�w���\�X���o�yĲ���H");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 16:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "��y���ɨC���Ȱ��ɶ����H");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 17:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "��y���ɦb�����Ӳy��,�Y�y�|���IĲ�v��ୱ,�Y�N�y�^���X�h,�٬��H");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 18:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�U�C����ݮ�y���o�y�޳N�H");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 19:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "��y���y��,�`�N�y�窺�筱���ɶq�p��~���קK�X�ɡH");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 20:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "��y�B�ʬO�ѭ����B�ʺt�ܦӨӡH");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    }
    return problem;//�^���H���쪺�D��
}
//*********************************************************************
int PE_options_true(int problem, int coordinate)//���T�ﶵ
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "25 ��");//��X��r(��rx,��ry,"��r")
        break;
    case 2:
        outtextxy(70, coordinate, "3��");//��X��r(��rx,��ry,"��r")
        break;
    case 3:
        outtextxy(70, coordinate, "�����~��");//��X��r(��rx,��ry,"��r")
        break;
    case 4:
        outtextxy(70, coordinate, "�e�Ʋy��");//��X��r(��rx,��ry,"��r")
        break;
    case 5:
        outtextxy(70, coordinate, "�X�k���y");//��X��r(��rx,��ry,"��r")
        break;
    case 6:
        outtextxy(70, coordinate, "25 ��");//��X��r(��rx,��ry,"��r")
        break;
    case 7:
        outtextxy(70, coordinate, "15 ��");//��X��r(��rx,��ry,"��r")
        break;
    case 8:
        outtextxy(70, coordinate, "����������@��");//��X��r(��rx,��ry,"��r")
        break;
    case 9:
        outtextxy(70, coordinate, "�ҥi");//��X��r(��rx,��ry,"��r")
        break;
    case 10:
        outtextxy(70, coordinate, "�ݫe");//��X��r(��rx,��ry,"��r")
        break;
    case 11:
        outtextxy(70, coordinate, "Table Tennis");//��X��r(��rx,��ry,"��r")
        break;
    case 12:
        outtextxy(70, coordinate, "2��");//��X��r(��rx,��ry,"��r")
        break;
    case 13:
        outtextxy(70, coordinate, "�@�j�B");//��X��r(��rx,��ry,"��r")
        break;
    case 14:
        outtextxy(70, coordinate, "���������");//��X��r(��rx,��ry,"��r")
        break;
    case 15:
        outtextxy(70, coordinate, "�L������");//��X��r(��rx,��ry,"��r")
        break;
    case 16:
        outtextxy(70, coordinate, "1����");//��X��r(��rx,��ry,"��r")
        break;
    case 17:
        outtextxy(70, coordinate, "�m��");//��X��r(��rx,��ry,"��r")
        break;
    case 18:
        outtextxy(70, coordinate, "�ҬO");//��X��r(��rx,��ry,"��r")
        break;
    case 19:
        outtextxy(70, coordinate, "���筱���n�V�W");//��X��r(��rx,��ry,"��r")
        break;
    case 20:
        outtextxy(70, coordinate, "���y");//��X��r(��rx,��ry,"��r")
        break;
    }
    return 0;
}
//*********************************************************************
int PE_options_false1(int problem, int coordinate)//���~�ﶵ1
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "20 ��");//��X��r(��rx,��ry,"��r")
        break;
    case 2:
        outtextxy(70, coordinate, "1��");//��X��r(��rx,��ry,"��r")
        break;
    case 3:
        outtextxy(70, coordinate, "���o��");//��X��r(��rx,��ry,"��r")
        break;
    case 4:
        outtextxy(70, coordinate, "��Ʋy��");//��X��r(��rx,��ry,"��r")
        break;
    case 5:
        outtextxy(70, coordinate, "����");//��X��r(��rx,��ry,"��r")
        break;
    case 6:
        outtextxy(70, coordinate, "21 ��");//��X��r(��rx,��ry,"��r")
        break;
    case 7:
        outtextxy(70, coordinate, "11 ��");//��X��r(��rx,��ry,"��r")
        break;
    case 8:
        outtextxy(70, coordinate, "�f����");//��X��r(��rx,��ry,"��r")
        break;
    case 9:
        outtextxy(70, coordinate, "�o�y");//��X��r(��rx,��ry,"��r")
        break;
    case 10:
        outtextxy(70, coordinate, "���\�e");//��X��r(��rx,��ry,"��r")
        break;
    case 11:
        outtextxy(70, coordinate, "Tennis");//��X��r(��rx,��ry,"��r")
        break;
    case 12:
        outtextxy(70, coordinate, "5��");//��X��r(��rx,��ry,"��r")
        break;
    case 13:
        outtextxy(70, coordinate, "�b�B");//��X��r(��rx,��ry,"��r")
        break;
    case 14:
        outtextxy(70, coordinate, "���������");//��X��r(��rx,��ry,"��r")
        break;
    case 15:
        outtextxy(70, coordinate, "�⦸");//��X��r(��rx,��ry,"��r")
        break;
    case 16:
        outtextxy(70, coordinate, "30��");//��X��r(��rx,��ry,"��r")
        break;
    case 17:
        outtextxy(70, coordinate, "���y");//��X��r(��rx,��ry,"��r")
        break;
    case 18:
        outtextxy(70, coordinate, "�o�u�y");//��X��r(��rx,��ry,"��r")
        break;
    case 19:
        outtextxy(70, coordinate, "���筱�V�U");//��X��r(��rx,��ry,"��r")
        break;
    case 20:
        outtextxy(70, coordinate, "�Ʋy");//��X��r(��rx,��ry,"��r")
        break;
    }
    return 0;
}
//*********************************************************************
int PE_options_false2(int problem, int coordinate)//���~�ﶵ2
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "15 ��");//��X��r(��rx,��ry,"��r")
        break;
    case 2:
        outtextxy(70, coordinate, "2��");//��X��r(��rx,��ry,"��r")
        break;
    case 3:
        outtextxy(70, coordinate, "����o�y");//��X��r(��rx,��ry,"��r")
        break;
    case 4:
        outtextxy(70, coordinate, "���ɲy��");//��X��r(��rx,��ry,"��r")
        break;
    case 5:
        outtextxy(70, coordinate, "���y�ǳW");//��X��r(��rx,��ry,"��r")
        break;
    case 6:
        outtextxy(70, coordinate, "15 ��");//��X��r(��rx,��ry,"��r")
        break;
    case 7:
        outtextxy(70, coordinate, "21 ��");//��X��r(��rx,��ry,"��r")
        break;
    case 8:
        outtextxy(70, coordinate, "���P�M�w");//��X��r(��rx,��ry,"��r")
        break;
    case 9:
        outtextxy(70, coordinate, "����");//��X��r(��rx,��ry,"��r")
        break;
    case 10:
        outtextxy(70, coordinate, "�y��");//��X��r(��rx,��ry,"��r")
        break;
    case 11:
        outtextxy(70, coordinate, "Football");//��X��r(��rx,��ry,"��r")
        break;
    case 12:
        outtextxy(70, coordinate, "3��");//��X��r(��rx,��ry,"��r")
        break;
    case 13:
        outtextxy(70, coordinate, "�@�B�b");//��X��r(��rx,��ry,"��r")
        break;
    case 14:
        outtextxy(70, coordinate, "�C�������");//��X��r(��rx,��ry,"��r")
        break;
    case 15:
        outtextxy(70, coordinate, "�T��");//��X��r(��rx,��ry,"��r")
        break;
    case 16:
        outtextxy(70, coordinate, "2����");//��X��r(��rx,��ry,"��r")
        break;
    case 17:
        outtextxy(70, coordinate, "�I��");//��X��r(��rx,��ry,"��r")
        break;
    case 18:
        outtextxy(70, coordinate, "�U�۵o�y");//��X��r(��rx,��ry,"��r")
        break;
    case 19:
        outtextxy(70, coordinate, "���筱�V�W");//��X��r(��rx,��ry,"��r")
        break;
    case 20:
        outtextxy(70, coordinate, "�вy");//��X��r(��rx,��ry,"��r")
        break;
    }
    return 0;
}
//*********************************************************************
int PE_options_false3(int programming_problem, int coordinate)//���~�ﶵ3
{
    switch (programming_problem)
    {
    case 1:
        outtextxy(70, coordinate, "18 ��");//��X��r(��rx,��ry,"��r")
        break;
    case 2:
        outtextxy(70, coordinate, "4��");//��X��r(��rx,��ry,"��r")
        break;
    case 3:
        outtextxy(70, coordinate, "�ǳW");//��X��r(��rx,��ry,"��r")
        break;
    case 4:
        outtextxy(70, coordinate, "�ۥѲy��");//��X��r(��rx,��ry,"��r")
        break;
    case 5:
        outtextxy(70, coordinate, "�X��");//��X��r(��rx,��ry,"��r")
        break;
    case 6:
        outtextxy(70, coordinate, "21 ��");//��X��r(��rx,��ry,"��r")
        break;
    case 7:
        outtextxy(70, coordinate, "25 ��");//��X��r(��rx,��ry,"��r")
        break;
    case 8:
        outtextxy(70, coordinate, "�нm����");//��X��r(��rx,��ry,"��r")
        break;
    case 9:
        outtextxy(70, coordinate, "�d��");//��X��r(��rx,��ry,"��r")
        break;
    case 10:
        outtextxy(70, coordinate, "�y��");//��X��r(��rx,��ry,"��r")
        break;
    case 11:
        outtextxy(70, coordinate, "Volleyball");//��X��r(��rx,��ry,"��r")
        break;
    case 12:
        outtextxy(70, coordinate, "7��");//��X��r(��rx,��ry,"��r")
        break;
    case 13:
        outtextxy(70, coordinate, "��B");//��X��r(��rx,��ry,"��r")
        break;
    case 14:
        outtextxy(70, coordinate, "�ҥi");//��X��r(��rx,��ry,"��r")
        break;
    case 15:
        outtextxy(70, coordinate, "����");//��X��r(��rx,��ry,"��r")
        break;
    case 16:
        outtextxy(70, coordinate, "3����");//��X��r(��rx,��ry,"��r")
        break;
    case 17:
        outtextxy(70, coordinate, "����");//��X��r(��rx,��ry,"��r")
        break;
    case 18:
        outtextxy(70, coordinate, "���ߵo�y");//��X��r(��rx,��ry,"��r")
        break;
    case 19:
        outtextxy(70, coordinate, "���筱���n�V�U");//��X��r(��rx,��ry,"��r")
        break;
    case 20:
        outtextxy(70, coordinate, "�j�O�y");//��X��r(��rx,��ry,"��r")
        break;
    }
    return 0;
}

