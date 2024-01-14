#pragma once
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
#include<time.h>
#include<windows.h>
#include<easyx.h>//easyx標頭檔
#include<graphics.h>//easyx標頭檔
#include<mmsystem.h>//mp3播放
#pragma comment(lib,"Winmm.lib")//mp3播放
#include"tools.h"//透明格式
#define IM_NUMBER 38//圖片數量
#define BG_NUMBER 10//背景數量
#define MATH_NUMBER 34//數學公式數量
//***********************************************************
//<遊戲資料和判斷>
int main(void);//遊戲初始化
int loading_data(struct Resource*);//加載資料
int Selectr_login_register(void);//選擇登入或註冊
int login_register(int);//登入或註冊
int save_player_passlevel(void);//保存遊戲資料
int mouse(ExMessage, int, int, int*);//取得鼠標操作信息
int level_ABCD_button(int, int, int*);//判斷是否勝利
//***********************************************************
//<按鈕動畫>
int front_page_button(ExMessage);//首頁按鈕
int Sign_out_button(ExMessage);//登出按鈕
int main_menu_front_button(ExMessage);//返回首頁按鈕
int main_menu_button(ExMessage, int);//主菜單按鈕
int final_exam_button(ExMessage);//期末考按鈕
int main_menu_button_fillrectangle_size(int);//設定菜單白色矩形遮住範圍,減少行數用
int main_menu_button_redframe_size(int);//設定菜單紅框,減少行數用
int attack_button(ExMessage);//攻擊按鈕
int win_confirm_button(ExMessage);//玩家勝利按鈕
int lose_confirm_button(ExMessage);//玩家失敗按鈕
//***********************************************************
//<遊戲介面>
int front_page(void);//首頁
int inital_plot(void);//初始劇情
int main_menu(void);//主菜單

int linux_level(void);//linux關卡
int programming_level(void);//程式設計關卡
int PE_level(void);//體育關卡
int calculator_level(void);//計概關卡
int internet_level(void);//網際網路關卡
int information_level(void);//資導關卡
int EN_level(void);//英文關卡
int General_Education_level(void);//通識關卡
int programming_Internship_level(void);//程式設計實習關卡
int CH_level(void);//國文關卡
int social_practice_level(void);//社會實踐關卡
int math_level(void);//數學關卡
int information2_level(void);//資導2關卡
int calculator2_level(void);//計概2關卡
int math2_level(void);//數學關卡
int final_exam_level(void);//期末考關卡
int win(int);//玩家勝利
int lose(void);//玩家失敗
//***********************************************************
//<遊戲動畫>
int loading_animation(void);//加載動畫
int animation(int, int);//過場動畫
int flashing_animation(ExMessage);//過場動畫
int me_attack(void);//我方攻擊結算
int enemy_attack(void);//敵方方攻擊結算
int attack_button_inital(void);//初始攻擊按鈕畫面
//***********************************************************
//<遊戲題庫>
int ABCD(void);//單純的輸出ABCD,減少行數用
int question_options_coordinate(int);//題庫選項座標

int linux_question(void);//linux題庫
int linux_problem(void);//linux題目
int linux_options_true(int, int);//linux正確選項
int linux_options_false1(int, int);//linux錯誤選項1
int linux_options_false2(int, int);//linux錯誤選項2
int linux_options_false3(int, int);//linux錯誤選項3

int programming_question(void);//程式設計題庫
int programming_problem(void);//程式設計題目
int programming_options_true(int, int);//程式設計正確選項
int programming_options_false1(int, int);//程式設計錯誤選項1
int programming_options_false2(int, int);//程式設計錯誤選項2
int programming_options_false3(int, int);//程式設計錯誤選項3

int PE_question(void);//體育題庫
int PE_problem(void);//體育題目
int PE_options_true(int, int);//體育正確選項
int PE_options_false1(int, int);//體育錯誤選項1
int PE_options_false2(int, int);//體育錯誤選項2
int PE_options_false3(int, int);//體育錯誤選項3

int calculator_question(void);//計概題庫
int calculator_problem(void);//計概題目
int calculator_options_true(int, int);//計概正確選項
int calculator_options_false1(int, int);//計概錯誤選項1
int calculator_options_false2(int, int);//計概錯誤選項2
int calculator_options_false3(int, int);//計概錯誤選項3

int internet_question(void);//網際網路題庫
int internet_problem(void);//網際網路題目
int internet_options_true(int, int);//網際網路正確選項
int internet_options_false1(int, int);//網際網路錯誤選項1
int internet_options_false2(int, int);//網際網路錯誤選項2
int internet_options_false3(int, int);//網際網路錯誤選項3

int information_question(void);//資導題庫
int information_problem(void);//資導題目
int information_options_true(int, int);//資導正確選項
int information_options_false1(int, int);//資導錯誤選項1
int information_options_false2(int, int);//資導錯誤選項2
int information_options_false3(int, int);//資導錯誤選項3

int EN_question(void);//英文題庫
int EN_problem(void);//英文題目
int EN_options_true(int, int);//英文正確選項
int EN_options_false1(int, int);//英文錯誤選項1
int EN_options_false2(int, int);//英文錯誤選項2
int EN_options_false3(int, int);//英文錯誤選項3

int General_Education_question(void);//通識題庫
int General_Education_problem(void);//通識題目
int General_Education_options_true(int, int);//通識正確選項
int General_Education_options_false1(int, int);//通識錯誤選項1
int General_Education_options_false2(int, int);//通識錯誤選項2
int General_Education_options_false3(int, int);//通識錯誤選項3

int CH_question(void);//國文題庫
int CH_problem(void);//國文題目
int CH_options_true(int, int);//國文正確選項
int CH_options_false1(int, int);//國文錯誤選項1
int CH_options_false2(int, int);//國文錯誤選項2
int CH_options_false3(int, int);//國文錯誤選項3

int social_practice_question(void);//社會實踐題庫
int social_practice_problem(void);//社會實踐題目
int social_practice_options_true(int, int);//社會實踐正確選項
int social_practice_options_false1(int, int);//社會實踐錯誤選項1
int social_practice_options_false2(int, int);//社會實踐錯誤選項2
int social_practice_options_false3(int, int);//社會實踐錯誤選項3

int loading_math_data(struct math_Resource*);//加載數學資料
int math_question(void);//數學題庫
int math_problem(void);//數學題目
int math_options_true(int, int);//數學正確選項
int math_options_false1(int, int);//數學錯誤選項1
int math_options_false2(int, int);//數學錯誤選項2
int math_options_false3(int, int);//數學錯誤選項3

int final_exam_question(void);//期末考題庫
//***********************************************************