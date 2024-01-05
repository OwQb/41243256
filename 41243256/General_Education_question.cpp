#include"function.h"

int General_Education_question(void)
{
    int coordinate;//選項位置
    int problem_save;//儲存隨機題目
    int options_save[4] = { 0 };//儲存個選項位置
    srand((unsigned)time(NULL));

    problem_save = General_Education_problem();//隨機題目

    options_save[0] = rand() % 4 + 1;//初始隨機答案
    coordinate = question_options_coordinate(options_save[0]);//給予隨機數,設定各選項座標
    General_Education_options_true(problem_save, coordinate);//根據隨機的題目輸出正確選項

    do { options_save[1] = rand() % 4 + 1; } while (options_save[0] == options_save[1]);//使隨機出來的數不等於前1個
    coordinate = question_options_coordinate(options_save[1]);//給予隨機數,設定各選項座標
    General_Education_options_false1(problem_save, coordinate);//根據隨機的題目輸出錯誤選項1

    do { options_save[2] = rand() % 4 + 1; } while (options_save[0] == options_save[2] || options_save[1] == options_save[2]);//使隨機出來的數不等於前2個
    coordinate = question_options_coordinate(options_save[2]);//給予隨機數,設定各選項座標
    General_Education_options_false2(problem_save, coordinate);//根據隨機的題目輸出錯誤選項2

    do { options_save[3] = rand() % 4 + 1; } while (options_save[0] == options_save[3] || options_save[1] == options_save[3] || options_save[2] == options_save[3]);//使隨機出來的數不等於前3個
    coordinate = question_options_coordinate(options_save[3]);//給予隨機數,設定各選項座標
    General_Education_options_false3(problem_save, coordinate);//根據隨機的題目輸出錯誤選項3

    return options_save[0];//返回正確答案位置
}
//*********************************************************************
int General_Education_problem(void)//隨機題目
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
        outtextxy(50, 300, "社會主義和共產主義因部分理念相同,而常被一起討論,但實際上兩者間仍有部分差異");//輸出文字(文字x,文字y,"文字")
        outtextxy(50, 330, ",下列關於兩者的比較敘述,何者正確？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 2:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "根據我國憲法與憲法增修條文之相關規定,下列關於監察院職權之敘述,何者正確？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 3:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "依據我國相關法令判斷,下列有關我國直轄市市長暨市議員,及縣市長暨縣市議員選舉制度之配對,何者正確？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 4:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "民國 92 年制定的公民投票法,目的在讓人民以直接投票的方式,對法律或公共政策表達意見,");//輸出文字(文字x,文字y,"文字")
        outtextxy(50, 330, "就其性質 而言,該法屬於我國憲法上所保障的何項人民基本權利？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 5:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "為因應鮮奶漲價,國內各大連鎖超商業者同時調漲含乳咖啡的價格,業者的行為,可能違反下列何種法律的規定？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 6:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "關於非婚生子女、養子女、親生子女,在我國民法親屬編與繼承編的相關規定,下列敘述何者正確？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 7:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "大法官解釋案件的審理程序,下列何者正確？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 8:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "和解是由雙方當事人,在不違反其自由意志的情形下,就爭議進行溝通,");//輸出文字(文字x,文字y,"文字")
        outtextxy(50, 330, "使雙方達到共識,自行解決爭議的方式,關於和解的敘述,下列何者正確？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 9:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "廠商提供一定數量商品到市場後,其所收到的全部貨款超過他願意供給的最低要求價格,");//輸出文字(文字x,文字y,"文字")
        outtextxy(50, 330, "這個部分的差額在經濟學上稱為：");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 10:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "某正義論的學者主張,一個正義的社會應重視每個人的權利公平,使處境不利者得到最大的照顧,");//輸出文字(文字x,文字y,"文字")
        outtextxy(50, 330, "下列何者最符合上述的主張？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 11:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "某蕭因性侵案入監服刑,法院令其獲釋後仍須接受列管與治療,以避免其再犯,此種處置方式較偏向何種刑罰理論？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 12:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "伴隨產業結構改變而失業的勞工,政府用下列何種方式最能對症下藥？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 13:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "下列有關大學生權利救濟的流程,何者錯誤？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 14:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "刑法中對於刑法的種類包含主刑與從刑,依據現行刑法,下列何者屬於從刑？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 15:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "阿寶國家考試,實習及格後取得律師證書,此證書的核發屬於下列何種行政行為？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 16:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "針對我國「政務官」與「事務官」的比較,依相關法律規定,下列敘述何者正確？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 17:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "下列何者不屬於刑法規定得減刑的範疇？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 18:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "某國去年失業率高達 15%,創歷史新高,此一失業率是如何計算而來？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 19:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "甲積欠乙 20 萬元的房屋租金遲遲不還,歷經 10 年後,乙才向甲請求給付租金,甲是否可拒絕給付？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    case 20:
        setfillcolor(WHITE);//設置矩形填充色
        fillrectangle(0, 300, 800, 500);//繪製矩形(左,上,右,下)
        outtextxy(50, 300, "隨著全球化的發展,國際交流愈來愈頻繁,關於國際交流之敘述,下列何者正確？");//輸出文字(文字x,文字y,"文字")
        ABCD();
        break;
    }
    return problem;//回傳隨機到的題目
}
//*********************************************************************
int General_Education_options_true(int problem, int coordinate)//正確選項
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "共產主義以階級鬥爭進行改革,社會主義則主張漸進改革");//輸出文字(文字x,文字y,"文字")
        break;
    case 2:
        outtextxy(70, coordinate, "針對決算的審核報告於 3 個月內向立法院提出");//輸出文字(文字x,文字y,"文字")
        break;
    case 3:
        outtextxy(70, coordinate, " 縣市議員：複數選區單記制");//輸出文字(文字x,文字y,"文字")
        break;
    case 4:
        outtextxy(70, coordinate, "創制複決權");//輸出文字(文字x,文字y,"文字")
        break;
    case 5:
        outtextxy(70, coordinate, "公平交易法");//輸出文字(文字x,文字y,"文字")
        break;
    case 6:
        outtextxy(70, coordinate, "非婚生子女和生母之間的關係,視為婚生子女");//輸出文字(文字x,文字y,"文字")
        break;
    case 7:
        outtextxy(70, coordinate, "有關審查庭之組織及程序,涉及其職權之行使,另於憲法法庭審理規則定之");//輸出文字(文字x,文字y,"文字")
        break;
    case 8:
        outtextxy(70, coordinate, "訴訟上的和解與確定判決有相同效力");//輸出文字(文字x,文字y,"文字")
        break;
    case 9:
        outtextxy(70, coordinate, "生產者剩餘");//輸出文字(文字x,文字y,"文字")
        break;
    case 10:
        outtextxy(70, coordinate, "《建築法》規定所有的公共建築物都須設有「無障礙設施」");//輸出文字(文字x,文字y,"文字")
        break;
    case 11:
        outtextxy(70, coordinate, "特別預防理論");//輸出文字(文字x,文字y,"文字")
        break;
    case 12:
        outtextxy(70, coordinate, "加強教育與職業訓練，增加就業能力");//輸出文字(文字x,文字y,"文字")
        break;
    case 13:
        outtextxy(70, coordinate, "不服行政法院判決，得向監察院聲請憲法解釋");//輸出文字(文字x,文字y,"文字")
        break;
    case 14:
        outtextxy(70, coordinate, "褫奪公權");//輸出文字(文字x,文字y,"文字")
        break;
    case 15:
        outtextxy(70, coordinate, "行政處分");//輸出文字(文字x,文字y,"文字")
        break;
    case 16:
        outtextxy(70, coordinate, "政務官需負責規劃政策，事務官應負責政策執行");//輸出文字(文字x,文字y,"文字")
        break;
    case 17:
        outtextxy(70, coordinate, "30 歲的大明酒後駕車，撞傷路人");//輸出文字(文字x,文字y,"文字")
        break;
    case 18:
        outtextxy(70, coordinate, "（失業人口／勞動人口）×100%");//輸出文字(文字x,文字y,"文字")
        break;
    case 19:
        outtextxy(70, coordinate, "可以，因租金請求權的消滅時效只有 5 年");//輸出文字(文字x,文字y,"文字")
        break;
    case 20:
        outtextxy(70, coordinate, "聯合國無法直接管轄各成員國之國際關係與國內治理");//輸出文字(文字x,文字y,"文字")
        break;
    }
    return 0;
}
//*********************************************************************
int General_Education_options_false1(int problem, int coordinate)//錯誤選項1
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "共產主義在改造資本主義,社會主義以無階級社會為理想");//輸出文字(文字x,文字y,"文字")
        break;
    case 2:
        outtextxy(70, coordinate, "對下屬施壓的官員,可針對其個人行為進行糾正");//輸出文字(文字x,文字y,"文字")
        break;
    case 3:
        outtextxy(70, coordinate, "縣市長：比例代表制");//輸出文字(文字x,文字y,"文字")
        break;
    case 4:
        outtextxy(70, coordinate, "形式受益權");//輸出文字(文字x,文字y,"文字")
        break;
    case 5:
        outtextxy(70, coordinate, "食品衛生管理法");//輸出文字(文字x,文字y,"文字")
        break;
    case 6:
        outtextxy(70, coordinate, "養子女和親生子女在法律上的地位不同,繼承父母遺產的順位也不同");//輸出文字(文字x,文字y,"文字")
        break;
    case 7:
        outtextxy(70, coordinate, "統一解釋法律及命令案件,大法官現有總額三分之二之出席,出席人三分之二之同意");//輸出文字(文字x,文字y,"文字")
        break;
    case 8:
        outtextxy(70, coordinate, "訴訟外的和解和訴訟上的和解效力相同");//輸出文字(文字x,文字y,"文字")
        break;
    case 9:
        outtextxy(70, coordinate, "供給價格");//輸出文字(文字x,文字y,"文字")
        break;
    case 10:
        outtextxy(70, coordinate, "《民法》規定父母對於未成年子女有「保護照顧」的責任");//輸出文字(文字x,文字y,"文字")
        break;
    case 11:
        outtextxy(70, coordinate, "一般預防理論");//輸出文字(文字x,文字y,"文字")
        break;
    case 12:
        outtextxy(70, coordinate, "提供求才求職的資訊，加強就業媒合");//輸出文字(文字x,文字y,"文字")
        break;
    case 13:
        outtextxy(70, coordinate, "不服訴願決定得向行政法院提起行政訴訟");//輸出文字(文字x,文字y,"文字")
        break;
    case 14:
        outtextxy(70, coordinate, "沒收");//輸出文字(文字x,文字y,"文字")
        break;
    case 15:
        outtextxy(70, coordinate, "行政契約");//輸出文字(文字x,文字y,"文字")
        break;
    case 16:
        outtextxy(70, coordinate, "政務官與事務官均受公務人員任用法保障，不得任意免職");//輸出文字(文字x,文字y,"文字")
        break;
    case 17:
        outtextxy(70, coordinate, "85 歲的老翁闖紅燈導致車禍，造成數人受傷");//輸出文字(文字x,文字y,"文字")
        break;
    case 18:
        outtextxy(70, coordinate, "（失業人口／民間人口）×100%");//輸出文字(文字x,文字y,"文字")
        break;
    case 19:
        outtextxy(70, coordinate, "可以，因雙方債權債務關係逾 2 年已消滅");//輸出文字(文字x,文字y,"文字")
        break;
    case 20:
        outtextxy(70, coordinate, "國際組織下建立的國際協定要求所有成員國皆須加入");//輸出文字(文字x,文字y,"文字")
        break;
    }
    return 0;
}
//*********************************************************************
int General_Education_options_false2(int problem, int coordinate)//錯誤選項2
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "社會主義強調剩餘價值論,共產主義則強調福利國家");//輸出文字(文字x,文字y,"文字")
        break;
    case 2:
        outtextxy(70, coordinate, "對於總統提名考試院院長的任命可行使同意權");//輸出文字(文字x,文字y,"文字")
        break;
    case 3:
        outtextxy(70, coordinate, "直轄市議員：單一選舉區絕對多數制");//輸出文字(文字x,文字y,"文字")
        break;
    case 4:
        outtextxy(70, coordinate, "實質平等權");//輸出文字(文字x,文字y,"文字")
        break;
    case 5:
        outtextxy(70, coordinate, "商品標示法");//輸出文字(文字x,文字y,"文字")
        break;
    case 6:
        outtextxy(70, coordinate, "生父或生母均可透過遺囑,完全排除特定非婚生子女的繼承權利");//輸出文字(文字x,文字y,"文字")
        break;
    case 7:
        outtextxy(70, coordinate, "大法官若發現法律有違憲疑義,主動以會議方式,進行討論作成決議");//輸出文字(文字x,文字y,"文字")
        break;
    case 8:
        outtextxy(70, coordinate, "任何民事案件刑事案件都可申請和解");//輸出文字(文字x,文字y,"文字")
        break;
    case 9:
        outtextxy(70, coordinate, "供給法則");//輸出文字(文字x,文字y,"文字")
        break;
    case 10:
        outtextxy(70, coordinate, "《所得稅法》規定人民有所得皆須繳納綜合所得稅");//輸出文字(文字x,文字y,"文字")
        break;
    case 11:
        outtextxy(70, coordinate, "絕對理論");//輸出文字(文字x,文字y,"文字")
        break;
    case 12:
        outtextxy(70, coordinate, "採行擴張性貨幣政策，刺激景氣復甦");//輸出文字(文字x,文字y,"文字")
        break;
    case 13:
        outtextxy(70, coordinate, "不服學校申訴決定得向上級主管機關提起訴願");//輸出文字(文字x,文字y,"文字")
        break;
    case 14:
        outtextxy(70, coordinate, "拘役");//輸出文字(文字x,文字y,"文字")
        break;
    case 15:
        outtextxy(70, coordinate, "行政計畫");//輸出文字(文字x,文字y,"文字")
        break;
    case 16:
        outtextxy(70, coordinate, "政務官需對政策負責，但不適用公務員懲戒規定");//輸出文字(文字x,文字y,"文字")
        break;
    case 17:
        outtextxy(70, coordinate, "53 歲的瘖啞人阿龍至便利商店竊盜點數卡");//輸出文字(文字x,文字y,"文字")
        break;
    case 18:
        outtextxy(70, coordinate, "（失業人口／就業人口）×100%");//輸出文字(文字x,文字y,"文字")
        break;
    case 19:
        outtextxy(70, coordinate, "不可以，因租金請求權的消滅時效有 15 年");//輸出文字(文字x,文字y,"文字")
        break;
    case 20:
        outtextxy(70, coordinate, "各國政府之交流仍以中央政府外交機關為限");//輸出文字(文字x,文字y,"文字")
        break;
    }
    return 0;
}
//*********************************************************************
int General_Education_options_false3(int problem, int coordinate)//錯誤選項3
{
    switch (problem)
    {
    case 1:
        outtextxy(70, coordinate, "社會主義比較重視經濟平等,共產主義強調個人財富");//輸出文字(文字x,文字y,"文字")
        break;
    case 2:
        outtextxy(70, coordinate, "針對檢調機關未改善刑求一事可進行彈劾");//輸出文字(文字x,文字y,"文字")
        break;
    case 3:
        outtextxy(70, coordinate, "直轄市市長：複數選舉區相對多數制");//輸出文字(文字x,文字y,"文字")
        break;
    case 4:
        outtextxy(70, coordinate, "意見自由權");//輸出文字(文字x,文字y,"文字")
        break;
    case 5:
        outtextxy(70, coordinate, "消費者保護法");//輸出文字(文字x,文字y,"文字")
        break;
    case 6:
        outtextxy(70, coordinate, "養子女可同時享有養父母與生父生母的遺產繼承權");//輸出文字(文字x,文字y,"文字")
        break;
    case 7:
        outtextxy(70, coordinate, "解釋憲法案件,大法官現有總額過半數之出席,出席人過半數之同意");//輸出文字(文字x,文字y,"文字")
        break;
    case 8:
        outtextxy(70, coordinate, "和解迅速簡便其效力大於調解與仲裁");//輸出文字(文字x,文字y,"文字")
        break;
    case 9:
        outtextxy(70, coordinate, "生產成本");//輸出文字(文字x,文字y,"文字")
        break;
    case 10:
        outtextxy(70, coordinate, "《憲法》規定人民享有言論講學著作出版的自由");//輸出文字(文字x,文字y,"文字")
        break;
    case 11:
        outtextxy(70, coordinate, "應報理論");//輸出文字(文字x,文字y,"文字")
        break;
    case 12:
        outtextxy(70, coordinate, "採行緊縮性貨幣政策，減緩成長力道");//輸出文字(文字x,文字y,"文字")
        break;
    case 13:
        outtextxy(70, coordinate, "得依學校的申訴制度提出申訴");//輸出文字(文字x,文字y,"文字")
        break;
    case 14:
        outtextxy(70, coordinate, "罰金");//輸出文字(文字x,文字y,"文字")
        break;
    case 15:
        outtextxy(70, coordinate, "行政指導");//輸出文字(文字x,文字y,"文字")
        break;
    case 16:
        outtextxy(70, coordinate, "政務官經國家考試任用，事務官經政治任命產生");//輸出文字(文字x,文字y,"文字")
        break;
    case 17:
        outtextxy(70, coordinate, "16 歲的阿花在網路留言霸凌她討厭的同學");//輸出文字(文字x,文字y,"文字")
        break;
    case 18:
        outtextxy(70, coordinate, "（失業人口／總人口）×100%");//輸出文字(文字x,文字y,"文字")
        break;
    case 19:
        outtextxy(70, coordinate, "不可以，因出租人未向法院聲請強制執行");//輸出文字(文字x,文字y,"文字")
        break;
    case 20:
        outtextxy(70, coordinate, "國民外交係指國民受政府囑託進行跨國交流");//輸出文字(文字x,文字y,"文字")
        break;
    }
    return 0;
}