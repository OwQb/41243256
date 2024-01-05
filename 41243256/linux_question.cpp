#include"function.h"

int linux_question(void)
{
    int coordinate;//�ﶵ��m
    int problem_save;//�x�s�H���D��
    int options_save[4] = { 0 };//�x�s�ӿﶵ��m
    srand((unsigned)time(NULL));

    problem_save = linux_problem();//�H���D��

    options_save[0] = rand() % 4 + 1;//��l�H������
    coordinate = question_options_coordinate(options_save[0]);//�����H����,�]�w�U�ﶵ�y��
    linux_options_true(problem_save, coordinate);//�ھ��H�����D�ؿ�X���T�ﶵ

    do { options_save[1] = rand() % 4 + 1; } while (options_save[0] == options_save[1]);//���H���X�Ӫ��Ƥ�����e1��
    coordinate = question_options_coordinate(options_save[1]);//�����H����,�]�w�U�ﶵ�y��
    linux_options_false1(problem_save, coordinate);//�ھ��H�����D�ؿ�X���~�ﶵ1

    do { options_save[2] = rand() % 4 + 1; } while (options_save[0] == options_save[2] || options_save[1] == options_save[2]);//���H���X�Ӫ��Ƥ�����e2��
    coordinate = question_options_coordinate(options_save[2]);//�����H����,�]�w�U�ﶵ�y��
    linux_options_false2(problem_save, coordinate);//�ھ��H�����D�ؿ�X���~�ﶵ2

    do { options_save[3] = rand() % 4 + 1; } while (options_save[0] == options_save[3] || options_save[1] == options_save[3] || options_save[2] == options_save[3]);//���H���X�Ӫ��Ƥ�����e3��
    coordinate = question_options_coordinate(options_save[3]);//�����H����,�]�w�U�ﶵ�y��
    linux_options_false3(problem_save, coordinate);//�ھ��H�����D�ؿ�X���~�ﶵ3

    return options_save[0];//��^���T���צ�m
}
//*********************************************************************
int linux_problem(void)//�H���D��
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
        outtextxy(50, 300, "�p�G�}��Terminal���ε{���A�ݨ�p�U���ܰT���A�аݡu�ثe�ϥΤ����ϥΪ̱b���v�O����?");//��X��r(��rx,��ry,"��r")
        outtextxy(50, 330, "nfu@nfu-VirtualBox:~$");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 2:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "ubuntu��Terminal�����쥪��@�Ӽ��ҭ�(tab)������O�H");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 3:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�pı�oIP�ӷ���}1.2.3.4�������b�����A�A�Ӧp��z�Liptables���m���H");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 4:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�s�W�@��Terminal����������O�H");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 5:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "���@�өR�O��ΨӳЫةR�O��²�g�ΧO�W?");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 6:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�U�C���@��Ubuntu�������OLTS�H");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 7:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�̷ӤW�ҩұ�(�����ҷӪ��ɭ�)������,Linux Mint�O�ݩ󨺤@�t�C���o�檩?");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 8:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "���C���@��Linux�o�檩�Y�N��2024�~6��30�鰱���s,�]�N�OEOS(�λ��OEOL)?");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 9:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "��r�s�边nano�x�s�ɮת�����O����H");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 10:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�q�`apt-get�|�ݬO�_�P�N�i��Ӿާ@�A�ӨϥΪ̳q�`�|�^��Y�C");//��X��r(��rx,��ry,"��r")
        outtextxy(50, 330, "�p�G���Q�h��( ���O) �o��@�Ǯɶ���JY�A�i�H�b���O�[�W����ﶵ�H");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 11:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�n���t�ΦZ�����i�J�U�C���@�ӥؿ�?");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 12:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�t�Ϊ��t�m���b______�ؿ��U");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 13:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "���@�өR�O��ΨӬd��b���TESTFILE ���u�]�t�|�Ӧr������?");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 14:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "��Linux ���ְ���w�骺�˴��M�E���洫���ϦZ�A�B��U�C���@�ӵ{��?");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 15:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�Ρvrm -i�v�A�t�η|���ܤ�������A�T�{");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 16:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�ΤU�����өR�O�i�H���ΰh�Xvi �s�边�Ӥ������");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 17:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "���D�S�O���w�Acp ���w�n���������b�U�����ӥؿ��U");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 18:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�U�����өR�O�O���̤奻�s�边");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 19:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "Linux ���R�O�ΤU�����ӿ�ܨӸ���");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 20:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�b�@�椺�B��h�өR�O�ݭn�Τ���r���j�}");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    }
    return problem;//�^���H���쪺�D��
}
//*********************************************************************
int linux_options_true(int problem ,int coordinate)//���T�ﶵ
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "nfu");//��X��r(��rx,��ry,"��r")
        break;
    case 2:
        outtextxy(70, coordinate, "Ctrl+PageUp");//��X��r(��rx,��ry,"��r")
        break;
    case 3:
        outtextxy(70, coordinate, "sudo iptables -A INPUT -s 1.2.3.4 -j DROP");//��X��r(��rx,��ry,"��r")
        break;
    case 4:
        outtextxy(70, coordinate, "Ctrl+Alt+t");//��X��r(��rx,��ry,"��r")
        break;
    case 5:
        outtextxy(70, coordinate, "alias");//��X��r(��rx,��ry,"��r")
        break;
    case 6:
        outtextxy(70, coordinate, "23.04");//��X��r(��rx,��ry,"��r")
        break;
    case 7:
        outtextxy(70, coordinate, "Debian�t�C");//��X��r(��rx,��ry,"��r")
        break;
    case 8:
        outtextxy(70, coordinate, "CentOS");//��X��r(��rx,��ry,"��r")
        break;
    case 9:
        outtextxy(70, coordinate, "Ctrl + o");//��X��r(��rx,��ry,"��r")
        break;
    case 10:
        outtextxy(70, coordinate, "-y");//��X��r(��rx,��ry,"��r")
        break;
    case 11:
        outtextxy(70, coordinate, "�Τ�ۤv���D�ؿ�");//��X��r(��rx,��ry,"��r")
        break;
    case 12:
        outtextxy(70, coordinate, "/etc");//��X��r(��rx,��ry,"��r")
        break;
    case 13:
        outtextxy(70, coordinate, "grep '^....$' TESTFILE");//��X��r(��rx,��ry,"��r")
        break;
    case 14:
        outtextxy(70, coordinate, "/sbin/init");//��X��r(��rx,��ry,"��r")
        break;
    case 15:
        outtextxy(70, coordinate, "�O�_�u���R��");//��X��r(��rx,��ry,"��r")
        break;
    case 16:
        outtextxy(70, coordinate, ":e for edit command");//��X��r(��rx,��ry,"��r")
        break;
    case 17:
        outtextxy(70, coordinate, "��e�ؿ�");//��X��r(��rx,��ry,"��r")
        break;
    case 18:
        outtextxy(70, coordinate, "vi");//��X��r(��rx,��ry,"��r")
        break;
    case 19:
        outtextxy(70, coordinate, "shell");//��X��r(��rx,��ry,"��r")
        break;
    case 20:
        outtextxy(70, coordinate, ";");//��X��r(��rx,��ry,"��r")
        break;
    }
    return 0;
}
//*********************************************************************
int linux_options_false1(int problem, int coordinate)//���~�ﶵ1
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "nfu-VirtualBox");//��X��r(��rx,��ry,"��r")
        break;
    case 2:
        outtextxy(70, coordinate, "Ctrl+Home");//��X��r(��rx,��ry,"��r")
        break;
    case 3:
        outtextxy(70, coordinate, "sudo iptables -A INPUT -s 1.2.3.4 -j Reject");//��X��r(��rx,��ry,"��r")
        break;
    case 4:
        outtextxy(70, coordinate, "Ctrl+Shift+t");//��X��r(��rx,��ry,"��r")
        break;
    case 5:
        outtextxy(70, coordinate, "awk");//��X��r(��rx,��ry,"��r")
        break;
    case 6:
        outtextxy(70, coordinate, "18.04");//��X��r(��rx,��ry,"��r")
        break;
    case 7:
        outtextxy(70, coordinate, "Red Hat�t�C");//��X��r(��rx,��ry,"��r")
        break;
    case 8:
        outtextxy(70, coordinate, "Oracle Linux");//��X��r(��rx,��ry,"��r")
        break;
    case 9:
        outtextxy(70, coordinate, "Ctrl + s");//��X��r(��rx,��ry,"��r")
        break;
    case 10:
        outtextxy(70, coordinate, "--ok");//��X��r(��rx,��ry,"��r")
        break;
    case 11:
        outtextxy(70, coordinate, "/root");//��X��r(��rx,��ry,"��r")
        break;
    case 12:
        outtextxy(70, coordinate, "/home");//��X��r(��rx,��ry,"��r")
        break;
    case 13:
        outtextxy(70, coordinate, "grep '^????$' TESTFILE");//��X��r(��rx,��ry,"��r")
        break;
    case 14:
        outtextxy(70, coordinate, "/sbin/reboot");//��X��r(��rx,��ry,"��r")
        break;
    case 15:
        outtextxy(70, coordinate, "�R�O�檺�C�ӿﶵ");//��X��r(��rx,��ry,"��r")
        break;
    case 16:
        outtextxy(70, coordinate, "map command");//��X��r(��rx,��ry,"��r")
        break;
    case 17:
        outtextxy(70, coordinate, "home �ؿ�");//��X��r(��rx,��ry,"��r")
        break;
    case 18:
        outtextxy(70, coordinate, "ed");//��X��r(��rx,��ry,"��r")
        break;
    case 19:
        outtextxy(70, coordinate, "�֤�");//��X��r(��rx,��ry,"��r")
        break;
    case 20:
        outtextxy(70, coordinate, "$");//��X��r(��rx,��ry,"��r")
        break;
    }
    return 0;
}
//*********************************************************************
int linux_options_false2(int problem, int coordinate)//���~�ﶵ2
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "VirtualBox");//��X��r(��rx,��ry,"��r")
        break;
    case 2:
        outtextxy(70, coordinate, "Ctrl+PageDown");//��X��r(��rx,��ry,"��r")
        break;
    case 3:
        outtextxy(70, coordinate, "sudo iptables -A OUTPUT -s 1.2.3.4 -j Reject");//��X��r(��rx,��ry,"��r")
        break;
    case 4:
        outtextxy(70, coordinate, "Alt+Shift+t");//��X��r(��rx,��ry,"��r")
        break;
    case 5:
        outtextxy(70, coordinate, "echo");//��X��r(��rx,��ry,"��r")
        break;
    case 6:
        outtextxy(70, coordinate, "22.04");//��X��r(��rx,��ry,"��r")
        break;
    case 7:
        outtextxy(70, coordinate, "����ꤣ�OLinux");//��X��r(��rx,��ry,"��r")
        break;
    case 8:
        outtextxy(70, coordinate, "AlmaLinux");//��X��r(��rx,��ry,"��r")
        break;
    case 9:
        outtextxy(70, coordinate, ":w");//��X��r(��rx,��ry,"��r")
        break;
    case 10:
        outtextxy(70, coordinate, "-Y");//��X��r(��rx,��ry,"��r")
        break;
    case 11:
        outtextxy(70, coordinate, "root ���D�ؿ�");//��X��r(��rx,��ry,"��r")
        break;
    case 12:
        outtextxy(70, coordinate, "/usr");//��X��r(��rx,��ry,"��r")
        break;
    case 13:
        outtextxy(70, coordinate, "grep '....' TESTFILE");//��X��r(��rx,��ry,"��r")
        break;
    case 14:
        outtextxy(70, coordinate, "/sbin/startup");//��X��r(��rx,��ry,"��r")
        break;
    case 15:
        outtextxy(70, coordinate, "�O�_���g���\�i�v");//��X��r(��rx,��ry,"��r")
        break;
    case 16:
        outtextxy(70, coordinate, "export command");//��X��r(��rx,��ry,"��r")
        break;
    case 17:
        outtextxy(70, coordinate, "root �ؿ�");//��X��r(��rx,��ry,"��r")
        break;
    case 18:
        outtextxy(70, coordinate, "pr");//��X��r(��rx,��ry,"��r")
        break;
    case 19:
        outtextxy(70, coordinate, "�Τᤶ��");//��X��r(��rx,��ry,"��r")
        break;
    case 20:
        outtextxy(70, coordinate, "*");//��X��r(��rx,��ry,"��r")
        break;
    }
    return 0;
}
//*********************************************************************
int linux_options_false3(int problem, int coordinate)//���~�ﶵ3
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "@");//��X��r(��rx,��ry,"��r")
        break;
    case 2:
        outtextxy(70, coordinate, "Ctrl+End");//��X��r(��rx,��ry,"��r")
        break;
    case 3:
        outtextxy(70, coordinate, "sudo iptables -A OUTPUT -s 1.2.3.4 -j DROP");//��X��r(��rx,��ry,"��r")
        break;
    case 4:
        outtextxy(70, coordinate, "t");//��X��r(��rx,��ry,"��r")
        break;
    case 5:
        outtextxy(70, coordinate, "alien");//��X��r(��rx,��ry,"��r")
        break;
    case 6:
        outtextxy(70, coordinate, "20.04");//��X��r(��rx,��ry,"��r")
        break;
    case 7:
        outtextxy(70, coordinate, "��L�t�C");//��X��r(��rx,��ry,"��r")
        break;
    case 8:
        outtextxy(70, coordinate, "Rocky Linux");//��X��r(��rx,��ry,"��r")
        break;
    case 9:
        outtextxy(70, coordinate, ":wq");//��X��r(��rx,��ry,"��r")
        break;
    case 10:
        outtextxy(70, coordinate, "--skip");//��X��r(��rx,��ry,"��r")
        break;
    case 11:
        outtextxy(70, coordinate, "/home");//��X��r(��rx,��ry,"��r")
        break;
    case 12:
        outtextxy(70, coordinate, "/dev");//��X��r(��rx,��ry,"��r")
        break;
    case 13:
        outtextxy(70, coordinate, "grep '????' TESTFILE");//��X��r(��rx,��ry,"��r")
        break;
    case 14:
        outtextxy(70, coordinate, "/bin/sh");//��X��r(��rx,��ry,"��r")
        break;
    case 15:
        outtextxy(70, coordinate, "��󪺦�m");//��X��r(��rx,��ry,"��r")
        break;
    case 16:
        outtextxy(70, coordinate, "set command");//��X��r(��rx,��ry,"��r")
        break;
    case 17:
        outtextxy(70, coordinate, "�Τ�ؿ�");//��X��r(��rx,��ry,"��r")
        break;
    case 18:
        outtextxy(70, coordinate, "cw");//��X��r(��rx,��ry,"��r")
        break;
    case 19:
        outtextxy(70, coordinate, "���κ޲z��");//��X��r(��rx,��ry,"��r")
        break;
    case 20:
        outtextxy(70, coordinate, "@");//��X��r(��rx,��ry,"��r")
        break;
    }
    return 0;
}
//************************************************************************
int question_options_coordinate(int options)//�����H����,�]�w�U�ﶵ�y��
{
    int coordinate;
    if (options == 1) { coordinate = 370; }
    else if (options == 2) { coordinate = 400; }
    else if (options == 3) { coordinate = 430; }
    else if (options == 4) { coordinate = 460; }
    return coordinate;
}
//************************************************************************
int ABCD(void)//��XABCD
{
    setbkmode(TRANSPARENT);//�]�m��r�I���⬰�z��
    settextstyle(20, 0, "�L�n������");//(�r��,�r�e(�w�]�H��X�ܤ�),"�r��(�n�t�Φ���)")
    settextcolor(BLACK);//�r���C��
    outtextxy(50, 370, "A. ");//��X��r(��rx,��ry,"��r")
    outtextxy(50, 400, "B.");//��X��r(��rx,��ry,"��r")
    outtextxy(50, 430, "C.");//��X��r(��rx,��ry,"��r")
    outtextxy(50, 460, "D.");//��X��r(��rx,��ry,"��r")
    return 0;
}
//************************************************************************
/*
#include"function.h"

int _question(void)
{
    int coordinate;//�ﶵ��m
    int problem_save;//�x�s�H���D��
    int options_save[4] = { 0 };//�x�s�ӿﶵ��m
    srand((unsigned)time(NULL));

    problem_save = _problem();//�H���D��

    options_save[0] = rand() % 4 + 1;//��l�H������
    coordinate = question_options_coordinate(options_save[0]);//�����H����,�]�w�U�ﶵ�y��
    _options_true(problem_save, coordinate);//�ھ��H�����D�ؿ�X���T�ﶵ

    do { options_save[1] = rand() % 4 + 1; } while (options_save[0] == options_save[1]);//���H���X�Ӫ��Ƥ�����e1��
    coordinate = question_options_coordinate(options_save[1]);//�����H����,�]�w�U�ﶵ�y��
    _options_false1(problem_save, coordinate);//�ھ��H�����D�ؿ�X���~�ﶵ1

    do { options_save[2] = rand() % 4 + 1; } while (options_save[0] == options_save[2] || options_save[1] == options_save[2]);//���H���X�Ӫ��Ƥ�����e2��
    coordinate = question_options_coordinate(options_save[2]);//�����H����,�]�w�U�ﶵ�y��
    _options_false2(problem_save, coordinate);//�ھ��H�����D�ؿ�X���~�ﶵ2

    do { options_save[3] = rand() % 4 + 1; } while (options_save[0] == options_save[3] || options_save[1] == options_save[3] || options_save[2] == options_save[3]);//���H���X�Ӫ��Ƥ�����e3��
    coordinate = question_options_coordinate(options_save[3]);//�����H����,�]�w�U�ﶵ�y��
    _options_false3(problem_save, coordinate);//�ھ��H�����D�ؿ�X���~�ﶵ3

    return options_save[0];//��^���T���צ�m
}
//*********************************************************************
int _problem(void)//�H���D��
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
        //**********************************************************************************************************************************************************
        outtextxy(50, 300, "");//��X��r(��rx,��ry,"��r")
        //outtextxy(50, 330, "");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 2:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 3:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 4:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 5:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 6:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 7:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 8:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 9:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 10:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 11:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 12:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 13:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 14:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 15:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 16:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 17:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 18:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 19:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 20:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    }
    return problem;//�^���H���쪺�D��
}
//*********************************************************************
int _options_true(int problem, int coordinate)//���T�ﶵ
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "1");//��X��r(��rx,��ry,"��r")
        break;
    case 2:
        outtextxy(70, coordinate, "1");//��X��r(��rx,��ry,"��r")
        break;
    case 3:
        outtextxy(70, coordinate, "1");//��X��r(��rx,��ry,"��r")
        break;
    case 4:
        outtextxy(70, coordinate, "1");//��X��r(��rx,��ry,"��r")
        break;
    case 5:
        outtextxy(70, coordinate, "1");//��X��r(��rx,��ry,"��r")
        break;
    case 6:
        outtextxy(70, coordinate, "1");//��X��r(��rx,��ry,"��r")
        break;
    case 7:
        outtextxy(70, coordinate, "1");//��X��r(��rx,��ry,"��r")
        break;
    case 8:
        outtextxy(70, coordinate, "1");//��X��r(��rx,��ry,"��r")
        break;
    case 9:
        outtextxy(70, coordinate, "1");//��X��r(��rx,��ry,"��r")
        break;
    case 10:
        outtextxy(70, coordinate, "1");//��X��r(��rx,��ry,"��r")
        break;
    case 11:
        outtextxy(70, coordinate, "1");//��X��r(��rx,��ry,"��r")
        break;
    case 12:
        outtextxy(70, coordinate, "1");//��X��r(��rx,��ry,"��r")
        break;
    case 13:
        outtextxy(70, coordinate, "1");//��X��r(��rx,��ry,"��r")
        break;
    case 14:
        outtextxy(70, coordinate, "1");//��X��r(��rx,��ry,"��r")
        break;
    case 15:
        outtextxy(70, coordinate, "1");//��X��r(��rx,��ry,"��r")
        break;
    case 16:
        outtextxy(70, coordinate, "1");//��X��r(��rx,��ry,"��r")
        break;
    case 17:
        outtextxy(70, coordinate, "1");//��X��r(��rx,��ry,"��r")
        break;
    case 18:
        outtextxy(70, coordinate, "1");//��X��r(��rx,��ry,"��r")
        break;
    case 19:
        outtextxy(70, coordinate, "1");//��X��r(��rx,��ry,"��r")
        break;
    case 20:
        outtextxy(70, coordinate, "1");//��X��r(��rx,��ry,"��r")
        break;
    }
    return 0;
}
//*********************************************************************
int _options_false1(int problem, int coordinate)//���~�ﶵ1
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 2:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 3:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 4:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 5:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 6:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 7:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 8:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 9:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 10:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 11:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 12:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 13:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 14:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 15:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 16:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 17:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 18:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 19:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 20:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    }
    return 0;
}
//*********************************************************************
int _options_false2(int problem, int coordinate)//���~�ﶵ2
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 2:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 3:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 4:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 5:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 6:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 7:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 8:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 9:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 10:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 11:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 12:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 13:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 14:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 15:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 16:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 17:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 18:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 19:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 20:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    }
    return 0;
}
//*********************************************************************
int _options_false3(int problem, int coordinate)//���~�ﶵ3
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 2:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 3:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 4:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 5:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 6:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 7:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 8:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 9:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 10:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 11:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 12:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 13:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 14:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 15:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 16:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 17:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 18:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 19:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    case 20:
        outtextxy(70, coordinate, "");//��X��r(��rx,��ry,"��r")
        break;
    }
    return 0;
}



*/

