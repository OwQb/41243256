#pragma once
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
#include<easyx.h>//easyx���Y��
#include<graphics.h>//easyx���Y��
#include<mmsystem.h>//mp3����
#pragma comment(lib,"Winmm.lib")//mp3����
#include"tools.h"//�z���榡
#define IM_NUMBER 38//�Ϥ��ƶq
#define BG_NUMBER 10//�I���ƶq
#define MATH_NUMBER 34//�ƾǤ����ƶq
//***********************************************************
//<�C����ƩM�P�_>
int main(void);//�C����l��
int loading_data(struct Resource*);//�[�����
int Selectr_login_register(void);//��ܵn�J�ε��U
int login_register(int);//�n�J�ε��U
int save_player_passlevel(void);//�O�s�C�����
int mouse(ExMessage, int, int, int*);//���o���оާ@�H��
int level_ABCD_button(int, int, int*);//�P�_�O�_�ӧQ
//***********************************************************
//<���s�ʵe>
int front_page_button(ExMessage);//�������s
int Sign_out_button(ExMessage);//�n�X���s
int main_menu_front_button(ExMessage);//��^�������s
int main_menu_button(ExMessage, int);//�D�����s
int final_exam_button(ExMessage);//�����ҫ��s
int main_menu_button_fillrectangle_size(int);//�]�w���զ�x�ξB��d��,��֦�ƥ�
int main_menu_button_redframe_size(int);//�]�w������,��֦�ƥ�
int attack_button(ExMessage);//�������s
int win_confirm_button(ExMessage);//���a�ӧQ���s
int lose_confirm_button(ExMessage);//���a���ѫ��s
//***********************************************************
//<�C������>
int front_page(void);//����
int inital_plot(void);//��l�@��
int main_menu(void);//�D���

int linux_level(void);//linux���d
int programming_level(void);//�{���]�p���d
int PE_level(void);//��|���d
int calculator_level(void);//�p�����d
int internet_level(void);//���ں������d
int information_level(void);//������d
int EN_level(void);//�^�����d
int General_Education_level(void);//�q�����d
int programming_Internship_level(void);//�{���]�p������d
int CH_level(void);//������d
int social_practice_level(void);//���|������d
int math_level(void);//�ƾ����d
int information2_level(void);//���2���d
int calculator2_level(void);//�p��2���d
int math2_level(void);//�ƾ����d
int final_exam_level(void);//���������d
int win(int);//���a�ӧQ
int lose(void);//���a����
//***********************************************************
//<�C���ʵe>
int loading_animation(void);//�[���ʵe
int animation(int, int);//�L���ʵe
int flashing_animation(ExMessage);//�L���ʵe
int me_attack(void);//�ڤ��������
int enemy_attack(void);//�Ĥ���������
int attack_button_inital(void);//��l�������s�e��
//***********************************************************
//<�C���D�w>
int ABCD(void);//��ª���XABCD,��֦�ƥ�
int question_options_coordinate(int);//�D�w�ﶵ�y��

int linux_question(void);//linux�D�w
int linux_problem(void);//linux�D��
int linux_options_true(int, int);//linux���T�ﶵ
int linux_options_false1(int, int);//linux���~�ﶵ1
int linux_options_false2(int, int);//linux���~�ﶵ2
int linux_options_false3(int, int);//linux���~�ﶵ3

int programming_question(void);//�{���]�p�D�w
int programming_problem(void);//�{���]�p�D��
int programming_options_true(int, int);//�{���]�p���T�ﶵ
int programming_options_false1(int, int);//�{���]�p���~�ﶵ1
int programming_options_false2(int, int);//�{���]�p���~�ﶵ2
int programming_options_false3(int, int);//�{���]�p���~�ﶵ3

int PE_question(void);//��|�D�w
int PE_problem(void);//��|�D��
int PE_options_true(int, int);//��|���T�ﶵ
int PE_options_false1(int, int);//��|���~�ﶵ1
int PE_options_false2(int, int);//��|���~�ﶵ2
int PE_options_false3(int, int);//��|���~�ﶵ3

int calculator_question(void);//�p���D�w
int calculator_problem(void);//�p���D��
int calculator_options_true(int, int);//�p�����T�ﶵ
int calculator_options_false1(int, int);//�p�����~�ﶵ1
int calculator_options_false2(int, int);//�p�����~�ﶵ2
int calculator_options_false3(int, int);//�p�����~�ﶵ3

int internet_question(void);//���ں����D�w
int internet_problem(void);//���ں����D��
int internet_options_true(int, int);//���ں������T�ﶵ
int internet_options_false1(int, int);//���ں������~�ﶵ1
int internet_options_false2(int, int);//���ں������~�ﶵ2
int internet_options_false3(int, int);//���ں������~�ﶵ3

int information_question(void);//����D�w
int information_problem(void);//����D��
int information_options_true(int, int);//��ɥ��T�ﶵ
int information_options_false1(int, int);//��ɿ��~�ﶵ1
int information_options_false2(int, int);//��ɿ��~�ﶵ2
int information_options_false3(int, int);//��ɿ��~�ﶵ3

int EN_question(void);//�^���D�w
int EN_problem(void);//�^���D��
int EN_options_true(int, int);//�^�奿�T�ﶵ
int EN_options_false1(int, int);//�^����~�ﶵ1
int EN_options_false2(int, int);//�^����~�ﶵ2
int EN_options_false3(int, int);//�^����~�ﶵ3

int General_Education_question(void);//�q���D�w
int General_Education_problem(void);//�q���D��
int General_Education_options_true(int, int);//�q�ѥ��T�ﶵ
int General_Education_options_false1(int, int);//�q�ѿ��~�ﶵ1
int General_Education_options_false2(int, int);//�q�ѿ��~�ﶵ2
int General_Education_options_false3(int, int);//�q�ѿ��~�ﶵ3

int CH_question(void);//����D�w
int CH_problem(void);//����D��
int CH_options_true(int, int);//��奿�T�ﶵ
int CH_options_false1(int, int);//�����~�ﶵ1
int CH_options_false2(int, int);//�����~�ﶵ2
int CH_options_false3(int, int);//�����~�ﶵ3

int social_practice_question(void);//���|����D�w
int social_practice_problem(void);//���|����D��
int social_practice_options_true(int, int);//���|���T�ﶵ
int social_practice_options_false1(int, int);//���|�����~�ﶵ1
int social_practice_options_false2(int, int);//���|�����~�ﶵ2
int social_practice_options_false3(int, int);//���|�����~�ﶵ3

int loading_math_data(struct math_Resource*);//�[���ƾǸ��
int math_question(void);//�ƾ��D�w
int math_problem(void);//�ƾ��D��
int math_options_true(int, int);//�ƾǥ��T�ﶵ
int math_options_false1(int, int);//�ƾǿ��~�ﶵ1
int math_options_false2(int, int);//�ƾǿ��~�ﶵ2
int math_options_false3(int, int);//�ƾǿ��~�ﶵ3

int final_exam_question(void);//�������D�w
//***********************************************************