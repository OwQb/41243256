#include"function.h"

int CH_question(void)
{
    int coordinate;//選項位置
    int problem_save;//儲存隨機題目
    int options_save[4] = { 0 };//儲存個選項位置
    srand((unsigned)time(NULL));

    problem_save = CH_problem();//隨機題目

    options_save[0] = rand() % 4 + 1;//初始隨機答案
    coordinate = question_options_coordinate(options_save[0]);//給予隨機數,設定各選項座標
    CH_options_true(problem_save, coordinate);//根據隨機的題目輸出正確選項

    do { options_save[1] = rand() % 4 + 1; } while (options_save[0] == options_save[1]);//使隨機出來的數不等於前1個
    coordinate = question_options_coordinate(options_save[1]);//給予隨機數,設定各選項座標
    CH_options_false1(problem_save, coordinate);//根據隨機的題目輸出錯誤選項1

    do { options_save[2] = rand() % 4 + 1; } while (options_save[0] == options_save[2] || options_save[1] == options_save[2]);//使隨機出來的數不等於前2個
    coordinate = question_options_coordinate(options_save[2]);//給予隨機數,設定各選項座標
    CH_options_false2(problem_save, coordinate);//根據隨機的題目輸出錯誤選項2

    do { options_save[3] = rand() % 4 + 1; } while (options_save[0] == options_save[3] || options_save[1] == options_save[3] || options_save[2] == options_save[3]);//使隨機出來的數不等於前3個
    coordinate = question_options_coordinate(options_save[3]);//給予隨機數,設定各選項座標
    CH_options_false3(problem_save, coordinate);//根據隨機的題目輸出錯誤選項3

    return options_save[0];//返回正確答案位置
}
//*********************************************************************
int CH_problem(void)//隨機題目
{
    int problem;
    problem = rand() % 20 + 1;//隨機題目數
    setbkmode(TRANSPARENT);//設置文字背景色為透明
    settextstyle(20, 0, "微軟正黑體");//(字高,字寬(預設隨輸出變化),"字體(要系統有的)")
    settextcolor(BLACK);//字體顏色
    switch (problem)
    {
    case 1:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        //**********************************************************************************************************************************************************
        outtextxy(50, 300, "下列文句中，關於「齒、恥」二字的使用,正確的選項是： ");//輸出文字(文字x,文字y,"文字")
        //outtextxy(50, 330, "");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 2:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "下列「 」內的字,讀音前後相同的是： ");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 3:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "下列「 」中的字義,何者兩兩相同？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 4:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "下列「」內不屬於自謙詞的選項是： ");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 5:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "以下各組成語的意義,何者相同？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 6:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "阿勳終於有自己的書房了,以下對聯適合貼在書房的是： ");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 7:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "下列古人與其相關典故,配對錯誤的選項是：");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 8:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "有關韓愈與古文運動的敘述,下列說明正確的是：");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 9:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "下列有關「史書」之敘述,下列選項何者是正確的？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 10:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "〈桃花源記〉：「遂與外人間隔。問今是何世？乃不知有漢，無論魏、晉！」此句意同於：");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 11:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "下列關於文學常識的敘述,不正確的選項是：");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 12:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "「黃髮垂髫，並怡然自樂」中「黃髮」借指老人，「垂髫」借指小孩。下列未使用借代修辭的選項是：");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 13:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "下列文句,何者最能表現諸葛亮討賊興漢之志？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 14:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "下列各選項「」中的字,讀音前後一樣的是：");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 15:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "何者用字完全正確：");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 16:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "以下「」中的成語,何者運用正確？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 17:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "哪個選項的句子有錯別字？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 18:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "下列選項「」中的字,何者為動詞？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 19:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "〈勸學〉：「吾嘗終日而思矣,不如須臾之所學也」說明什麼道理？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 20:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "下列「」中的字在成語中,何者「非」指人的身體部位：");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    }
    return problem;//回傳隨機到的題目
}
//*********************************************************************
int CH_options_true(int problem, int coordinate)//正確選項
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "有些人只寫過幾篇小文章就自號才子，真是讓人齒冷");//輸出文字(文字x,文字y,"文字")
        break;
    case 2:
        outtextxy(70, coordinate, "餔糟歠「醨」／探「驪」得珠");//輸出文字(文字x,文字y,"文字")
        break;
    case 3:
        outtextxy(70, coordinate, "樹」靈鼉之鼓／外「樹」怨於諸侯");//輸出文字(文字x,文字y,"文字")
        break;
    case 4:
        outtextxy(70, coordinate, "魯智深道：「洒家」趕不上宿頭，欲借貴莊投宿一宵，明早便行");//輸出文字(文字x,文字y,"文字")
        break;
    case 5:
        outtextxy(70, coordinate, "買櫝還珠／捨本逐末");//輸出文字(文字x,文字y,"文字")
        break;
    case 6:
        outtextxy(70, coordinate, "胸羅文史盡人見，腹有詩書曠世珍");//輸出文字(文字x,文字y,"文字")
        break;
    case 7:
        outtextxy(70, coordinate, "劉備：金屋藏嬌");//輸出文字(文字x,文字y,"文字")
        break;
    case 8:
        outtextxy(70, coordinate, "晚唐駢文又興起，至北宋歐陽脩等人提倡，古文始成為文章正宗");//輸出文字(文字x,文字y,"文字")
        break;
    case 9:
        outtextxy(70, coordinate, "國別史之祖、紀傳體之祖、斷代史之祖分別為:《國語》、《史記》、《漢書》");//輸出文字(文字x,文字y,"文字")
        break;
    case 10:
        outtextxy(70, coordinate, "山中無曆日，寒盡不知年");//輸出文字(文字x,文字y,"文字")
        break;
    case 11:
        outtextxy(70, coordinate, "傳奇是小說的代稱，明、清兩代的傳奇都是傳述奇聞異事的小說");//輸出文字(文字x,文字y,"文字")
        break;
    case 12:
        outtextxy(70, coordinate, "人生不相見，動如參與商");//輸出文字(文字x,文字y,"文字")
        break;
    case 13:
        outtextxy(70, coordinate, "今南方已定，兵甲已足，當獎率三軍，北定中原，庶竭駑鈍，攘除姦凶");//輸出文字(文字x,文字y,"文字")
        break;
    case 14:
        outtextxy(70, coordinate, "會「數」禮勤 / 燈光閃「爍」");//輸出文字(文字x,文字y,"文字")
        break;
    case 15:
        outtextxy(70, coordinate, "在炎熱的夏天，喝杯冰涼的飲料，真是沁人心脾");//輸出文字(文字x,文字y,"文字")
        break;
    case 16:
        outtextxy(70, coordinate, "至聖先師孔子喜於讀書，「韋編三絕」的精神令人敬佩");//輸出文字(文字x,文字y,"文字")
        break;
    case 17:
        outtextxy(70, coordinate, "最近發生了不少意料之外的狀況，真讓人錯手不及");//輸出文字(文字x,文字y,"文字")
        break;
    case 18:
        outtextxy(70, coordinate, "親賢臣，「遠」小人");//輸出文字(文字x,文字y,"文字")
        break;
    case 19:
        outtextxy(70, coordinate, "學重於思");//輸出文字(文字x,文字y,"文字")
        break;
    case 20:
        outtextxy(70, coordinate, "離鄉「背」井");//輸出文字(文字x,文字y,"文字")
        break;
    }
    return 0;
}
//*********************************************************************
int CH_options_false1(int problem, int coordinate)//錯誤選項1
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "他公然說謊卻絲毫不覺愧疚，難怪會被批評為無齒 ");//輸出文字(文字x,文字y,"文字")
        break;
    case 2:
        outtextxy(70, coordinate, "撫弦登「陴」／彈箏搏「髀」");//輸出文字(文字x,文字y,"文字")
        break;
    case 3:
        outtextxy(70, coordinate, "昔者，仲尼「與」於蜡賓／失其所「與」，不知");//輸出文字(文字x,文字y,"文字")
        break;
    case 4:
        outtextxy(70, coordinate, "「僕」自到九江，已涉三載，形骸且健，方寸甚安");//輸出文字(文字x,文字y,"文字")
        break;
    case 5:
        outtextxy(70, coordinate, "畫虎類犬／維妙維肖");//輸出文字(文字x,文字y,"文字")
        break;
    case 6:
        outtextxy(70, coordinate, "願世人皆能容忍，唯此地必較短長");//輸出文字(文字x,文字y,"文字")
        break;
    case 7:
        outtextxy(70, coordinate, "司馬相如：當壚賣酒");//輸出文字(文字x,文字y,"文字")
        break;
    case 8:
        outtextxy(70, coordinate, "歐陽脩曾稱譽他：「匹夫而為百世師，一言而為天下法」");//輸出文字(文字x,文字y,"文字")
        break;
    case 9:
        outtextxy(70, coordinate, "《韓非子》、《國語》、《戰國策》皆是戰國時代著名的歷史散文");//輸出文字(文字x,文字y,"文字")
        break;
    case 10:
        outtextxy(70, coordinate, "小隱隱陵藪，大隱隱朝市");//輸出文字(文字x,文字y,"文字")
        break;
    case 11:
        outtextxy(70, coordinate, "以黃庭堅為首的「江西詩派」寫詩講究詩法，喜好用典");//輸出文字(文字x,文字y,"文字")
        break;
    case 12:
        outtextxy(70, coordinate, "私家收拾，半付祝融");//輸出文字(文字x,文字y,"文字")
        break;
    case 13:
        outtextxy(70, coordinate, "後值傾覆，受任於敗軍之際，奉命於危難之間");//輸出文字(文字x,文字y,"文字")
        break;
    case 14:
        outtextxy(70, coordinate, "「庖」丁解牛 /「煲」湯煮粥");//輸出文字(文字x,文字y,"文字")
        break;
    case 15:
        outtextxy(70, coordinate, "小良斬釘節鐵地指證，住在隔壁的阿元就是犯人");//輸出文字(文字x,文字y,"文字")
        break;
    case 16:
        outtextxy(70, coordinate, "學習時的態度應該「誨人不倦」，時時刻刻都不可懈怠");//輸出文字(文字x,文字y,"文字")
        break;
    case 17:
        outtextxy(70, coordinate, "做事情要知所變通，不可墨守成規");//輸出文字(文字x,文字y,"文字")
        break;
    case 18:
        outtextxy(70, coordinate, "視吾家所「寡」有者");//輸出文字(文字x,文字y,"文字")
        break;
    case 19:
        outtextxy(70, coordinate, "思重於學");//輸出文字(文字x,文字y,"文字")
        break;
    case 20:
        outtextxy(70, coordinate, "引「吭」高歌");//輸出文字(文字x,文字y,"文字")
        break;
    }
    return 0;
}
//*********************************************************************
int CH_options_false2(int problem, int coordinate)//錯誤選項2
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "謙虛的人能不齒下問，驕傲的人總自以為是");//輸出文字(文字x,文字y,"文字")
        break;
    case 2:
        outtextxy(70, coordinate, "批「郤」導窾／欲深「谿」壑");//輸出文字(文字x,文字y,"文字")
        break;
    case 3:
        outtextxy(70, coordinate, "足以極視聽之娛，「信」可樂也／低眉「信」手續續彈");//輸出文字(文字x,文字y,"文字")
        break;
    case 4:
        outtextxy(70, coordinate, "齊王封書謝孟嘗君曰：「寡人」不祥……");//輸出文字(文字x,文字y,"文字")
        break;
    case 5:
        outtextxy(70, coordinate, "社鼠猛狗／與虎謀皮");//輸出文字(文字x,文字y,"文字")
        break;
    case 6:
        outtextxy(70, coordinate, "胸中常貯七囊錦，手裡時藏四季花");//輸出文字(文字x,文字y,"文字")
        break;
    case 7:
        outtextxy(70, coordinate, "曹操：夢中殺人");//輸出文字(文字x,文字y,"文字")
        break;
    case 8:
        outtextxy(70, coordinate, "韓愈為古文運動先驅，經友人柳宗元等人努力，古文運動在中唐已取得成功");//輸出文字(文字x,文字y,"文字")
        break;
    case 9:
        outtextxy(70, coordinate, "依四庫全書的分類法，《水經注》和《尚書》都列在「史部」");//輸出文字(文字x,文字y,"文字")
        break;
    case 10:
        outtextxy(70, coordinate, "挾飛仙以遨遊，抱明月而長終");//輸出文字(文字x,文字y,"文字")
        break;
    case 11:
        outtextxy(70, coordinate, "先秦諸子散文各具特色，如孟子善於雄辯、氣勢壯闊，莊子善用寓言、想像豐富");//輸出文字(文字x,文字y,"文字")
        break;
    case 12:
        outtextxy(70, coordinate, "沙鷗翔集，錦鱗游泳");//輸出文字(文字x,文字y,"文字")
        break;
    case 13:
        outtextxy(70, coordinate, "然侍衛之臣，不懈於內；忠志之士，忘身於外");//輸出文字(文字x,文字y,"文字")
        break;
    case 14:
        outtextxy(70, coordinate, "獨樹一「幟」/ 大聲怒「叱」");//輸出文字(文字x,文字y,"文字")
        break;
    case 15:
        outtextxy(70, coordinate, "5餐廳的食物美味且價格合理，因此生意非常好，人潮穿流不息");//輸出文字(文字x,文字y,"文字")
        break;
    case 16:
        outtextxy(70, coordinate, "做事情宜有「畏敵如虎」、小心謹慎的態度，才能成功");//輸出文字(文字x,文字y,"文字")
        break;
    case 17:
        outtextxy(70, coordinate, "我由衷感謝你的大力相救，我必定會銘記在心");//輸出文字(文字x,文字y,"文字")
        break;
    case 18:
        outtextxy(70, coordinate, "「遷」客騷人，多會於此");//輸出文字(文字x,文字y,"文字")
        break;
    case 19:
        outtextxy(70, coordinate, "學思並重");//輸出文字(文字x,文字y,"文字")
        break;
    case 20:
        outtextxy(70, coordinate, "懸梁刺「股」");//輸出文字(文字x,文字y,"文字")
        break;
    }
    return 0;
}
//*********************************************************************
int CH_options_false3(int problem, int coordinate)//錯誤選項3
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "高舉公理正義的大旗做傷天害理的事，最令人不恥");//輸出文字(文字x,文字y,"文字")
        break;
    case 2:
        outtextxy(70, coordinate, "「攘」除姦凶／追思「曩」昔");//輸出文字(文字x,文字y,"文字")
        break;
    case 3:
        outtextxy(70, coordinate, "宋人有「酤」酒者／令孺子懷錢挈壺罋而往「酤」");//輸出文字(文字x,文字y,"文字")
        break;
    case 4:
        outtextxy(70, coordinate, "凡我多士，及我友朋，惟仁惟孝，義勇奉公，以發揚種性，此則「不佞」之幟也");//輸出文字(文字x,文字y,"文字")
        break;
    case 5:
        outtextxy(70, coordinate, "抱薪救火／釜底抽薪");//輸出文字(文字x,文字y,"文字")
        break;
    case 6:
        outtextxy(70, coordinate, "非以朝暮觀時刻，要識光陰等箭梭");//輸出文字(文字x,文字y,"文字")
        break;
    case 7:
        outtextxy(70, coordinate, "項羽：破釜沉舟");//輸出文字(文字x,文字y,"文字")
        break;
    case 8:
        outtextxy(70, coordinate, "古文」指六朝華而不實的駢文");//輸出文字(文字x,文字y,"文字")
        break;
    case 9:
        outtextxy(70, coordinate, "《臺灣通史》的體例仿《資治通鑑》而略作改變，記隋朝大業年間至臺灣割讓為止");//輸出文字(文字x,文字y,"文字")
        break;
    case 10:
        outtextxy(70, coordinate, "浮雲遊子意，落日故人情");//輸出文字(文字x,文字y,"文字")
        break;
    case 11:
        outtextxy(70, coordinate, "白居易大力提倡新樂府運動，其反映現實的主張，影響深遠");//輸出文字(文字x,文字y,"文字")
        break;
    case 12:
        outtextxy(70, coordinate, "潯陽地僻無音樂，終歲不聞絲竹聲");//輸出文字(文字x,文字y,"文字")
        break;
    case 13:
        outtextxy(70, coordinate, "今當遠離，臨表涕泣，不知所云");//輸出文字(文字x,文字y,"文字")
        break;
    case 14:
        outtextxy(70, coordinate, "未雨綢「繆」/「摹」字習書");//輸出文字(文字x,文字y,"文字")
        break;
    case 15:
        outtextxy(70, coordinate, "我中了對手的計謀，現在的處境如魚遊沸鼎，十分危急");//輸出文字(文字x,文字y,"文字")
        break;
    case 16:
        outtextxy(70, coordinate, "他經過多年「不求甚解」、勤奮苦讀後，終於金榜題名");//輸出文字(文字x,文字y,"文字")
        break;
    case 17:
        outtextxy(70, coordinate, "演說時要有抑揚頓挫，才能展現音色的變化");//輸出文字(文字x,文字y,"文字")
        break;
    case 18:
        outtextxy(70, coordinate, "縈「青」繚「白」，外與天際。");//輸出文字(文字x,文字y,"文字")
        break;
    case 19:
        outtextxy(70, coordinate, "多思少學");//輸出文字(文字x,文字y,"文字")
        break;
    case 20:
        outtextxy(70, coordinate, "昂「首」闊步");//輸出文字(文字x,文字y,"文字")
        break;
    }
    return 0;
}