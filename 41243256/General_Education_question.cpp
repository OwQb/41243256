#include"function.h"

int General_Education_question(void)
{
    int coordinate;//�ﶵ��m
    int problem_save;//�x�s�H���D��
    int options_save[4] = { 0 };//�x�s�ӿﶵ��m
    srand((unsigned)time(NULL));

    problem_save = General_Education_problem();//�H���D��

    options_save[0] = rand() % 4 + 1;//��l�H������
    coordinate = question_options_coordinate(options_save[0]);//�����H����,�]�w�U�ﶵ�y��
    General_Education_options_true(problem_save, coordinate);//�ھ��H�����D�ؿ�X���T�ﶵ

    do { options_save[1] = rand() % 4 + 1; } while (options_save[0] == options_save[1]);//���H���X�Ӫ��Ƥ�����e1��
    coordinate = question_options_coordinate(options_save[1]);//�����H����,�]�w�U�ﶵ�y��
    General_Education_options_false1(problem_save, coordinate);//�ھ��H�����D�ؿ�X���~�ﶵ1

    do { options_save[2] = rand() % 4 + 1; } while (options_save[0] == options_save[2] || options_save[1] == options_save[2]);//���H���X�Ӫ��Ƥ�����e2��
    coordinate = question_options_coordinate(options_save[2]);//�����H����,�]�w�U�ﶵ�y��
    General_Education_options_false2(problem_save, coordinate);//�ھ��H�����D�ؿ�X���~�ﶵ2

    do { options_save[3] = rand() % 4 + 1; } while (options_save[0] == options_save[3] || options_save[1] == options_save[3] || options_save[2] == options_save[3]);//���H���X�Ӫ��Ƥ�����e3��
    coordinate = question_options_coordinate(options_save[3]);//�����H����,�]�w�U�ﶵ�y��
    General_Education_options_false3(problem_save, coordinate);//�ھ��H�����D�ؿ�X���~�ﶵ3

    return options_save[0];//��^���T���צ�m
}
//*********************************************************************
int General_Education_problem(void)//�H���D��
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
        outtextxy(50, 300, "���|�D�q�M�@���D�q�]�����z���ۦP,�ӱ`�Q�@�_�Q��,����ڤW��̶����������t��");//��X��r(��rx,��ry,"��r")
        outtextxy(50, 330, ",�U�C�����̪�����ԭz,��̥��T�H");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 2:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�ھڧڰ�˪k�P�˪k�W�ױ��大�����W�w,�U�C����ʹ�|¾�v���ԭz,��̥��T�H");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 3:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�̾ڧڰ�����k�O�P�_,�U�C�����ڰꪽ�ҥ������[��ĳ��,�ο������[����ĳ�����|��פ��t��,��̥��T�H");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 4:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "���� 92 �~��w�������벼�k,�ت��b���H���H�����벼���覡,��k�ߩΤ��@�F����F�N��,");//��X��r(��rx,��ry,"��r")
        outtextxy(50, 330, "�N��ʽ� �Ө�,�Ӫk�ݩ�ڰ�˪k�W�ҫO�٪��󶵤H�����v�Q�H");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 5:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "���]���A������,�ꤺ�U�j�s��W�ӷ~�̦P�ɽպ��t�ũ@�ت�����,�~�̪��欰,�i��H�ϤU�C��تk�ߪ��W�w�H");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 6:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "����D�B�ͤl�k�B�i�l�k�B�˥ͤl�k,�b�ڰ���k���ݽs�P�~�ӽs�������W�w,�U�C�ԭz��̥��T�H");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 7:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�j�k�x�����ץ󪺼f�z�{��,�U�C��̥��T�H");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 8:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�M�ѬO�������ƤH,�b���H�Ϩ�ۥѷN�Ӫ����ΤU,�N��ĳ�i�淾�q,");//��X��r(��rx,��ry,"��r")
        outtextxy(50, 330, "������F��@��,�ۦ�ѨM��ĳ���覡,����M�Ѫ��ԭz,�U�C��̥��T�H");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 9:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�t�Ӵ��Ѥ@�w�ƶq�ӫ~�쥫����,��Ҧ��쪺�����f�ڶW�L�L�@�N�ѵ����̧C�n�D����,");//��X��r(��rx,��ry,"��r")
        outtextxy(50, 330, "�o�ӳ������t�B�b�g�پǤW�٬��G");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 10:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�Y���q�ת��Ǫ̥D�i,�@�ӥ��q�����|�������C�ӤH���v�Q����,�ϳB�Ҥ��Q�̱o��̤j�����U,");//��X��r(��rx,��ry,"��r")
        outtextxy(50, 330, "�U�C��̳̲ŦX�W�z���D�i�H");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 11:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�Y���]�ʫI�פJ�ʪA�D,�k�|�O�������ᤴ�������C�޻P�v��,�H�קK��A��,���سB�m�覡�����V��ئD�@�z�סH");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 12:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "���H���~���c���ܦӥ��~���Ҥu,�F���ΤU�C��ؤ覡�̯��g�U�ġH");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 13:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�U�C�����j�ǥ��v�Q���٪��y�{,��̿��~�H");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 14:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�D�k�����D�k�������]�t�D�D�P�q�D,�̾ڲ{��D�k,�U�C����ݩ�q�D�H");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 15:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "���_��a�Ҹ�,��ߤή����o�߮v�Ү�,���ҮѪ��ֵo�ݩ�U�C��ئ�F�欰�H");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 16:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�w��ڰ�u�F�ȩx�v�P�u�ưȩx�v�����,�̬����k�߳W�w,�U�C�ԭz��̥��T�H");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 17:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�U�C��̤��ݩ�D�k�W�w�o��D���då�H");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 18:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�Y��h�~���~�v���F 15%,�о��v�s��,���@���~�v�O�p��p��ӨӡH");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 19:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�ҿn��A 20 �U�����Ыί��������,���g 10 �~��,�A�~�V�ҽШD���I����,�ҬO�_�i�ڵ����I�H");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 20:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "�H�ۥ��y�ƪ��o�i,��ڥ�y�U�ӷU�W�c,�����ڥ�y���ԭz,�U�C��̥��T�H");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    }
    return problem;//�^���H���쪺�D��
}
//*********************************************************************
int General_Education_options_true(int problem, int coordinate)//���T�ﶵ
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "�@���D�q�H���Ű����i��ﭲ,���|�D�q�h�D�i���i�ﭲ");//��X��r(��rx,��ry,"��r")
        break;
    case 2:
        outtextxy(70, coordinate, "�w��M�⪺�f�ֳ��i�� 3 �Ӥ뤺�V�ߪk�|���X");//��X��r(��rx,��ry,"��r")
        break;
    case 3:
        outtextxy(70, coordinate, " ����ĳ���G�Ƽƿ�ϳ�O��");//��X��r(��rx,��ry,"��r")
        break;
    case 4:
        outtextxy(70, coordinate, "�Ш�ƨM�v");//��X��r(��rx,��ry,"��r")
        break;
    case 5:
        outtextxy(70, coordinate, "��������k");//��X��r(��rx,��ry,"��r")
        break;
    case 6:
        outtextxy(70, coordinate, "�D�B�ͤl�k�M�ͥ����������Y,�����B�ͤl�k");//��X��r(��rx,��ry,"��r")
        break;
    case 7:
        outtextxy(70, coordinate, "�����f�d�x����´�ε{��,�A�Ψ�¾�v�����,�t��˪k�k�x�f�z�W�h�w��");//��X��r(��rx,��ry,"��r")
        break;
    case 8:
        outtextxy(70, coordinate, "�D�^�W���M�ѻP�T�w�P�M���ۦP�ĤO");//��X��r(��rx,��ry,"��r")
        break;
    case 9:
        outtextxy(70, coordinate, "�Ͳ��̳Ѿl");//��X��r(��rx,��ry,"��r")
        break;
    case 10:
        outtextxy(70, coordinate, "�m�ؿv�k�n�W�w�Ҧ������@�ؿv�������]���u�L��ê�]�I�v");//��X��r(��rx,��ry,"��r")
        break;
    case 11:
        outtextxy(70, coordinate, "�S�O�w���z��");//��X��r(��rx,��ry,"��r")
        break;
    case 12:
        outtextxy(70, coordinate, "�[�j�Ш|�P¾�~�V�m�A�W�[�N�~��O");//��X��r(��rx,��ry,"��r")
        break;
    case 13:
        outtextxy(70, coordinate, "���A��F�k�|�P�M�A�o�V�ʹ�|�n�о˪k����");//��X��r(��rx,��ry,"��r")
        break;
    case 14:
        outtextxy(70, coordinate, "�ɹܤ��v");//��X��r(��rx,��ry,"��r")
        break;
    case 15:
        outtextxy(70, coordinate, "��F�B��");//��X��r(��rx,��ry,"��r")
        break;
    case 16:
        outtextxy(70, coordinate, "�F�ȩx�ݭt�d�W���F���A�ưȩx���t�d�F������");//��X��r(��rx,��ry,"��r")
        break;
    case 17:
        outtextxy(70, coordinate, "30 �����j���s��r���A���˸��H");//��X��r(��rx,��ry,"��r")
        break;
    case 18:
        outtextxy(70, coordinate, "�]���~�H�f���ҰʤH�f�^��100%");//��X��r(��rx,��ry,"��r")
        break;
    case 19:
        outtextxy(70, coordinate, "�i�H�A�]�����ШD�v�������ɮĥu�� 5 �~");//��X��r(��rx,��ry,"��r")
        break;
    case 20:
        outtextxy(70, coordinate, "�p�X��L�k�������ҦU�����ꤧ������Y�P�ꤺ�v�z");//��X��r(��rx,��ry,"��r")
        break;
    }
    return 0;
}
//*********************************************************************
int General_Education_options_false1(int problem, int coordinate)//���~�ﶵ1
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "�@���D�q�b��y�ꥻ�D�q,���|�D�q�H�L���Ū��|���z�Q");//��X��r(��rx,��ry,"��r")
        break;
    case 2:
        outtextxy(70, coordinate, "��U�ݬI�����x��,�i�w���ӤH�欰�i��ȥ�");//��X��r(��rx,��ry,"��r")
        break;
    case 3:
        outtextxy(70, coordinate, "�������G��ҥN���");//��X��r(��rx,��ry,"��r")
        break;
    case 4:
        outtextxy(70, coordinate, "�Φ����q�v");//��X��r(��rx,��ry,"��r")
        break;
    case 5:
        outtextxy(70, coordinate, "���~�åͺ޲z�k");//��X��r(��rx,��ry,"��r")
        break;
    case 6:
        outtextxy(70, coordinate, "�i�l�k�M�˥ͤl�k�b�k�ߤW���a�줣�P,�~�Ӥ����򲣪�����]���P");//��X��r(��rx,��ry,"��r")
        break;
    case 7:
        outtextxy(70, coordinate, "�Τ@�����k�ߤΩR�O�ץ�,�j�k�x�{���`�B�T�����G���X�u,�X�u�H�T�����G���P�N");//��X��r(��rx,��ry,"��r")
        break;
    case 8:
        outtextxy(70, coordinate, "�D�^�~���M�ѩM�D�^�W���M�ѮĤO�ۦP");//��X��r(��rx,��ry,"��r")
        break;
    case 9:
        outtextxy(70, coordinate, "�ѵ�����");//��X��r(��rx,��ry,"��r")
        break;
    case 10:
        outtextxy(70, coordinate, "�m���k�n�W�w������󥼦��~�l�k���u�O�@���U�v���d��");//��X��r(��rx,��ry,"��r")
        break;
    case 11:
        outtextxy(70, coordinate, "�@��w���z��");//��X��r(��rx,��ry,"��r")
        break;
    case 12:
        outtextxy(70, coordinate, "���ѨD�~�D¾����T�A�[�j�N�~�C�X");//��X��r(��rx,��ry,"��r")
        break;
    case 13:
        outtextxy(70, coordinate, "���A�D�@�M�w�o�V��F�k�|���_��F�D�^");//��X��r(��rx,��ry,"��r")
        break;
    case 14:
        outtextxy(70, coordinate, "�S��");//��X��r(��rx,��ry,"��r")
        break;
    case 15:
        outtextxy(70, coordinate, "��F����");//��X��r(��rx,��ry,"��r")
        break;
    case 16:
        outtextxy(70, coordinate, "�F�ȩx�P�ưȩx�������ȤH�����Ϊk�O�١A���o���N�K¾");//��X��r(��rx,��ry,"��r")
        break;
    case 17:
        outtextxy(70, coordinate, "85 �����ѯ������O�ɭP���סA�y���ƤH����");//��X��r(��rx,��ry,"��r")
        break;
    case 18:
        outtextxy(70, coordinate, "�]���~�H�f�������H�f�^��100%");//��X��r(��rx,��ry,"��r")
        break;
    case 19:
        outtextxy(70, coordinate, "�i�H�A�]������v�Ű����Y�O 2 �~�w����");//��X��r(��rx,��ry,"��r")
        break;
    case 20:
        outtextxy(70, coordinate, "��ڲ�´�U�إߪ���ڨ�w�n�D�Ҧ�������Ҷ��[�J");//��X��r(��rx,��ry,"��r")
        break;
    }
    return 0;
}
//*********************************************************************
int General_Education_options_false2(int problem, int coordinate)//���~�ﶵ2
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "���|�D�q�j�ճѾl���Ƚ�,�@���D�q�h�j�պ֧Q��a");//��X��r(��rx,��ry,"��r")
        break;
    case 2:
        outtextxy(70, coordinate, "����`�δ��W�Ҹհ|�|�������R�i��ϦP�N�v");//��X��r(��rx,��ry,"��r")
        break;
    case 3:
        outtextxy(70, coordinate, "���ҥ�ĳ���G��@���|�ϵ���h�ƨ�");//��X��r(��rx,��ry,"��r")
        break;
    case 4:
        outtextxy(70, coordinate, "��襭���v");//��X��r(��rx,��ry,"��r")
        break;
    case 5:
        outtextxy(70, coordinate, "�ӫ~�Хܪk");//��X��r(��rx,��ry,"��r")
        break;
    case 6:
        outtextxy(70, coordinate, "�ͤ��Υͥ����i�z�L����,�����ư��S�w�D�B�ͤl�k���~���v�Q");//��X��r(��rx,��ry,"��r")
        break;
    case 7:
        outtextxy(70, coordinate, "�j�k�x�Y�o�{�k�ߦ��H�˺øq,�D�ʥH�|ĳ�覡,�i��Q�ק@���Mĳ");//��X��r(��rx,��ry,"��r")
        break;
    case 8:
        outtextxy(70, coordinate, "������Ʈץ�D�Ʈץ󳣥i�ӽЩM��");//��X��r(��rx,��ry,"��r")
        break;
    case 9:
        outtextxy(70, coordinate, "�ѵ��k�h");//��X��r(��rx,��ry,"��r")
        break;
    case 10:
        outtextxy(70, coordinate, "�m�ұo�|�k�n�W�w�H�����ұo�Ҷ�ú�Ǻ�X�ұo�|");//��X��r(��rx,��ry,"��r")
        break;
    case 11:
        outtextxy(70, coordinate, "����z��");//��X��r(��rx,��ry,"��r")
        break;
    case 12:
        outtextxy(70, coordinate, "�Ħ��X�i�ʳf���F���A��E����_�d");//��X��r(��rx,��ry,"��r")
        break;
    case 13:
        outtextxy(70, coordinate, "���A�ǮեӶD�M�w�o�V�W�ťD�޾������_�D�@");//��X��r(��rx,��ry,"��r")
        break;
    case 14:
        outtextxy(70, coordinate, "���");//��X��r(��rx,��ry,"��r")
        break;
    case 15:
        outtextxy(70, coordinate, "��F�p�e");//��X��r(��rx,��ry,"��r")
        break;
    case 16:
        outtextxy(70, coordinate, "�F�ȩx�ݹ�F���t�d�A�����A�Τ��ȭ��g�ٳW�w");//��X��r(��rx,��ry,"��r")
        break;
    case 17:
        outtextxy(70, coordinate, "53 �����ڰפH���s�ܫK�Q�ө��ѵs�I�ƥd");//��X��r(��rx,��ry,"��r")
        break;
    case 18:
        outtextxy(70, coordinate, "�]���~�H�f���N�~�H�f�^��100%");//��X��r(��rx,��ry,"��r")
        break;
    case 19:
        outtextxy(70, coordinate, "���i�H�A�]�����ШD�v�������ɮĦ� 15 �~");//��X��r(��rx,��ry,"��r")
        break;
    case 20:
        outtextxy(70, coordinate, "�U��F������y���H�����F���~���������");//��X��r(��rx,��ry,"��r")
        break;
    }
    return 0;
}
//*********************************************************************
int General_Education_options_false3(int problem, int coordinate)//���~�ﶵ3
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "���|�D�q��������g�٥���,�@���D�q�j�խӤH�]�I");//��X��r(��rx,��ry,"��r")
        break;
    case 2:
        outtextxy(70, coordinate, "�w���˽վ������ﵽ�D�D�@�ƥi�i��u��");//��X��r(��rx,��ry,"��r")
        break;
    case 3:
        outtextxy(70, coordinate, "���ҥ������G�Ƽƿ��|�Ϭ۹�h�ƨ�");//��X��r(��rx,��ry,"��r")
        break;
    case 4:
        outtextxy(70, coordinate, "�N���ۥ��v");//��X��r(��rx,��ry,"��r")
        break;
    case 5:
        outtextxy(70, coordinate, "���O�̫O�@�k");//��X��r(��rx,��ry,"��r")
        break;
    case 6:
        outtextxy(70, coordinate, "�i�l�k�i�P�ɨɦ��i�����P�ͤ��ͥ������~���v");//��X��r(��rx,��ry,"��r")
        break;
    case 7:
        outtextxy(70, coordinate, "�����˪k�ץ�,�j�k�x�{���`�B�L�b�Ƥ��X�u,�X�u�H�L�b�Ƥ��P�N");//��X��r(��rx,��ry,"��r")
        break;
    case 8:
        outtextxy(70, coordinate, "�M�Ѩ��t²�K��ĤO�j��ոѻP���");//��X��r(��rx,��ry,"��r")
        break;
    case 9:
        outtextxy(70, coordinate, "�Ͳ�����");//��X��r(��rx,��ry,"��r")
        break;
    case 10:
        outtextxy(70, coordinate, "�m�˪k�n�W�w�H���ɦ��������ǵۧ@�X�����ۥ�");//��X��r(��rx,��ry,"��r")
        break;
    case 11:
        outtextxy(70, coordinate, "�����z��");//��X��r(��rx,��ry,"��r")
        break;
    case 12:
        outtextxy(70, coordinate, "�Ħ���Y�ʳf���F���A��w�����O�D");//��X��r(��rx,��ry,"��r")
        break;
    case 13:
        outtextxy(70, coordinate, "�o�̾Ǯժ��ӶD��״��X�ӶD");//��X��r(��rx,��ry,"��r")
        break;
    case 14:
        outtextxy(70, coordinate, "�@��");//��X��r(��rx,��ry,"��r")
        break;
    case 15:
        outtextxy(70, coordinate, "��F����");//��X��r(��rx,��ry,"��r")
        break;
    case 16:
        outtextxy(70, coordinate, "�F�ȩx�g��a�Ҹե��ΡA�ưȩx�g�F�v���R����");//��X��r(��rx,��ry,"��r")
        break;
    case 17:
        outtextxy(70, coordinate, "16 ��������b�����d���Q��o�Q�����P��");//��X��r(��rx,��ry,"��r")
        break;
    case 18:
        outtextxy(70, coordinate, "�]���~�H�f���`�H�f�^��100%");//��X��r(��rx,��ry,"��r")
        break;
    case 19:
        outtextxy(70, coordinate, "���i�H�A�]�X���H���V�k�|�n�бj�����");//��X��r(��rx,��ry,"��r")
        break;
    case 20:
        outtextxy(70, coordinate, "����~��Y��������F����U�i�����y");//��X��r(��rx,��ry,"��r")
        break;
    }
    return 0;
}