#include"function.h"

int enemy_HP = 0, me_HP = 0, me_a = 0, enemy_a = 0;
int answer = 0, beat_enemy_number=0;

//************************************************************************
//<���s>
//�B�z���ЫH��
int mouse(ExMessage msg, int main_scenes,int cheater, int* player_passlevel)
{
    //���_������з�e�H��
    while (1) 
    {
        //peek�����s,���s�@�U���з�e�ϧ_���ާ@,�H���H���ᥢ
        if (peekmessage(&msg, EM_MOUSE)) 
        {
            //<�[�����s�ϥ�>
            //�������s&�n�X���s
            if (main_scenes == 0) { front_page_button(msg); Sign_out_button(msg); }
            //�D�����s&��^�������s&�����ҫ��s
            else if (main_scenes == 2) { main_menu_button(msg, *player_passlevel); main_menu_front_button(msg); if (*player_passlevel >= 5) { final_exam_button(msg); } }
            //�������s
            else if (main_scenes >= 3) { attack_button(msg); }
            //WIN���s
            else if (main_scenes == -1) { win_confirm_button(msg); }
            //LOSE���s
            else if (main_scenes <= -2) { lose_confirm_button(msg); }
            //<�����I����>
            switch (msg.message)
            {
             //<�����I������>
            case WM_LBUTTONDOWN:
                //��l�@��
                if (main_scenes == 1)
                {
                    loading_animation();//�i�ױ��ʵe
                    main_menu();//�D���
                }
                //�������s&�T�{���s
                else if (msg.x >= 250 && msg.x <= 250 + 300 && msg.y >= 400 && msg.y <= 400 + 50 )
                {
                    if (main_scenes == 0){loading_animation();/*�i�ױ��ʵe*/ inital_plot();/*��l�@��*/ }
                    else if (main_scenes == -1 || main_scenes <= -2){main_menu();/*�D���*/ }
                }
                //�b�դ@�����s
                else if (msg.x >= 250 && msg.x <= 250 + 300 && msg.y >= 300 && msg.y <= 300 + 50)
                {
                    //��l��linux���d
                    if (main_scenes == -2)
                    {
                        animation(0,1);//linux�ʵe
                        enemy_HP = 600;//��l�����d�ƾ�
                        me_HP = 800;//��l�����d�ƾ�
                        me_a = 120;//��l�����d�ƾ�
                        enemy_a = 100;//��l�����d�ƾ�
                        attack_button_inital();//������l��
                        answer = linux_question();//linux�H���D�w
                        if (cheater == 1) { system("cls"); printf("%d", answer); }//�Y�n�J�b�����@���b��,��ܵ���
                        linux_level(); //linux���d
                    }
                    //��l�Ƶ{���]�p���d
                    else if (main_scenes <= -3 && main_scenes >= -5)
                    {
                        animation(3, 4);//�{���]�p�ʵe
                        enemy_HP = 600;//��l�����d�ƾ�
                        me_HP = 800;//��l�����d�ƾ�
                        me_a = 120;//��l�����d�ƾ�
                        enemy_a = 100;//��l�����d�ƾ�
                        beat_enemy_number = 0;//��l�����d�ƾ�
                        attack_button_inital();//������l��
                        answer = programming_question();//�{���]�p�H���D�w
                        if (cheater == 1) { system("cls"); printf("%d", answer); }//�Y�n�J�b�����@���b��,��ܵ���
                        programming_level();//�{���]�p���d
                    }
                    //��l�ƺ��ں������d
                    else if (main_scenes <= -6 && main_scenes >= -9)
                    {
                        animation(12,13);//���ں����ʵe
                        enemy_HP = 600;//��l�����d�ƾ�
                        me_HP = 800;//��l�����d�ƾ�
                        me_a = 120;//��l�����d�ƾ�
                        enemy_a = 100;//��l�����d�ƾ�
                        beat_enemy_number = 0;//��l�����d�ƾ�
                        attack_button_inital();//������l��
                        answer = internet_question();//���ں����H���D�w
                        if (cheater == 1) { system("cls"); printf("%d", answer); }//�Y�n�J�b�����@���b��,��ܵ���
                        internet_level();//���ں������d
                    }
                    //��l�Ƶ{���]�p������d
                    else if (main_scenes <= -10 && main_scenes >= -12)
                    {
                        animation(3, 4);//�{���]�p��߰ʵe
                        enemy_HP = 600;//��l�����d�ƾ�
                        me_HP = 800;//��l�����d�ƾ�
                        me_a = 120;//��l�����d�ƾ�
                        enemy_a = 100;//��l�����d�ƾ�
                        beat_enemy_number = 0;//��l�����d�ƾ�
                        attack_button_inital();//������l��
                        answer = programming_question();//�{���]�p����H���D�w
                        if (cheater == 1) { system("cls"); printf("%d", answer); }//�Y�n�J�b�����@���b��,��ܵ���
                        programming_Internship_level();//�{���]�p������d
                    }
                    //��l�Ƽƾ����d
                    else if (main_scenes <= -13 && main_scenes >= -16)
                    {
                        animation(30, 31);//�ƾǰʵe
                        enemy_HP = 600;//��l�����d�ƾ�
                        me_HP = 800;//��l�����d�ƾ�
                        me_a = 120;//��l�����d�ƾ�
                        enemy_a = 100;//��l�����d�ƾ�
                        beat_enemy_number = 0;//��l�����d�ƾ�
                        attack_button_inital();//������l��
                        answer = math_question();//�H���ƾ��D�w
                        if (cheater == 1) { system("cls"); printf("%d", answer); }//�Y�n�J�b�����@���b��,��ܵ���
                        math_level();//�ƾ����d
                    }
                    //��l�ƴ��������d
                    else if (main_scenes == -17)
                    {
                        animation(35, 36);//�����Ұʵe
                        enemy_HP = 600;//��l�����d�ƾ�
                        me_HP = 800;//��l�����d�ƾ�
                        me_a = 30;//��l�����d�ƾ�
                        enemy_a = 100;//��l�����d�ƾ�
                        attack_button_inital();//������l��
                        final_exam_question();
                        if (cheater == 1) { system("cls"); printf("%d", answer); }//�Y�n�J�b�����@���b��,��ܵ���
                        final_exam_level();//���������d
                    }
                }
                //��l�ƴ�����
                else if (msg.x >= 640 && msg.x <= 640 + 150 && msg.y >= 290 && msg.y <= 300 + 200 && *player_passlevel >= 5 && main_scenes == 2)
                {
                    animation(35, 36);//�����Ұʵe
                    enemy_HP = 600;//��l�����d�ƾ�
                    me_HP = 800;//��l�����d�ƾ�
                    me_a = 30;//��l�����d�ƾ�
                    enemy_a = 100;//��l�����d�ƾ�
                    attack_button_inital();//������l��
                    final_exam_question();//�������H���D�w
                    if (cheater == 1) { system("cls"); printf("%d", answer); }//�Y�n�J�b�����@���b��,��ܵ���
                    final_exam_level();//���������d
                }
                //��^����&�n�X
                else if (msg.x >= 10 && msg.x <= 100 + 100 && msg.y >= 10 && msg.y <= 10 + 50)
                {
                    if (main_scenes == 2){ loading_animation();/*�i�ױ��ʵe*/front_page(); }
                    else if (main_scenes == 0) { loading_animation();/*�i�ױ��ʵe*/ main(); }
                }
                //�����s
                if (main_scenes == 2)
                {
                    //��l�ƬP���@
                    if (msg.x >= 170 && msg.x <= 170 + 92 && msg.y >= 0 && msg.y <= 0 + 600 && *player_passlevel >= 0)
                    {
                        animation(0,1);//linux�ʵe
                        enemy_HP = 600;//��l�����d�ƾ�
                        me_HP = 800;//��l�����d�ƾ�
                        me_a = 120;//��l�����d�ƾ�
                        enemy_a = 100;//��l�����d�ƾ�
                        attack_button_inital();//������l��
                        answer = linux_question();//linux�H���D�w
                        if (cheater == 1) { system("cls"); printf("%d", answer); }//�Y�n�J�b�����@���b��,��ܵ���
                        linux_level();//linux���d
                    }
                    //��l�ƬP���G
                    else if (msg.x >= 262 && msg.x <= 262 + 92 && msg.y >= 0 && msg.y <= 0 + 600 && *player_passlevel >= 1)//��l�Ƶ{���]�p���d
                    {
                        animation(3, 4);//�{���]�p�ʵe
                        enemy_HP = 600;//��l�����d�ƾ�
                        me_HP = 800;//��l�����d�ƾ�
                        me_a = 120;//��l�����d�ƾ�
                        enemy_a = 100;//��l�����d�ƾ�
                        beat_enemy_number = 0;//��l�����d�ƾ�
                        attack_button_inital();//������l��
                        answer = programming_question();//�{���]�p�H���D�w
                        if (cheater == 1) { system("cls"); printf("%d", answer); }//�Y�n�J�b�����@���b��,��ܵ���
                        programming_level();//�{���]�p���d
                    }
                    //��l�ƬP���T
                    else if (msg.x >= 354 && msg.x <= 354 + 92 && msg.y >= 0 && msg.y <= 0 + 600 && *player_passlevel >= 2)
                    {
                        animation(12, 13);//�ĤT�Ѱʵe
                        enemy_HP = 600;//��l�����d�ƾ�
                        me_HP = 800;//��l�����d�ƾ�
                        me_a = 120;//��l�����d�ƾ�
                        enemy_a = 100;//��l�����d�ƾ�
                        beat_enemy_number = 0;//��l�����d�ƾ�
                        attack_button_inital();//������l��
                        answer = internet_question();//�{���]�p�H���D�w
                        if (cheater == 1) { system("cls"); printf("%d", answer); }//�Y�n�J�b�����@���b��,��ܵ���
                        internet_level();//���ں������d
                    }
                    //��l�ƬP���|
                    else if (msg.x >= 446 && msg.x <= 446 + 92 && msg.y >= 0 && msg.y <= 0 + 600 && *player_passlevel >= 3)
                    {
                        animation(3, 4);//�{���]�p�ʵe
                        enemy_HP = 600;//��l�����d�ƾ�
                        me_HP = 800;//��l�����d�ƾ�
                        me_a = 120;//��l�����d�ƾ�
                        enemy_a = 100;//��l�����d�ƾ�
                        beat_enemy_number = 0;//��l�����d�ƾ�
                        attack_button_inital();//������l��
                        answer = programming_question();//�{���]�p�H���D�w
                        if (cheater == 1) { system("cls"); printf("%d", answer); }//�Y�n�J�b�����@���b��,��ܵ���
                        programming_Internship_level();//�{���]�p�о����d
                    }
                    //��l�ƬP����
                    else if (msg.x >= 538 && msg.x <= 538 + 92 && msg.y >= 0 && msg.y <= 0 + 600 && *player_passlevel >= 4)
                    {
                        animation(30, 31);//�ƾǰʵe
                        enemy_HP = 600;//��l�����d�ƾ�
                        me_HP = 800;//��l�����d�ƾ�
                        me_a = 120;//��l�����d�ƾ�
                        enemy_a = 100;//��l�����d�ƾ�
                        beat_enemy_number = 0;//��l�����d�ƾ�
                        attack_button_inital();//������l��
                        answer = math_question();//�ƾ��H���D�w
                        if (cheater == 1) { system("cls"); printf("%d", answer); }//�Y�n�J�b�����@���b��,��ܵ���
                        math_level();//�ƾ����d
                    }
                }
                //�������sA
                else if (msg.x >= 50 && msg.x <= 50 + 100 && msg.y >= 525 && msg.y <= 525 + 50 && main_scenes >= 3 && main_scenes <= 18)
                {
                    answer == 1 ? me_attack() : enemy_attack();//��������ˮ`�ü��񦩦�ʵe
                    level_ABCD_button(main_scenes, cheater, player_passlevel);//�P�_�O�_���
                }
                //�������sB
                else if (msg.x >= 250 && msg.x <= 250 + 100 && msg.y >= 525 && msg.y <= 525 + 50 && main_scenes >= 3 && main_scenes <= 18)
                {
                answer == 2 ? me_attack() : enemy_attack();//��������ˮ`�ü��񦩦�ʵe
                level_ABCD_button(main_scenes, cheater, player_passlevel);//�P�_�O�_���
                }
                //�������sC
                else if (msg.x >= 450 && msg.x <= 450 + 100 && msg.y >= 525 && msg.y <= 525+ 50 && main_scenes >= 3 && main_scenes <= 18)//�������sC
                {
                answer == 3 ? me_attack() : enemy_attack();//��������ˮ`�ü��񦩦�ʵe
                level_ABCD_button(main_scenes, cheater, player_passlevel);//�P�_�O�_���
                }
                //�������sD
                else if (msg.x >= 650 && msg.x <= 650 + 100 && msg.y >= 525 && msg.y <= 525 + 50 && main_scenes >= 3 && main_scenes <= 18)
                {
                answer == 4 ? me_attack() : enemy_attack();//��������ˮ`�ü��񦩦�ʵe
                level_ABCD_button(main_scenes, cheater, player_passlevel);//�P�_�O�_���
                }
                break;
            default:
                break;
            }
        }
    }
    return 0;
}
//************************************************************************
//�P�_�O�_�ӧQ
int level_ABCD_button(int main_scenes, int cheater, int* player_passlevel)
{
    //�P���@
    if (main_scenes == 3)
    {
        if (enemy_HP <= 0) { if (*player_passlevel == 0) { ++(*player_passlevel); save_player_passlevel(); } win(me_HP); }//�즸��ӼW�[�q���N,�Ĥ��q���s�ɥ���
        else if (me_HP <= 0) { lose(); }//��ڤ��q���s�ɥ���
        answer = linux_question();//�H��linux�D�w
        if (cheater == 1) { system("cls"); printf("%d", answer); }//�Y�n�J�b�����@���b��,��ܵ���
    }
    //�P���G
    else if (main_scenes >= 4 && main_scenes <= 6)
    {
        if (enemy_HP <= 0) {
            beat_enemy_number++;//�i�J�U�@���q
            //��l����|���d�ƾ�
            if (beat_enemy_number == 1)
            {
                animation(6,7);//��|�ʵe
                enemy_HP = 600;//��l�����d�ƾ�
                me_HP = 800;//��l�����d�ƾ�
                me_a = 120;//��l�����d�ƾ�
                enemy_a = 100;//��l�����d�ƾ�
                attack_button_inital();//������l��
                answer = PE_question();//��|�H���D�w
                if (cheater == 1) { system("cls"); printf("%d", answer); }//�Y�n�J�b�����@���b��,��ܵ���
                PE_level();//��|���d
            }
            //��l�ƭp�����d�ƾ�
            else if (beat_enemy_number == 2)
            {
                animation(9, 10);//�p���ʵe
                enemy_HP = 600;//��l�����d�ƾ�
                me_HP = 800;//��l�����d�ƾ�
                me_a = 120;//��l�����d�ƾ�
                enemy_a = 100;//��l�����d�ƾ�
                attack_button_inital();//������l��
                answer = calculator_question();//�p���H���D�w
                if (cheater == 1) { system("cls"); printf("%d", answer); }//�Y�n�J�b�����@���b��,��ܵ���
                calculator_level();//�p�����d
            }
            //�sĹ�T�p�����
            else if (beat_enemy_number == 3) { if (*player_passlevel == 1) { ++(*player_passlevel); save_player_passlevel(); } win(me_HP); }//�즸��ӼW�[�q���N,�Ĥ��q���s�ɥ���
        }//��Ĥ��q���s�����
        else if (me_HP <= 0) { lose(); }//��ڤ��q���s�ɥ���
        if (beat_enemy_number == 0) { answer = programming_question(); if (cheater == 1) { system("cls"); printf("%d", answer); } }
        else if (beat_enemy_number == 1) { answer = PE_question(); if (cheater == 1) { system("cls"); printf("%d", answer); } }
        else if (beat_enemy_number == 2) { answer = calculator_question(); if (cheater == 1) { system("cls"); printf("%d", answer); } }
    }
    //�P���T
    else if (main_scenes >= 7 && main_scenes <= 10)
    {
        if (enemy_HP <= 0) {
            beat_enemy_number++;//�i�J�U�@���q
            //��l�����d�ƾ�
            if (beat_enemy_number == 1)
            {
                animation(15,16);//��ɰʵe
                enemy_HP = 600;//��l�����d�ƾ�
                me_HP = 800;//��l�����d�ƾ�
                me_a = 120;//��l�����d�ƾ�
                enemy_a = 100;//��l�����d�ƾ�
                attack_button_inital();//������l��
                answer = information_question();//�H���D�w
                if (cheater == 1) { system("cls"); printf("%d", answer); }//�Y�n�J�b�����@���b��,��ܵ���
                information_level();//��l���d
            }
            //��l�����d�ƾ�
            else if (beat_enemy_number == 2)
            {
                animation(18,19);//�^��ʵe
                enemy_HP = 600;//��l�����d�ƾ�
                me_HP = 800;//��l�����d�ƾ�
                me_a = 120;//��l�����d�ƾ�
                enemy_a = 100;//��l�����d�ƾ�
                attack_button_inital();//������l��
                answer = EN_question();//�^���H���D�w
                if (cheater == 1) { system("cls"); printf("%d", answer); }//�Y�n�J�b�����@���b��,��ܵ���
                EN_level();//��l���d
            }
            //��l�����d�ƾ�
            else if (beat_enemy_number == 3)
            {
                animation(21, 22);//�q�Ѱʵe
                enemy_HP = 600;//��l�����d�ƾ�
                me_HP = 800;//��l�����d�ƾ�
                me_a = 120;//��l�����d�ƾ�
                enemy_a = 100;//��l�����d�ƾ�
                attack_button_inital();//������l��
                answer = General_Education_question(); //�q���H���D�w
                if (cheater == 1) { system("cls"); printf("%d", answer); }//�Y�n�J�b�����@���b��,��ܵ���
                General_Education_level();//��l���d
            }
            //�sĹ�|�p�����
            else if (beat_enemy_number == 4) { if (*player_passlevel == 2) { ++(*player_passlevel); save_player_passlevel(); } win(me_HP); }//�즸��ӼW�[�q���N,�Ĥ��q���s�ɥ���
        }//��Ĥ��q���s�����
        else if (me_HP <= 0) { lose(); }//��ڤ��q���s�ɥ���
        if (beat_enemy_number == 0) { answer = internet_question(); if (cheater == 1) { system("cls"); printf("%d", answer); } }
        else if (beat_enemy_number == 1) { answer = information_question(); if (cheater == 1) { system("cls"); printf("%d", answer); } }
        else if (beat_enemy_number == 2) { answer = EN_question(); if (cheater == 1) { system("cls"); printf("%d", answer); } }
        else if (beat_enemy_number == 3) { { answer = General_Education_question(); if (cheater == 1) { system("cls"); printf("%d", answer); } }
        }
    }
    //�P���|
    else if (main_scenes >= 11 && main_scenes <= 13)
    {
    if (enemy_HP <= 0) {
        beat_enemy_number++;//�i�J�U�@���q
        //��l�ư�����d�ƾ�
        if (beat_enemy_number == 1)
        {
            animation(24, 25);//���ʵe
            enemy_HP = 600;//��l�����d�ƾ�
            me_HP = 800;//��l�����d�ƾ�
            me_a = 120;//��l�����d�ƾ�
            enemy_a = 100;//��l�����d�ƾ�
            attack_button_inital();//������l��
            answer = CH_question();//����H���D�w
            if (cheater == 1) { system("cls"); printf("%d", answer); }//�Y�n�J�b�����@���b��,��ܵ���
            CH_level();//��l���d
        }
        //��l�ƪ��|������d�ƾ�
        else if (beat_enemy_number == 2)
        {
            animation(27, 28);//�ʵe
            enemy_HP = 600;//��l�����d�ƾ�
            me_HP = 800;//��l�����d�ƾ�
            me_a = 120;//��l�����d�ƾ�
            enemy_a = 100;//��l�����d�ƾ�
            attack_button_inital();//������l��
            answer = social_practice_question();//���|����H���D�w
            if (cheater == 1) { system("cls"); printf("%d", answer); }//�Y�n�J�b�����@���b��,��ܵ���
            social_practice_level();//��l���d
        }
        //�sĹ�T�p�����
        else if (beat_enemy_number == 3) { if (*player_passlevel == 3) { ++(*player_passlevel); save_player_passlevel(); } win(me_HP); }//�즸��ӼW�[�q���N,�Ĥ��q���s�ɥ���
    }//��Ĥ��q���s�����
    else if (me_HP <= 0) { lose(); }//��ڤ��q���s�ɥ���
    if (beat_enemy_number == 0) { answer = programming_question(); if (cheater == 1) { system("cls"); printf("%d", answer); } }
    else if (beat_enemy_number == 1) { answer = CH_question(); if (cheater == 1) { system("cls"); printf("%d", answer); } }
    else if (beat_enemy_number == 2) { answer = social_practice_question(); if (cheater == 1) { system("cls"); printf("%d", answer); } }
    }
    //�P����
    else if (main_scenes >= 14 && main_scenes <= 17)
    {
    if (enemy_HP <= 0) {
        beat_enemy_number++;//�i�J�U�@���q
        //��l�����d�ƾ�
        if (beat_enemy_number == 1)
        {
            animation(15, 16);//��ɰʵe
            enemy_HP = 600;//��l�����d�ƾ�
            me_HP = 800;//��l�����d�ƾ�
            me_a = 120;//��l�����d�ƾ�
            enemy_a = 100;//��l�����d�ƾ�
            attack_button_inital();//������l��
            answer = information_question();//����H���D�w
            if (cheater == 1) { system("cls"); printf("%d", answer); }//�Y�n�J�b�����@���b��,��ܵ���
            information2_level();//��l���d
        }
        //��l�����d�ƾ�
        else if (beat_enemy_number == 2)
        {
            animation(9, 10);//�p���ʵe
            enemy_HP = 600;//��l�����d�ƾ�
            me_HP = 800;//��l�����d�ƾ�
            me_a = 60;//��l�����d�ƾ�
            me_a = 120;//��l�����d�ƾ�
            attack_button_inital();//������l��
            answer = calculator_question();//�p���H���D�w
            if (cheater == 1) { system("cls"); printf("%d", answer); }//�Y�n�J�b�����@���b��,��ܵ���
            calculator2_level();//��l���d
        }
        //��l�����d�ƾ�
        else if (beat_enemy_number == 3)
        {
            animation(30, 31);//�ʵe
            enemy_HP = 600;//��l�����d�ƾ�
            me_HP = 800;//��l�����d�ƾ�
            me_a = 60;//��l�����d�ƾ�
            me_a = 120;//��l�����d�ƾ�
            attack_button_inital();//������l��
            answer = math_question();//�H���D�w
            if (cheater == 1) { system("cls"); printf("%d", answer); }//�Y�n�J�b�����@���b��,��ܵ���
            math2_level();//��l�о�
        }
        //�sĹ�|�p�����
        else if (beat_enemy_number == 4) { if (*player_passlevel == 4) { ++(*player_passlevel); save_player_passlevel(); } win(me_HP); }//�즸��ӼW�[�q���N
    }//��Ĥ��q���s�����
    else if (me_HP <= 0) { lose(); }//��ڤ��q���s�ɥ���
    if (beat_enemy_number == 0) { answer = math_question(); if (cheater == 1) { system("cls"); printf("%d", answer); } }
    else if (beat_enemy_number == 1) { answer = information_question(); if (cheater == 1) { system("cls"); printf("%d", answer); } }
    else if (beat_enemy_number == 2) { answer = calculator_question(); if (cheater == 1) { system("cls"); printf("%d", answer); } }
    else if (beat_enemy_number == 3) { { answer = math_question(); if (cheater == 1) { system("cls"); printf("%d", answer); } }
    }
    }
    //������
    else if (main_scenes == 18)
    {
    if (enemy_HP <= 0) { if (*player_passlevel == 5) { ++(*player_passlevel); save_player_passlevel(); } win(me_HP); }//�즸��ӼW�[�q���N,�Ĥ��q���s�ɥ���
    else if (me_HP <= 0) { lose(); }//��ڤ��q���s�ɥ���
    final_exam_question();//�H���������D�w
    if (cheater == 1) { system("cls"); printf("%d", answer); }//�Y�n�J�b�����@���b��,��ܵ���
    }
    return 0;
}
//************************************************************************
//�������D�w
int final_exam_question(void)
{
    srand((unsigned)time(NULL));
    switch (rand() % 11 + 1)
    {
    case 1:
        answer = linux_question(); break;
    case 2:
        answer = programming_question(); break;
    case 3:
        answer = PE_question(); break;
    case 4:
        answer = calculator_question(); break;
    case 5:
        answer = internet_question(); break;
    case 6:
        answer = information_question(); break;
    case 7:
        answer = EN_question(); break;
    case 8:
        answer = General_Education_question(); break;
    case 9:
        answer = CH_question(); break;
    case 10:
        answer = social_practice_question(); break;
    case 11:
        answer = math_question(); break;
    }
    return 0;
}
//************************************************************************
//<���s�ʵe��>
//�������s
int front_page_button(ExMessage msg)
{
    setbkmode(TRANSPARENT);//�]�m��r�I���⬰�z��
    settextstyle(40, 0, "�L�n������");//(�r��,�r�e(�w�]�H��X�ܤ�),"�r��(�n�t�Φ���)")
    settextcolor(WHITE);//�r���C��
    BeginBatchDraw();//�Ы�ø�Ͻw�İ�(�S��ø�Ͻw�İϱN�ɭP�d�y)
    if (msg.x >= 250 && msg.x <= 250 + 300 && msg.y >= 400 && msg.y <= 400 + 50)
    {
        setfillcolor(RGB(193, 205, 205));//�]�m�x�ζ�R��(�ϥ�RGB)
        fillroundrect(250, 400, 550, 450, 10, 10);//ø�s�ꨤ�x��(��,�W,�k,�U,��e,�갪)
        outtextxy(330, 405, "�}�l�C��");//��X��r(��rx,��ry,"��r")
        FlushBatchDraw();//��Xø�Ͻw�İ�
    }
    else
    {
        setfillcolor(RGB(131, 139, 139));//�]�m�x�ζ�R��(�ϥ�RGB)
        fillroundrect(250, 400, 550, 450, 10, 10);//ø�s�ꨤ�x��(��,�W,�k,�U,��e,�갪)
        outtextxy(330, 405, "�}�l�C��");//��X��r(��rx,��ry,"��r")
        FlushBatchDraw();//��Xø�Ͻw�İ�
    }
    EndBatchDraw();//����ø�Ͻw�İ�
    return 0;
}
//************************************************************************
//�������s
int attack_button(ExMessage msg)
{
    setbkmode(TRANSPARENT);//�]�m��r�I���⬰�z��
    settextstyle(40, 0, "�L�n������");//(�r��,�r�e(�w�]�H��X�ܤ�),"�r��(�n�t�Φ���)")
    settextcolor(WHITE);//�r���C��
    BeginBatchDraw();//�Ы�ø�Ͻw�İ�(�S��ø�Ͻw�İϱN�ɭP�d�y)
    setfillcolor(RGB(193, 205, 205));//�]�m�x�ζ�R��(�ϥ�RGB)
    if (msg.x >= 50 && msg.x <= 50 + 100 && msg.y >= 500 && msg.y <= 500 + 50)
    {
        fillroundrect(50, 525, 150, 575, 10, 10);//ø�s�ꨤ�x��(��,�W,�k,�U,��e,�갪)
        outtextxy(90, 530, "A");//��X��r(��rx,��ry,"��r")
        FlushBatchDraw();//��Xø�Ͻw�İ�
    }
    else if (msg.x >= 250 && msg.x <= 250 + 100 && msg.y >= 500 && msg.y <= 500 + 50)
    {
        fillroundrect(250, 525, 350, 575, 10, 10);//ø�s�ꨤ�x��(��,�W,�k,�U,��e,�갪)
        outtextxy(290, 530, "B");//��X��r(��rx,��ry,"��r")
        FlushBatchDraw();//��Xø�Ͻw�İ�
    }
    else if (msg.x >= 450 && msg.x <= 450 + 100 && msg.y >= 500 && msg.y <= 500 + 50)
    {
        fillroundrect(450, 525, 550, 575, 10, 10);//ø�s�ꨤ�x��(��,�W,�k,�U,��e,�갪)
        outtextxy(490, 530, "C");//��X��r(��rx,��ry,"��r")
        FlushBatchDraw();//��Xø�Ͻw�İ�
    }
    else if (msg.x >= 650 && msg.x <= 650 + 100 && msg.y >= 500 && msg.y <= 500 + 50)
    {
        fillroundrect(650, 525, 750, 575, 10, 10);//ø�s�ꨤ�x��(��,�W,�k,�U,��e,�갪)
        outtextxy(690, 530, "D");//��X��r(��rx,��ry,"��r")
        FlushBatchDraw();//��Xø�Ͻw�İ�
    }
    else
    {
        setfillcolor(RGB(131, 139, 139));//�]�m�x�ζ�R��(�ϥ�RGB)
        fillroundrect(50, 525, 150, 575, 10, 10);//ø�s�ꨤ�x��(��,�W,�k,�U,��e,�갪)
        outtextxy(90, 530, "A");//��X��r(��rx,��ry,"��r")
        fillroundrect(250, 525, 350, 575, 10, 10);//ø�s�ꨤ�x��(��,�W,�k,�U,��e,�갪)
        outtextxy(290, 530, "B");//��X��r(��rx,��ry,"��r")
        fillroundrect(450, 525, 550, 575, 10, 10);//ø�s�ꨤ�x��(��,�W,�k,�U,��e,�갪)
        outtextxy(490, 530, "C");//��X��r(��rx,��ry,"��r")
        fillroundrect(650, 525, 750, 575, 10, 10);//ø�s�ꨤ�x��(��,�W,�k,�U,��e,�갪)
        outtextxy(690, 530, "D");//��X��r(��rx,��ry,"��r")
        FlushBatchDraw();//��Xø�Ͻw�İ�
    }
    EndBatchDraw();//����ø�Ͻw�İ�
    return 0;
}
//************************************************************************
//<����U���ƾ�,�ü������ʵe>
//�ڤ����
int me_attack(void)
{
    int save_me_a = 0;
    if (rand() % 100 + 1 <= 50) { save_me_a = me_a*2; }//�Y�����h�����O*2
    else { save_me_a = me_a; }//���Y�����h����
    BeginBatchDraw();//�Ы�ø�Ͻw�İ�(�S��ø�Ͻw�İϱN�ɭP�d�y)
    for (int i = enemy_HP;i >= enemy_HP - save_me_a;i --)
    {
        if (i < 0) { break; }//���������t
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillroundrect(100, 50, 700, 60, 10, 10);//ø�s�ꨤ�x��(��,�W,�k,�U,��e,�갪)��q��
        setfillcolor(RED);//�]�m�x�ζ�R��
        fillroundrect(100, 50, 100+i, 60, 10, 10);//ø�s�ꨤ�x��(��,�W,�k,�U,��e,�갪)��q��
        Sleep(10);
        FlushBatchDraw();//��Xø�Ͻw�İ�
    }
    EndBatchDraw();//����ø�Ͻw�İ�
    enemy_HP -= save_me_a;//����Ĥ��q
    flushmessage();//�M�Ź��з�e�H���H���H���ɽ�
    return 0;
}
//************************************************************************
//�Ĥ����
int enemy_attack(void)
{
    int save_enemy_a = 0;
    if (rand() % 100 + 1 <= 50) { save_enemy_a = enemy_a * 2; }//�Y�����h�����O*2
    else { save_enemy_a = enemy_a; }//���Y�����h����
    BeginBatchDraw();//�Ы�ø�Ͻw�İ�(�S��ø�Ͻw�İϱN�ɭP�d�y)
    for (int i = me_HP;i >= me_HP - save_enemy_a;i--)
    {
        if (i < 0) { break; }//���������t
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillroundrect(0, 285, 800, 295, 10, 10);//ø�s�ꨤ�x��(��,�W,�k,�U,��e,�갪)��q��
        setfillcolor(BLUE);//�]�m�x�ζ�R��
        fillroundrect(0, 285, 0+i, 295, 10, 10);//ø�s�ꨤ�x��(��,�W,�k,�U,��e,�갪)��q��
        Sleep(10);
        FlushBatchDraw();//��Xø�Ͻw�İ�
    }
    EndBatchDraw();//����ø�Ͻw�İ�
    me_HP -= save_enemy_a;//����ڤ��q
    flushmessage();//�M�Ź��з�e�H���H���H���ɽ�
    return 0;
}
//************************************************************************
//win�T�w���s
int win_confirm_button(ExMessage msg)
{
    setbkmode(TRANSPARENT);//�]�m��r�I���⬰�z��
    settextstyle(40, 0, "�L�n������");//(�r��,�r�e(�w�]�H��X�ܤ�),"�r��(�n�t�Φ���)")
    settextcolor(WHITE);//�r���C��
    BeginBatchDraw();//�Ы�ø�Ͻw�İ�(�S��ø�Ͻw�İϱN�ɭP�d�y)
    if (msg.x >= 250 && msg.x <= 250 + 300 && msg.y >= 400 && msg.y <= 400 + 50)
    {
        setfillcolor(RGB(255, 231, 186));//�]�m�x�ζ�R��(�ϥ�RGB)
        fillroundrect(250, 400, 550, 450, 10, 10);//ø�s�ꨤ�x��(��,�W,�k,�U,��e,�갪)
        outtextxy(330, 405, "�T�w");//��X��r(��rx,��ry,"��r")
        FlushBatchDraw();//��Xø�Ͻw�İ�
    }
    else
    {
        setfillcolor(RGB(205, 186, 150));//�]�m�x�ζ�R��(�ϥ�RGB)
        fillroundrect(250, 400, 550, 450, 10, 10);//ø�s�ꨤ�x��(��,�W,�k,�U,��e,�갪)
        outtextxy(330, 405, "�T�w");//��X��r(��rx,��ry,"��r")
        FlushBatchDraw();//��Xø�Ͻw�İ�
    }
    EndBatchDraw();//����ø�Ͻw�İ�
    return 0;
}
//************************************************************************
//lose�T�w���s&�A�դ@�����s
int lose_confirm_button(ExMessage msg)
{
    setbkmode(TRANSPARENT);//�]�m��r�I���⬰�z��
    settextstyle(40, 0, "�L�n������");//(�r��,�r�e(�w�]�H��X�ܤ�),"�r��(�n�t�Φ���)")
    settextcolor(WHITE);//�r���C��
    BeginBatchDraw();//�Ы�ø�Ͻw�İ�(�S��ø�Ͻw�İϱN�ɭP�d�y)
    if (msg.x >= 250 && msg.x <= 250 + 300 && msg.y >= 400 && msg.y <= 400 + 50)
    {
        setfillcolor(RGB(255, 231, 186));//�]�m�x�ζ�R��(�ϥ�RGB)
        fillroundrect(250, 400, 550, 450, 10, 10);//ø�s�ꨤ�x��(��,�W,�k,�U,��e,�갪)
        outtextxy(330, 405, "�T�w");//��X��r(��rx,��ry,"��r")
        FlushBatchDraw();//��Xø�Ͻw�İ�
    }

    else if (msg.x >= 250 && msg.x <= 250 + 300 && msg.y >= 300 && msg.y <= 300 + 50)
    {
        setfillcolor(RGB(193, 205, 205));//�]�m�x�ζ�R��(�ϥ�RGB)
        fillroundrect(250, 300, 550, 350, 10, 10);//ø�s�ꨤ�x��(��,�W,�k,�U,��e,�갪)
        outtextxy(330, 305, "�A�դ@��");//��X��r(��rx,��ry,"��r")
        FlushBatchDraw();//��Xø�Ͻw�İ�
    }
    else
    {
        setfillcolor(RGB(131, 139, 139));//�]�m�x�ζ�R��(�ϥ�RGB)
        fillroundrect(250, 300, 550, 350, 10, 10);//ø�s�ꨤ�x��(��,�W,�k,�U,��e,�갪)
        outtextxy(330, 305, "�A�դ@��");//��X��r(��rx,��ry,"��r")
        setfillcolor(RGB(205, 186, 150));//�]�m�x�ζ�R��(�ϥ�RGB)
        fillroundrect(250, 400, 550, 450, 10, 10);//ø�s�ꨤ�x��(��,�W,�k,�U,��e,�갪)
        outtextxy(330, 405, "�T�w");//��X��r(��rx,��ry,"��r")
        FlushBatchDraw();//��Xø�Ͻw�İ�
    }
    EndBatchDraw();//����ø�Ͻw�İ�
    return 0;
}
//************************************************************************
//�D�������s
int main_menu_front_button(ExMessage msg)
{
    setbkmode(TRANSPARENT);//�]�m��r�I���⬰�z��
    settextcolor(BLACK);//�r���C��
    settextstyle(30, 0, "�L�n������");//(�r��,�r�e(�w�]�H��X�ܤ�),"�r��(�n�t�Φ���)")
    if (msg.x >= 10 && msg.x <= 10 + 100 && msg.y >= 10 && msg.y <= 10 + 50)
    {
        setfillcolor(RGB(255, 165, 79));//�]�m�x�ζ�R��(�ϥ�RGB)
        fillroundrect(10, 10, 110, 60, 10, 10);//ø�s�ꨤ�x��(��,�W,�k,�U,��e,�갪)
        outtextxy(22, 20, "�D����");//��X��r(��rx,��ry,"��r")
    }
    else
    {
        setfillcolor(RGB(205, 133, 63));//�]�m�x�ζ�R��(�ϥ�RGB)
        fillroundrect(10, 10, 110, 60, 10, 10);//ø�s�ꨤ�x��(��,�W,�k,�U,��e,�갪)
        outtextxy(22, 20, "�D����");//��X��r(��rx,��ry,"��r")
    }
    return 0;
}
//************************************************************************
//�n�X���s
int Sign_out_button(ExMessage msg)
{
    setbkmode(TRANSPARENT);//�]�m��r�I���⬰�z��
    settextcolor(BLACK);//�r���C��
    settextstyle(30, 0, "�L�n������");//(�r��,�r�e(�w�]�H��X�ܤ�),"�r��(�n�t�Φ���)")
    if (msg.x >= 10 && msg.x <= 10 + 100 && msg.y >= 10 && msg.y <= 10 + 50)
    {
        setfillcolor(RGB(255, 165, 79));//�]�m�x�ζ�R��(�ϥ�RGB)
        fillroundrect(10, 10, 110, 60, 10, 10);//ø�s�ꨤ�x��(��,�W,�k,�U,��e,�갪)
        outtextxy(35, 20, "�n�X");//��X��r(��rx,��ry,"��r")
    }
    else
    {
        setfillcolor(RGB(205, 133, 63));//�]�m�x�ζ�R��(�ϥ�RGB)
        fillroundrect(10, 10, 110, 60, 10, 10);//ø�s�ꨤ�x��(��,�W,�k,�U,��e,�갪)
        outtextxy(35, 20, "�n�X");//��X��r(��rx,��ry,"��r")
    }
    return 0;
}
//************************************************************************