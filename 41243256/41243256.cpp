#include"function.h"

/*
*                                        !!!�`�N�ƶ�!!!
* 0.���{���ϥ�easyx,�Ц�https://easyx.cn/easyx�U���w��
* 1.�O�o���i"�M��">>"�ݩ�">>"�i��">>�N�r�����קאּ"�ϥΦh�줸�զr����"
* 2.���M�D�ϥΪ�tools.cpp��tools.h�ɤ��ݩ󥻤H���g,�ӷ��Ц�https://www.bilibili.com/video/BV1vM4y1X7Kb/?share_source=copy_web&vd_source=f387be602c0e9f90a4635284f77db973
* 3. tools.cpp��tools.h���ݮe�z���榡
*/

/*
                        <�Ȧs�{��>
mciSendString("stop BGM", 0, 0, 0);//�Ȱ�����mp3

*/

ExMessage msg;//�����ЫH��
IMAGE curriculum;//�Ҫ��
IMAGE flashing;//�{��
struct Resource 
{
    IMAGE bg[BG_NUMBER], im[IM_NUMBER];//�Ϥ��ܼƦW
}res;

int main_scenes =0;//�ثe�D����
int player_passlevel = 0;//�q����
int check_account_Enter_how_much = 0;//�b����J�ƶq
int check_password_Enter_how_much = 0;//�K�X��J�ƶq
int cheater = 0;//0�����`�b��,1���@���b��
char account[11] = { 0 };//�x�s��J�b��
char check_account[50] = { 0 };//�x�s���Ū���b��
char password[11] = { 0 };//�x�s��J�K�X
char check_password[11] = { 0 };//�x�s���Ū���K�X
char check_passlevel;//�x�s���Ū���q����
FILE* pfile;//����m

