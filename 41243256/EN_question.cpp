#include"function.h"

int EN_question(void)
{
    int coordinate;//�ﶵ��m
    int problem_save;//�x�s�H���D��
    int options_save[4] = { 0 };//�x�s�ӿﶵ��m
    srand((unsigned)time(NULL));

    problem_save = EN_problem();//�H���D��

    options_save[0] = rand() % 4 + 1;//��l�H������
    coordinate = question_options_coordinate(options_save[0]);//�����H����,�]�w�U�ﶵ�y��
    EN_options_true(problem_save, coordinate);//�ھ��H�����D�ؿ�X���T�ﶵ

    do { options_save[1] = rand() % 4 + 1; } while (options_save[0] == options_save[1]);//���H���X�Ӫ��Ƥ�����e1��
    coordinate = question_options_coordinate(options_save[1]);//�����H����,�]�w�U�ﶵ�y��
    EN_options_false1(problem_save, coordinate);//�ھ��H�����D�ؿ�X���~�ﶵ1

    do { options_save[2] = rand() % 4 + 1; } while (options_save[0] == options_save[2] || options_save[1] == options_save[2]);//���H���X�Ӫ��Ƥ�����e2��
    coordinate = question_options_coordinate(options_save[2]);//�����H����,�]�w�U�ﶵ�y��
    EN_options_false2(problem_save, coordinate);//�ھ��H�����D�ؿ�X���~�ﶵ2

    do { options_save[3] = rand() % 4 + 1; } while (options_save[0] == options_save[3] || options_save[1] == options_save[3] || options_save[2] == options_save[3]);//���H���X�Ӫ��Ƥ�����e3��
    coordinate = question_options_coordinate(options_save[3]);//�����H����,�]�w�U�ﶵ�y��
    EN_options_false3(problem_save, coordinate);//�ھ��H�����D�ؿ�X���~�ﶵ3

    return options_save[0];//��^���T���צ�m
}
//*********************************************************************
int EN_problem(void)//�H���D��
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
        outtextxy(50, 300, "As a result_____the air traffic controllers'strike, all flights have been diverted to ");//��X��r(��rx,��ry,"��r")
        outtextxy(50, 330, "alternative destinations.");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 2:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "Financial_____are predicting that a slowdown in consumer spending will affect profit margins.");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 3:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "In her new position as dean of the university, Dr. Morganti will _____ full ");//��X��r(��rx,��ry,"��r")
        outtextxy(50, 330, "responsibility for academic affairs.");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 4:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "Transferring our _____ facilities to areas with lower labor costs will lead to ");//��X��r(��rx,��ry,"��r")
        outtextxy(50, 330, "greater profitability in the longterm.");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 5:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "Many economists believe that the latest figures show that the risk of inflation ");//��X��r(��rx,��ry,"��r")
        outtextxy(50, 330, "has _____ slightly over thepast six months.");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 6:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "Hardly _____ of the parts that we ordered are in stock.");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 7:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "The warehouse manager has been unable to account _____ the missing supplies.");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 8:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "Product managers _____ performance is considered exceptional will be awarded an annual bonus.");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 9:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "With energy prices _____  than ever, many petroleum companies are ");//��X��r(��rx,��ry,"��r")
        outtextxy(50, 330, "investing in deep water exploration .");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 10:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "Brisbane Associates has revealed that several customers of have _____ recently ");//��X��r(��rx,��ry,"��r")
        outtextxy(50, 330, "moved to rivalbrokerage firms.");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 11:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "Mr. Walton's physical therapist recommended that he _____the ");//��X��r(��rx,��ry,"��r")
        outtextxy(50, 330, "treatment until the swelling has gone down.");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 12:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "Goods that are returned _____ warranty should be accompanied by proof of purchase.");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 13:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "Health care workers should always explain the _____ effects of physical exercise to their patients");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 14:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "Professor Singh argues that the major aid institutions could ");//��X��r(��rx,��ry,"��r")
        outtextxy(50, 330, "make better use of the funds that they have at their_____.");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 15:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "Ms. Sato admitted that the sales of her division have been _____ but ");//��X��r(��rx,��ry,"��r")
        outtextxy(50, 330, "said she expected better results next month.");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 16:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "The hotel complex is conveniently located next to the freeway _____five ");//��X��r(��rx,��ry,"��r")
        outtextxy(50, 330, "miles of the international airport.");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 17:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "_____Mr. Meyers pointed out at the meeting, centralizing the order processing system ");//��X��r(��rx,��ry,"��r")
        outtextxy(50, 330, "will mean standardizing procedures across all business units.");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 18:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "The human resources manager has warned labor unions that prolonged strikes could _____ the");//��X��r(��rx,��ry,"��r")
        outtextxy(50, 330, "company��s plan to invest in a new plant and lead to layoffs.");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 19:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "The increase in profits during the third quarter was _____ due to a national advertising campaign.");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    case 20:
        setfillcolor(WHITE);//�]�m�x�ζ�R��
        fillrectangle(0, 300, 800, 500);//ø�s�x��(��,�W,�k,�U)
        outtextxy(50, 300, "Please note that neither Dr. Johnson _____ Dr. Lang is available for ");//��X��r(��rx,��ry,"��r")
        outtextxy(50, 330, "consultation on Monday and Friday mornings.");//��X��r(��rx,��ry,"��r")
        ABCD();
        break;
    }
    return problem;//�^���H���쪺�D��
}
//*********************************************************************
int EN_options_true(int problem, int coordinate)//���T�ﶵ
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "of");//��X��r(��rx,��ry,"��r")
        break;
    case 2:
        outtextxy(70, coordinate, "analysts");//��X��r(��rx,��ry,"��r")
        break;
    case 3:
        outtextxy(70, coordinate, "assume");//��X��r(��rx,��ry,"��r")
        break;
    case 4:
        outtextxy(70, coordinate, "manufacturing");//��X��r(��rx,��ry,"��r")
        break;
    case 5:
        outtextxy(70, coordinate, "lessened");//��X��r(��rx,��ry,"��r")
        break;
    case 6:
        outtextxy(70, coordinate, "any");//��X��r(��rx,��ry,"��r")
        break;
    case 7:
        outtextxy(70, coordinate, "for");//��X��r(��rx,��ry,"��r")
        break;
    case 8:
        outtextxy(70, coordinate, "whose");//��X��r(��rx,��ry,"��r")
        break;
    case 9:
        outtextxy(70, coordinate, "higher");//��X��r(��rx,��ry,"��r")
        break;
    case 10:
        outtextxy(70, coordinate, "theirs");//��X��r(��rx,��ry,"��r")
        break;
    case 11:
        outtextxy(70, coordinate, "continue");//��X��r(��rx,��ry,"��r")
        break;
    case 12:
        outtextxy(70, coordinate, "under");//��X��r(��rx,��ry,"��r")
        break;
    case 13:
        outtextxy(70, coordinate, "beneficial");//��X��r(��rx,��ry,"��r")
        break;
    case 14:
        outtextxy(70, coordinate, "disposal");//��X��r(��rx,��ry,"��r")
        break;
    case 15:
        outtextxy(70, coordinate, "disappointing");//��X��r(��rx,��ry,"��r")
        break;
    case 16:
        outtextxy(70, coordinate, "within");//��X��r(��rx,��ry,"��r")
        break;
    case 17:
        outtextxy(70, coordinate, "as");//��X��r(��rx,��ry,"��r")
        break;
    case 18:
        outtextxy(70, coordinate, "jeopardize");//��X��r(��rx,��ry,"��r")
        break;
    case 19:
        outtextxy(70, coordinate, "mostly");//��X��r(��rx,��ry,"��r")
        break;
    case 20:
        outtextxy(70, coordinate, "or");//��X��r(��rx,��ry,"��r")
        break;
    }
    return 0;
}
//*********************************************************************
int EN_options_false1(int problem, int coordinate)//���~�ﶵ1
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "with");//��X��r(��rx,��ry,"��r")
        break;
    case 2:
        outtextxy(70, coordinate, "analysis");//��X��r(��rx,��ry,"��r")
        break;
    case 3:
        outtextxy(70, coordinate, "consume");//��X��r(��rx,��ry,"��r")
        break;
    case 4:
        outtextxy(70, coordinate, "manufactured");//��X��r(��rx,��ry,"��r")
        break;
    case 5:
        outtextxy(70, coordinate, "cut");//��X��r(��rx,��ry,"��r")
        break;
    case 6:
        outtextxy(70, coordinate, "few");//��X��r(��rx,��ry,"��r")
        break;
    case 7:
        outtextxy(70, coordinate, "by");//��X��r(��rx,��ry,"��r")
        break;
    case 8:
        outtextxy(70, coordinate, "who");//��X��r(��rx,��ry,"��r")
        break;
    case 9:
        outtextxy(70, coordinate, "high");//��X��r(��rx,��ry,"��r")
        break;
    case 10:
        outtextxy(70, coordinate, "them");//��X��r(��rx,��ry,"��r")
        break;
    case 11:
        outtextxy(70, coordinate, "continued");//��X��r(��rx,��ry,"��r")
        break;
    case 12:
        outtextxy(70, coordinate, "with");//��X��r(��rx,��ry,"��r")
        break;
    case 13:
        outtextxy(70, coordinate, "beneficiary");//��X��r(��rx,��ry,"��r")
        break;
    case 14:
        outtextxy(70, coordinate, "dispersal");//��X��r(��rx,��ry,"��r")
        break;
    case 15:
        outtextxy(70, coordinate, "disappointed");//��X��r(��rx,��ry,"��r")
        break;
    case 16:
        outtextxy(70, coordinate, "without");//��X��r(��rx,��ry,"��r")
        break;
    case 17:
        outtextxy(70, coordinate, "Such as");//��X��r(��rx,��ry,"��r")
        break;
    case 18:
        outtextxy(70, coordinate, "economize");//��X��r(��rx,��ry,"��r")
        break;
    case 19:
        outtextxy(70, coordinate, "almost");//��X��r(��rx,��ry,"��r")
        break;
    case 20:
        outtextxy(70, coordinate, "nor");//��X��r(��rx,��ry,"��r")
        break;
    }
    return 0;
}
//*********************************************************************
int EN_options_false2(int problem, int coordinate)//���~�ﶵ2
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "from");//��X��r(��rx,��ry,"��r")
        break;
    case 2:
        outtextxy(70, coordinate, "analyze");//��X��r(��rx,��ry,"��r")
        break;
    case 3:
        outtextxy(70, coordinate, "presume");//��X��r(��rx,��ry,"��r")
        break;
    case 4:
        outtextxy(70, coordinate, "manufactures");//��X��r(��rx,��ry,"��r")
        break;
    case 5:
        outtextxy(70, coordinate, "reduced");//��X��r(��rx,��ry,"��r")
        break;
    case 6:
        outtextxy(70, coordinate, "none");//��X��r(��rx,��ry,"��r")
        break;
    case 7:
        outtextxy(70, coordinate, "to");//��X��r(��rx,��ry,"��r")
        break;
    case 8:
        outtextxy(70, coordinate, "which");//��X��r(��rx,��ry,"��r")
        break;
    case 9:
        outtextxy(70, coordinate, "highly");//��X��r(��rx,��ry,"��r")
        break;
    case 10:
        outtextxy(70, coordinate, "their");//��X��r(��rx,��ry,"��r")
        break;
    case 11:
        outtextxy(70, coordinate, "has continued");//��X��r(��rx,��ry,"��r")
        break;
    case 12:
        outtextxy(70, coordinate, "over");//��X��r(��rx,��ry,"��r")
        break;
    case 13:
        outtextxy(70, coordinate, "benefits");//��X��r(��rx,��ry,"��r")
        break;
    case 14:
        outtextxy(70, coordinate, "dismissal");//��X��r(��rx,��ry,"��r")
        break;
    case 15:
        outtextxy(70, coordinate, "disappointingly");//��X��r(��rx,��ry,"��r")
        break;
    case 16:
        outtextxy(70, coordinate, "beneath");//��X��r(��rx,��ry,"��r")
        break;
    case 17:
        outtextxy(70, coordinate, "Since");//��X��r(��rx,��ry,"��r")
        break;
    case 18:
        outtextxy(70, coordinate, "monopolize");//��X��r(��rx,��ry,"��r")
        break;
    case 19:
        outtextxy(70, coordinate, "most");//��X��r(��rx,��ry,"��r")
        break;
    case 20:
        outtextxy(70, coordinate, "but");//��X��r(��rx,��ry,"��r")
        break;
    }
    return 0;
}
//*********************************************************************
int EN_options_false3(int problem, int coordinate)//���~�ﶵ3
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "for");//��X��r(��rx,��ry,"��r")
        break;
    case 2:
        outtextxy(70, coordinate, "analytical");//��X��r(��rx,��ry,"��r")
        break;
    case 3:
        outtextxy(70, coordinate, "resume");//��X��r(��rx,��ry,"��r")
        break;
    case 4:
        outtextxy(70, coordinate, "manufacturer");//��X��r(��rx,��ry,"��r")
        break;
    case 5:
        outtextxy(70, coordinate, "limited");//��X��r(��rx,��ry,"��r")
        break;
    case 6:
        outtextxy(70, coordinate, "some");//��X��r(��rx,��ry,"��r")
        break;
    case 7:
        outtextxy(70, coordinate, "with");//��X��r(��rx,��ry,"��r")
        break;
    case 8:
        outtextxy(70, coordinate, "whom");//��X��r(��rx,��ry,"��r")
        break;
    case 9:
        outtextxy(70, coordinate, "highest");//��X��r(��rx,��ry,"��r")
        break;
    case 10:
        outtextxy(70, coordinate, "themselves");//��X��r(��rx,��ry,"��r")
        break;
    case 11:
        outtextxy(70, coordinate, "is continuing");//��X��r(��rx,��ry,"��r")
        break;
    case 12:
        outtextxy(70, coordinate, "on");//��X��r(��rx,��ry,"��r")
        break;
    case 13:
        outtextxy(70, coordinate, "benefiting");//��X��r(��rx,��ry,"��r")
        break;
    case 14:
        outtextxy(70, coordinate, "disapproval");//��X��r(��rx,��ry,"��r")
        break;
    case 15:
        outtextxy(70, coordinate, "disappointment");//��X��r(��rx,��ry,"��r")
        break;
    case 16:
        outtextxy(70, coordinate, "beside");//��X��r(��rx,��ry,"��r")
        break;
    case 17:
        outtextxy(70, coordinate, "So");//��X��r(��rx,��ry,"��r")
        break;
    case 18:
        outtextxy(70, coordinate, "penalize");//��X��r(��rx,��ry,"��r")
        break;
    case 19:
        outtextxy(70, coordinate, "much");//��X��r(��rx,��ry,"��r")
        break;
    case 20:
        outtextxy(70, coordinate, "and");//��X��r(��rx,��ry,"��r")
        break;
    }
    return 0;
}