//*********************************************************
//<�C���}�l�M��l��>
//�C����l��
int main(void)
{
    player_passlevel = 0; //��l�Ƴq����
    cheater = 0;//�w�]�����`�b��
    memset(account, 0, 11);//��l�ƿ�J���b��
    memset(password, 0, 11);//��l�ƿ�J���K�X
    system("cls");//�M�ſù�,���s�e��
    srand((unsigned)time(NULL));

    initgraph(800, 600);//ø�s���f�j�p
    loading_data(&res);//�[�����
    putimagePNG(0, 0, res.bg + 2);//��X�@�i�Ϥ�(�y��x,�y��y,�Ϥ��ܼƦW)
    setbkmode(TRANSPARENT);//�]�m��r�I���⬰�z��
    settextcolor(WHITE);//�r���C��
    settextstyle(100, 0, "�L�n������");//(�r��,�r�e(�w�]�H��X�ܤ�),"�r��(�n�t�Φ���)")
    outtextxy(200, 200, "�Х��n�J!!");//��X��r(��rx,��ry,"��r")
    Selectr_login_register();//��ܵn�J�ε��U
    system("pause");
    return 0;
}
//*********************************************************
//��ܵn�J�ε��U
int Selectr_login_register(void)
{
    char Selectr[10] = { 0 };
    int check_Selectr_Enter_how_much = 0;
    do {
        printf("�Х��n�J/���U�b��(��J�Ʀr 1 �n�J/��J�Ʀr 2 ���U):");
        rewind(stdin); check_Selectr_Enter_how_much = 0;
        while ((Selectr[check_Selectr_Enter_how_much] = getchar()) != '\n') { check_Selectr_Enter_how_much++; }
        if (check_Selectr_Enter_how_much >= 2) { system("cls"); memset(Selectr, 0, 10); printf("��J���L�h,�Э��s��J\n"); }//memset���M��Selectr�r���}�C(����,�]�w��,Byte��)
        else if (Selectr[0] == '1') { login_register(1); }
        else if (Selectr[0] == '2') { login_register(2); }
        else { system("cls"); memset(Selectr, 0, 10); printf("��J���~,�Э��s��J\n"); }
    } while (Selectr[0] != '1' && Selectr[0] != '2');
    return 0;
}
//*********************************************************
//�n�J/���U
int login_register(int login_register)
{
    //�n�J
    if (login_register == 1)
    {
        //�ˬd�n�J�O�_��J���T
        while (1)
        {
            //�ˬd�n�J�b���O�_�H�W��J
            while (1)
            {
                int check_ture = 0;//�T�{�O�_��J���T
                printf("�п�J�n�J�b��(��J�Ʀr 0 ��^):");
                rewind(stdin); check_account_Enter_how_much = 0;//��l�Ʊb����J�ƶq&�M�Žw�s��
                while ((account[check_account_Enter_how_much] = getchar()) != '\n') { check_account_Enter_how_much++; }
                if (check_account_Enter_how_much >= 11) { system("cls"); memset(account, 0, 11); check_ture = 1; printf("��J���L�h,�Э��s��J\n"); }//memset���M��Selectr�r���}�C(����,�]�w��,Byte��)
                else if (check_account_Enter_how_much == 1 && account[0] == '0') { system("cls"); Selectr_login_register(); }//���J�ƶq��1�B��J��0�ɪ�^��ܵn�J�ε��U
                else { for (int i = 0; i < check_account_Enter_how_much; i++) { if (isalpha(account[i]) == 0) { system("cls"); memset(account, 0, 11); check_ture = 1; printf("�b���������­^��,�Э��s��J\n"); } } }//isalpha���ˬd�O�_���^��r��,��^0���D�^��r��,��^�D0���^��r��
                if (check_ture == 0) { account[check_account_Enter_how_much] = NULL; break; }//�R������r��
            }
            //�ˬd�n�J�K�X�O�_�H�W��J
            while (1)
            {
                int check_ture = 0;//�T�{�O�_��J���T
                printf("�п�J�n�J�K�X(��J�Ʀr 0 ��^):");
                rewind(stdin); check_password_Enter_how_much = 0;//��l�ƱK�X��J�ƶq&�M�Žw�s��
                while ((password[check_password_Enter_how_much] = getchar()) != '\n') { check_password_Enter_how_much++; }//�p��K�X��J�ƶq
                if (check_password_Enter_how_much >= 11) { system("cls"); memset(password, 0, 11); check_ture = 1; printf("�п�J�n�J�b��(��J�Ʀr 0 ��^):%s\n", account); printf("��J���L�h,�Э��s��J\n"); }//memset���M��Selectr�r���}�C(����,�]�w��,Byte��)
                else if (check_password_Enter_how_much == 1 && password[0] == '0') { system("cls"); Selectr_login_register(); }//���J�ƶq��1�B��J��0�ɪ�^��ܵn�J�ε��U
                else { for (int i = 0; i < check_password_Enter_how_much; i++) { if (isdigit(password[i]) == 0) { system("cls"); memset(password, 0, 11); check_ture = 1; printf("�п�J�n�J�b��(��J�Ʀr 0 ��^):%s\n", account); printf("�K�X�������¼Ʀr,�Э��s��J\n"); } } }//isdigit���ˬd�O�_���Ʀr,��^0���D�Ʀr,��^�D0���Ʀr
                if (check_ture == 0) { break; } 
            }
            memset(check_account, 0, 50);//�M�Ÿ��|
            sprintf_s(check_account, "account\\%s.txt", account);//�K�[���|
            if ((pfile = fopen(check_account, "r")) == NULL) { system("cls"); memset(account, 0, 10); memset(password, 0, 11); printf("�䤣��ӱb��, �Э��s��J\n"); }
            else
            {
                fseek(pfile,9, SEEK_SET); fgets(check_password,20, pfile);//Ū�����K�X
                //�ˬd�K�X�O�_��J���T&�O�_���@���b��
                if (strcmp(check_password, password) == 0 && strcmp("BLUE", account) == 0)
                {
                    fseek(pfile, check_password_Enter_how_much + 21, SEEK_SET); check_passlevel = fgetc(pfile);
                    player_passlevel = check_passlevel - '0';
                    fclose(pfile);
                    printf("�n�J���\!!�@���Ҧ��ҥ�!!"); cheater = 1; front_page();//����
                }
                //�ˬd�K�X�O�_��J���T
                else if (strcmp(check_password, password) == 0) 
                {
                    fseek(pfile, check_password_Enter_how_much + 21, SEEK_SET); check_passlevel = fgetc(pfile);
                    player_passlevel = check_passlevel - '0';
                    fclose(pfile);
                    printf("�n�J���\!!"); cheater = 0; front_page();//����
                }
                //�K�X��J���~�h�M�ſ�J���b���M��J���K�X
                else { system("cls");  fclose(pfile); memset(account, 0, 11); memset(password, 0, 11); printf("�K�X���~, �Э��s��J�b���K�X\n"); }
            }
        }
    }
    //���U
    else
    {
        //�ˬd���U�O�_��J���T
        while (1)
        {
            //�ˬd���U�b���O�_�H�W��J
            while (1)
            {
                int check_ture = 0;//�T�{�O�_��J���T
                printf("�п�J���U�b��(��J�Ʀr 0 ��^):");
                rewind(stdin); check_account_Enter_how_much = 0;//��l�Ʊb����J�ƶq&�M�Žw�s��
                while ((account[check_account_Enter_how_much] = getchar()) != '\n') { check_account_Enter_how_much++; }//�p��b����J�ƶq
                if (check_account_Enter_how_much >= 11) { system("cls"); memset(account, 0, 11); check_ture = 1; printf("��J���L�h,�Э��s��J\n"); }//memset���M��Selectr�r���}�C(����,�]�w��,Byte��)
                else if (check_account_Enter_how_much == 1 && account[0] == '0') { system("cls"); Selectr_login_register(); }//���J�ƶq��1�B��J��0�ɪ�^��ܵn�J�ε��U
                else { for (int i = 0; i < check_account_Enter_how_much; i++) { if (isalpha(account[i]) == 0) { system("cls"); memset(account, 0, 11); check_ture = 1; printf("�b���������­^��,�Э��s��J\n"); } } }//isalpha���ˬd�O�_���^��r��,��^0���D�^��r��,��^�D0���^��r��
                if (check_ture == 0) { account[check_account_Enter_how_much] = NULL; break; }//�R������r��
            }
            //�ˬd���U�K�X�O�_�H�W��J
            while (1)
            {
                int check_ture = 0;//�T�{�O�_��J���T
                printf("�п�J���U�K�X(��J�Ʀr 0 ��^):");
                rewind(stdin); check_password_Enter_how_much = 0;//��l�ƱK�X��J�ƶq&�M�Žw�s��
                while ((password[check_password_Enter_how_much] = getchar()) != '\n') { check_password_Enter_how_much++; }//�p��K�X��J�ƶq
                if (check_password_Enter_how_much >= 11) { system("cls"); memset(password, 0, 11); check_ture = 1; printf("�п�J���U�b��(��J�Ʀr 0 ��^):%s\n", account); printf("��J���L�h,�Э��s��J\n"); }//memset���M��Selectr�r���}�C(����,�]�w��,Byte��)
                else if (check_password_Enter_how_much == 1 && password[0] == '0') { system("cls"); Selectr_login_register(); }//���J�ƶq��1�B��J��0�ɪ�^��ܵn�J�ε��U
                else { for (int i = 0; i < check_password_Enter_how_much; i++) { if (isdigit(password[i]) == 0) { system("cls"); memset(password, 0, 11); check_ture = 1; printf("�п�J���U�b��(��J�Ʀr 0 ��^):%s\n", account); printf("�K�X�������¼Ʀr,�Э��s��J\n"); } } }//isdigit���ˬd�O�_���Ʀr,��^0���D�Ʀr,��^�D0���Ʀr
                if (check_ture == 0) { break; }
            }
            memset(check_account, 0, 50);//�M�Ÿ��|
            sprintf_s(check_account, "account\\%s.txt", account);//�K�[���|
            if ((pfile = fopen(check_account, "r")) != NULL) { system("cls"); memset(account, 0, 11); memset(password, 0, 11); printf("�w��%s�b���Э��s���U\n", account); }
            else if ((pfile = fopen(check_account, "w")) == NULL) { system("cls"); memset(account, 0, 11); memset(password, 0, 11); printf("�o���Y�����~,�䤣��account���\n"); }
            else {//���U�ɶ�J���a��l�H��
                fprintf(pfile, "password:%s", password);//���a�K�X
                fprintf(pfile, "passlevel:0");//���a�q����(��l��0)
                fclose(pfile);
                printf("���U���\!!(�����N���^)\n");
                rewind(stdin);
                getchar();//�ΨӴ��N�����N���^
                system("cls"); Selectr_login_register();//�M�ŵe��,��^��ܵn�J�ε��U
            }
        }
    }
    return 0;
}
//*********************************************************
//<�C�����>
//�O�s�C���i��
int save_player_passlevel(void)
{
    if((pfile = fopen(check_account, "r+")) == NULL){ system("cls"); printf("�O�s�C���i�׮ɵo���Y�����~,�䤣����,��ĳ�h�X�C�����s���U�b��\n"); }
    fseek(pfile, check_password_Enter_how_much + 21, SEEK_SET); fputc(player_passlevel + 48,pfile);//����Ū�g�Y,�ק�q����
    fclose(pfile);
    return 0;
}
//*********************************************************
//�[�����
int loading_data(struct Resource *res)
{
    mciSendString("open BGM/Bgm-level.mp3 alias BGM", 0, 0, 0);//�ɤJmp3��(alias���ק�ե��ɮצW��)
    loadimage(&curriculum, "image/curriculum.png");//�ɤJ�Ϥ�
    loadimage(&flashing, "image/flashing.png");//�ɤJ�Ϥ�
    for (int i = 0; i <= BG_NUMBER-1; i++)//�Ω�٥h���J�h�i�Ϥ�
    {
        char path[50] = { 0 };//�M���e�@�ӹϤ����|�r��
        sprintf_s(path, "image/bg%d.png", i + 1);//sprintf_s�N�榡�Ʀr���x�s��w�İ�
        loadimage(res->bg + i, path, getwidth(), getheight());//(���J���Ϥ�,�Ϥ����|�r��,�ھڵ����j�p���ܹϤ����e)
    }
    for (int i = 0; i <= IM_NUMBER -1; i++)//�Ω�٥h���J�h�i�Ϥ�
    {
        char path[50] = { 0 };//�M���e�@�ӹϤ����|�r��
        sprintf_s(path, "image/im%d.png", i + 1);//sprintf_s�N�榡�Ʀr���x�s��w�İ�
        loadimage(res->im + i, path);//(���J���Ϥ�,�Ϥ����|�r��,���ܹϤ����e)
    }
    return 0;
}
//*********************************************************
//<�����M���d>
//����
int front_page(void)
{
    main_scenes = 0;//�]�m��e����(������0)
    mciSendString("play BGM repeat", 0, 0, 0);//�`������mp3
	putimagePNG(0, 0, res.bg + 0);//��X�@�i�Ϥ�(�y��x,�y��y,�Ϥ��ܼƦW)
    mouse(msg, main_scenes, cheater, &player_passlevel);//�ШD���а���
	return 0;
}
//*********************************************************
//��l�@��
int inital_plot(void)
{
    main_scenes = 1;//�]�m��e����(��l�@����1)
    putimagePNG(0, 0, res.bg + 2);//��X�@�i�Ϥ�(�y��x,�y��y,�Ϥ��ܼƦW)
    setbkmode(TRANSPARENT);//�]�m��r�I���⬰�z��
    settextcolor(WHITE);//�r���C��
    settextstyle(30, 0, "�L�n������");//(�r��,�r�e(�w�]�H��X�ܤ�),"�r��(�n�t�Φ���)")
    outtextxy(160, 200, "�e�����n");//��X��r(��rx,��ry,"��r")
    outtextxy(160, 260, "�h�ۼ������A��J�F�����ޤj��");//��X��r(��rx,��ry,"��r")
    outtextxy(160, 295, "����s������,�s���P�Ǫ��A�O�_������첦�~�O?");//��X��r(��rx,��ry,"��r")
    outtextxy(160, 330, "�ؼЬO���L�j�@!�[�o!���n�Q��!");//��X��r(��rx,��ry,"��r")
    mouse(msg, main_scenes , cheater,&player_passlevel);//�ШD���а���
    return 0;
}
//*********************************************************
//�D���
int main_menu(void)
{
    main_scenes = 2;//�]�m��e����(�D��欰2)
    putimagePNG(0, 0, res.bg +5);//��X�@�i�Ϥ�(�y��x,�y��y,�Ϥ��ܼƦW)
    putimagePNG(170, 0, &curriculum);
    main_menu_button_fillrectangle_size(player_passlevel);//�]�w���զ�x�ξB��d��,��֦�ƥ�
    setfillcolor(RGB(205, 133, 63));//�]�m�x�ζ�R��(�ϥ�RGB)
    fillroundrect(10, 10, 110, 60, 10, 10);//ø�s�ꨤ�x��(��,�W,�k,�U,��e,�갪)
    setbkmode(TRANSPARENT);//�]�m��r�I���⬰�z��
    settextcolor(BLACK);//�r���C��
    settextstyle(30, 0, "�L�n������");//(�r��,�r�e(�w�]�H��X�ܤ�),"�r��(�n�t�Φ���)")
    outtextxy(22, 20, "�D����");//��X��r(��rx,��ry,"��r")
    mouse(msg, main_scenes , cheater,&player_passlevel);//�ШD���а���
    return 0;
}
//*********************************************************
//linux���d
int linux_level(void)
{
    main_scenes = 3;//�]�m��e����(��l�оǬ�3)
    setbkmode(TRANSPARENT);//�]�m��r�I���⬰�z��
    settextcolor(WHITE);//�r���C��
    settextstyle(40, 0, "�L�n������");//(�r��,�r�e(�w�]�H��X�ܤ�),"�r��(�n�t�Φ���)")
    outtextxy(380, 0, "Tux");//��X��r(��rx,��ry,"��r")
    putimagePNG(350, 100, res.im + 2);
    mouse(msg, main_scenes, cheater, &player_passlevel);//�ШD���а���
    return 0;
}
//*********************************************************
//�{���]�p���d
int  programming_level(void)
{
    main_scenes = 4;//�]�m��e����(�{���]�p��4)
    setbkmode(TRANSPARENT);//�]�m��r�I���⬰�z��
    settextcolor(WHITE);//�r���C��
    settextstyle(40, 0, "�L�n������");//(�r��,�r�e(�w�]�H��X�ܤ�),"�r��(�n�t�Φ���)")
    outtextxy(350, 0, "�A�̷R��");//��X��r(��rx,��ry,"��r")
    putimagePNG(350, 100, res.im + 5);
    mouse(msg, main_scenes, cheater, &player_passlevel);//�ШD���а���
    return 0;
}
//*********************************************************
//��|���d
int  PE_level(void)
{
    main_scenes = 5;//�]�m��e����(��|��5)
    setbkmode(TRANSPARENT);//�]�m��r�I���⬰�z��
    settextcolor(WHITE);//�r���C��
    settextstyle(40, 0, "�L�n������");//(�r��,�r�e(�w�]�H��X�ܤ�),"�r��(�n�t�Φ���)")
    outtextxy(350, 0, "�n�֤��Q��");//��X��r(��rx,��ry,"��r")
    putimagePNG(350, 100, res.im + 8);
    mouse(msg, main_scenes, cheater, &player_passlevel);//�ШD���а���
    return 0;
}
//*********************************************************
//�p�����d
int  calculator_level(void)
{
    main_scenes = 6;//�]�m��e����(�p����6)
    setbkmode(TRANSPARENT);//�]�m��r�I���⬰�z��
    settextcolor(WHITE);//�r���C��
    settextstyle(40, 0, "�L�n������");//(�r��,�r�e(�w�]�H��X�ܤ�),"�r��(�n�t�Φ���)")
    outtextxy(350, 0, "�֭I��");//��X��r(��rx,��ry,"��r")
    putimagePNG(350, 100, res.im + 11);
    mouse(msg, main_scenes, cheater, &player_passlevel);//�ШD���а���
    return 0;
}
//*********************************************************
//���ں������d
int  internet_level(void)
{
    main_scenes = 7;//�]�m��e����(���ں�����7)
    setbkmode(TRANSPARENT);//�]�m��r�I���⬰�z��
    settextcolor(WHITE);//�r���C��
    settextstyle(40, 0, "�L�n������");//(�r��,�r�e(�w�]�H��X�ܤ�),"�r��(�n�t�Φ���)")
    outtextxy(350, 0, "�ɥN�ܤF");//��X��r(��rx,��ry,"��r")
    putimagePNG(350, 100, res.im + 14);
    mouse(msg, main_scenes, cheater, &player_passlevel);//�ШD���а���
    return 0;
}
//*********************************************************
//������d
int  information_level(void)
{
    main_scenes = 8;//�]�m��e����(��ɬ�8)
    setbkmode(TRANSPARENT);//�]�m��r�I���⬰�z��
    settextcolor(WHITE);//�r���C��
    settextstyle(40, 0, "�L�n������");//(�r��,�r�e(�w�]�H��X�ܤ�),"�r��(�n�t�Φ���)")
    outtextxy(350, 0, "�^��n�Ǧn");//��X��r(��rx,��ry,"��r")
    putimagePNG(350, 100, res.im + 17);
    mouse(msg, main_scenes, cheater, &player_passlevel);//�ШD���а���
    return 0;
}
//*********************************************************
//�^�����d
int  EN_level(void)
{
    main_scenes = 9;//�]�m��e����(�^�嬰9)
    setbkmode(TRANSPARENT);//�]�m��r�I���⬰�z��
    settextcolor(WHITE);//�r���C��
    settextstyle(40, 0, "�L�n������");//(�r��,�r�e(�w�]�H��X�ܤ�),"�r��(�n�t�Φ���)")
    outtextxy(350, 0, "understand?");//��X��r(��rx,��ry,"��r")
    putimagePNG(350, 100, res.im + 20);
    mouse(msg, main_scenes, cheater, &player_passlevel);//�ШD���а���
    return 0;
}
//*********************************************************
//�q�����d
int  General_Education_level(void)
{
    main_scenes = 10;//�]�m��e����(�q�Ѭ�10)
    setbkmode(TRANSPARENT);//�]�m��r�I���⬰�z��
    settextcolor(WHITE);//�r���C��
    settextstyle(40, 0, "�L�n������");//(�r��,�r�e(�w�]�H��X�ܤ�),"�r��(�n�t�Φ���)")
    outtextxy(350, 0, "�I�W �I�W �I�W");//��X��r(��rx,��ry,"��r")
    putimagePNG(350, 100, res.im + 23);
    mouse(msg, main_scenes, cheater, &player_passlevel);//�ШD���а���
    return 0;
}
//*********************************************************
//�{���]�p������d
int programming_Internship_level(void)
{
    main_scenes = 11;//�]�m��e����(�{���]�p��߬�11)
    setbkmode(TRANSPARENT);//�]�m��r�I���⬰�z��
    settextcolor(WHITE);//�r���C��
    settextstyle(40, 0, "�L�n������");//(�r��,�r�e(�w�]�H��X�ܤ�),"�r��(�n�t�Φ���)")
    outtextxy(350, 0, "�S�J���A�̷R��");//��X��r(��rx,��ry,"��r")
    putimagePNG(350, 100, res.im + 5);
    mouse(msg, main_scenes, cheater, &player_passlevel);//�ШD���а���
    return 0;
}
//********************************************************* 
//������d
int CH_level(void)
{
    main_scenes = 12;//�]�m��e����(��嬰12)
    setbkmode(TRANSPARENT);//�]�m��r�I���⬰�z��
    settextcolor(WHITE);//�r���C��
    settextstyle(40, 0, "�L�n������");//(�r��,�r�e(�w�]�H��X�ܤ�),"�r��(�n�t�Φ���)")
    outtextxy(350, 0, "���l�i��?");//��X��r(��rx,��ry,"��r")
    putimagePNG(350, 100, res.im + 26);
    mouse(msg, main_scenes, cheater, &player_passlevel);//�ШD���а���
    return 0;
}
//*********************************************************
//���|������d
int social_practice_level(void)
{
    main_scenes = 13;//�]�m��e����(���|��13)
    setbkmode(TRANSPARENT);//�]�m��r�I���⬰�z��
    settextcolor(WHITE);//�r���C��
    settextstyle(40, 0, "�L�n������");//(�r��,�r�e(�w�]�H��X�ܤ�),"�r��(�n�t�Φ���)")
    outtextxy(350, 0, "�X�����D�n��?");//��X��r(��rx,��ry,"��r")
    putimagePNG(350, 100, res.im + 29);
    mouse(msg, main_scenes, cheater, &player_passlevel);//�ШD���а���
    return 0;
}
//*********************************************************
//�ƾ����d
int math_level(void)
{
    main_scenes = 14;//�]�m��e����(�ƾǬ�14)
    setbkmode(TRANSPARENT);//�]�m��r�I���⬰�z��
    settextcolor(WHITE);//�r���C��
    settextstyle(40, 0, "�L�n������");//(�r��,�r�e(�w�]�H��X�ܤ�),"�r��(�n�t�Φ���)")
    outtextxy(350, 0, "�i���W,���n��");//��X��r(��rx,��ry,"��r")
    putimagePNG(350, 100, res.im + 32);
    mouse(msg, main_scenes, cheater, &player_passlevel);//�ШD���а���
    return 0;
}
//*********************************************************
//���2���d
int information2_level(void)
{
    main_scenes = 15;//�]�m��e����(���2��15)
    setbkmode(TRANSPARENT);//�]�m��r�I���⬰�z��
    settextcolor(WHITE);//�r���C��
    settextstyle(40, 0, "�L�n������");//(�r��,�r�e(�w�]�H��X�ܤ�),"�r��(�n�t�Φ���)")
    outtextxy(350, 0, "²���n���n");//��X��r(��rx,��ry,"��r")
    putimagePNG(350, 100, res.im + 17);
    mouse(msg, main_scenes, cheater, &player_passlevel);//�ШD���а���
    return 0;
}
//*********************************************************
//�p��2���d
int  calculator2_level(void)
{
    main_scenes = 16;//�]�m��e����(�p��2��16)
    setbkmode(TRANSPARENT);//�]�m��r�I���⬰�z��
    settextcolor(WHITE);//�r���C��
    settextstyle(40, 0, "�L�n������");//(�r��,�r�e(�w�]�H��X�ܤ�),"�r��(�n�t�Φ���)")
    outtextxy(350, 0, "�o�Ѥp��");//��X��r(��rx,��ry,"��r")
    putimagePNG(350, 100, res.im + 11);
    mouse(msg, main_scenes, cheater, &player_passlevel);//�ШD���а���
    return 0;
}
//*********************************************************
//�ƾ�2���d
int math2_level(void)
{
    main_scenes = 17;//�]�m��e����(�ƾ�2��17)
    setbkmode(TRANSPARENT);//�]�m��r�I���⬰�z��
    settextcolor(WHITE);//�r���C��
    settextstyle(40, 0, "�L�n������");//(�r��,�r�e(�w�]�H��X�ܤ�),"�r��(�n�t�Φ���)")
    outtextxy(350, 0, "�W���^�a");//��X��r(��rx,��ry,"��r")
    putimagePNG(350, 100, res.im + 32);
    mouse(msg, main_scenes, cheater, &player_passlevel);//�ШD���а���
    return 0;
}
//*********************************************************
//���������d
int final_exam_level(void)
{
    main_scenes = 18;//�]�m��e����(�����Ҭ�18)
    setbkmode(TRANSPARENT);//�]�m��r�I���⬰�z��
    settextcolor(WHITE);//�r���C��
    settextstyle(40, 0, "�L�n������");//(�r��,�r�e(�w�]�H��X�ܤ�),"�r��(�n�t�Φ���)")
    outtextxy(350, 0, "�������SŪ");//��X��r(��rx,��ry,"��r")
    putimagePNG(350, 100, res.im + 37);
    mouse(msg, main_scenes, cheater, &player_passlevel);//�ШD���а���
    return 0;
}
//*********************************************************
//win
int win(int me_HP)
{
    //�P�_�O�_��������
    if (main_scenes == 18)
    {
        if (me_HP == 800) { putimagePNG(0, 0, res.bg + 7); }//�ڤ躡���X100��
        else if (me_HP >= 400) { putimagePNG(0, 0, res.bg + 8); }//�ڤ�b���X80��
        else if (me_HP >= 100) { putimagePNG(0, 0, res.bg + 9); }//�ڤ�ݦ��X60��
    }
    else { putimagePNG(0, 0, res.bg + 3); }
    main_scenes = -1;
    mouse(msg, main_scenes, cheater, &player_passlevel);//�ШD���а���
    return 0;
}
//*********************************************************
//lose
int lose(void)
{
    //�P�_�O�_��������
    if (main_scenes == 18) { putimagePNG(0, 0, res.bg + 6); }
    else { putimagePNG(0, 0, res.bg + 4); }
    main_scenes = 1 - main_scenes;
    mouse(msg, main_scenes, cheater, &player_passlevel);//�ШD���а���
    return 0;
}
//*********************************************************
//<�ʵe��>
//�i�ױ��ʵe
int loading_animation(void)
{
    putimagePNG(0, 0, res.bg + 1);//��X�@�i�Ϥ�(�y��x,�y��y,�Ϥ��ܼƦW)
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
//*********************************************************
//�L���ʵe
int animation(int im_1,int im_2)
{
    BeginBatchDraw();//�Ы�ø�Ͻw�İ�(�S��ø�Ͻw�İϱN�ɭP�d�y)
    Sleep(1000);
    for (int j = 800, i = -400; i <= 0, j >= 400; i += 10, j -= 10)//�ʵe01(��)
    {
        putimagePNG(i, 0, res.im + im_1);//��X�@�i�Ϥ�(�y��x,�y��y,�Ϥ��ܼƦW)
        putimagePNG(j, 0, res.im + im_2);//��X�@�i�Ϥ�(�y��x,�y��y,�Ϥ��ܼƦW)
        Sleep(10);
        FlushBatchDraw();//��Xø�Ͻw�İ�
    }
    Sleep(500);
    for (int j = 400, i = 0; i >= -400, j <= 800; i -= 10, j += 10)//�ʵe02(�})
    {
        putimagePNG(0, 0, res.bg + 2);//��X�@�i�Ϥ�(�y��x,�y��y,�Ϥ��ܼƦW)
        attack_button_inital();//�����d����
        putimagePNG(i, 0, res.im + im_1);//��X�@�i�Ϥ�(�y��x,�y��y,�Ϥ��ܼƦW)
        putimagePNG(j, 0, res.im + im_2);//��X�@�i�Ϥ�(�y��x,�y��y,�Ϥ��ܼƦW)
        Sleep(10);
        FlushBatchDraw();//��Xø�Ͻw�İ�
    }
    EndBatchDraw();//����ø�Ͻw�İ�
    flushmessage();//�M�Ź��з�e�H���H���H���ɽ�
    return 0;
}
//*********************************************************
//��l�������s�e��
int attack_button_inital(void)
{
    putimagePNG(0, 0, res.bg + 2);//��X�@�i�Ϥ�(�y��x,�y��y,�Ϥ��ܼƦW)
    setbkmode(TRANSPARENT);//�]�m��r�I���⬰�z��

    setfillcolor(RED);//�]�m�x�ζ�R��
    fillroundrect(100, 50, 700, 60, 10, 10);//ø�s�ꨤ�x��(��,�W,�k,�U,��e,�갪)��q��

    setfillcolor(BLUE);//�]�m�x�ζ�R��
    fillroundrect(0, 285, 800, 295, 10, 10);//ø�s�ꨤ�x��(��,�W,�k,�U,��e,�갪)��q��

    setfillcolor(WHITE);//�]�m�x�ζ�R��
    fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)

    settextstyle(40, 0, "�L�n������");//(�r��,�r�e(�w�]�H��X�ܤ�),"�r��(�n�t�Φ���)")
    settextcolor(WHITE);//�r���C��
    setfillcolor(RGB(131, 139, 139));//�]�m�x�ζ�R��(�ϥ�RGB)
    fillroundrect(50, 525, 150, 575, 10, 10);//ø�s�ꨤ�x��(��,�W,�k,�U,��e,�갪)
    outtextxy(90, 530, "A");//��X��r(��rx,��ry,"��r")
    fillroundrect(250, 525, 350, 575, 10, 10);//ø�s�ꨤ�x��(��,�W,�k,�U,��e,�갪)
    outtextxy(290, 530, "B");//��X��r(��rx,��ry,"��r")
    fillroundrect(450, 525, 550, 575, 10, 10);//ø�s�ꨤ�x��(��,�W,�k,�U,��e,�갪)
    outtextxy(490, 530, "C");//��X��r(��rx,��ry,"��r")
    fillroundrect(650, 525, 750, 575, 10, 10);//ø�s�ꨤ�x��(��,�W,�k,�U,��e,�갪)
    outtextxy(690, 530, "D");//��X��r(��rx,��ry,"��r")
    return 0;
}
//*********************************************************
//<���s�ʵe��>
//�D�����s
int main_menu_button(ExMessage msg, int button_size)
{
    BeginBatchDraw();//�Ы�ø�Ͻw�İ�(�S��ø�Ͻw�İϱN�ɭP�d�y)
    if (msg.x >= 170 && msg.x <= 170 + (button_size * 92) +92  && msg.y >= 0 && msg.y <= 0 + 600)
    {
        main_menu_button_fillrectangle_size(button_size);//�]�w���զ�x�ξB��d��,��֦�ƥ�
        if(msg.x >= 170 && msg.x <= 170 + 92 && msg.y >= 0 && msg.y <= 0 + 600){ main_menu_button_redframe_size(0); }//�]�w������
        else if (msg.x >= 262 && msg.x <= 262 + 92 && msg.y >= 0 && msg.y <= 0 + 600) { main_menu_button_redframe_size(1); }//�]�w������
        else if (msg.x >= 354 && msg.x <= 354 + 92 && msg.y >= 0 && msg.y <= 0 + 600) { main_menu_button_redframe_size(2); }//�]�w������
        else if (msg.x >= 446 && msg.x <= 446 + 92 && msg.y >= 0 && msg.y <= 0 + 600) { main_menu_button_redframe_size(3); }//�]�w������
        else if (msg.x >= 538 && msg.x <= 538 + 92 && msg.y >= 0 && msg.y <= 0 + 600) { main_menu_button_redframe_size(4); }//�]�w������
        FlushBatchDraw();//��Xø�Ͻw�İ�
    }
    else
    {
        main_menu_button_fillrectangle_size(button_size);//�]�w���զ�x�ξB��d��,��֦�ƥ�
        FlushBatchDraw();//��Xø�Ͻw�İ�
    }
    EndBatchDraw();//����ø�Ͻw�İ�
    return 0;
}
//*********************************************************
//�����ҫ��s
int final_exam_button(ExMessage msg)
{
    if (msg.x >= 640 && msg.x <= 640 + 150 && msg.y >= 290 && msg.y <= 300 + 200)
    {
        putimagePNG(640, 0, res.im + 34);
    }
    else
    {
        putimagePNG(640, 0, res.im + 33);
    }
    return 0;
}
//*********************************************************
//�����ҳq�L�m�J
int flashing_animation(ExMessage msg)
{
    BeginBatchDraw();//�Ы�ø�Ͻw�İ�(�S��ø�Ͻw�İϱN�ɭP�d�y)
    putimagePNG(msg.x-25, msg.y-25, &flashing);
    FlushBatchDraw();//��Xø�Ͻw�İ�
    EndBatchDraw();//����ø�Ͻw�İ�
    return 0;
}
//*********************************************************
//�]�w���զ�x�ξB��d��,��֦�ƥ�
int main_menu_button_fillrectangle_size(int fillrectangle_size)
{
    if (fillrectangle_size >= 4) { fillrectangle_size = 4; }
    putimagePNG(170, 0, &curriculum);//��X�@�i�Ϥ�(�y��x,�y��y,�Ϥ��ܼƦW)
    setfillcolor(WHITE);//�]�m�x�ζ�R��
    fillrectangle(257 + fillrectangle_size * 92, 0, 630, 600);//ø�s�x��(��,�W,�k,�U)
    return 0;
}
//*********************************************************
//�]�w������,��֦�ƥ�
int main_menu_button_redframe_size(int redframe_size)
{
    setfillcolor(RED);//�]�m�x�ζ�R��
    fillrectangle(170 +redframe_size * 92, 0, 175 + redframe_size * 92, 600);//ø�s�x��(��,�W,�k,�U)
    fillrectangle(257 + redframe_size * 92, 0, 262 + redframe_size * 92, 600);//ø�s�x��(��,�W,�k,�U)
    fillrectangle(170 + redframe_size * 92, 0, 262 + redframe_size * 92, 5);//ø�s�x��(��,�W,�k,�U)
    fillrectangle(170 + redframe_size * 92, 595, 262 + redframe_size * 92, 600);//ø�s�x��(��,�W,�k,�U)
    return 0;
}
//*********************************************************