#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include<cstdio>
#include <GL/gl.h>
#define PI          3.141516
#include<math.h>
#include<stdlib.h>

 // GLUT, include glu.h and gl.h
#include <vector>

using namespace std;
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void renderBitmapString(float x, float y, float z, void *font, char *string) {
    char *c;
    glRasterPos3f(x, y,z);
    for (c=string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}


void circle(float x, float y, float radius, float height)//, float r, float g, float b)
{
    int triangleAmount = 360;
    //glBegin(GL_TRIANGLE_FAN);
    //glColor3f(rf,gf,1.0f);

    //glColor3ub(color.r, color.g, color.b);
    glVertex2f(x, y); // center of circle
    for (int i = 0; i <= 360; i++)
        glVertex2f(x + (radius * cos(i * 2 * 3.1416 / triangleAmount)), y + (height * sin(i * 2 * 3.1416 / triangleAmount)));
    glEnd();
}


void filledCircle(float c1, float c2, float r, float x, float y, float z)
{
    int i=0;
    int tringle2=50;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f(x, y, z);
    glVertex2f (c1,c2);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f(
                    c1+(r*cos(i*tp2/tringle2)),
                    c2+(r*sin(i*tp2/tringle2))
                    );
    }
    glEnd ();

    glFlush();  // Render now
}


GLfloat position = 0;
GLfloat speed = 1;
GLfloat water_shade_position = 0;
GLfloat water_shade_speed = 1;

void update(int value)
{

    if(position > 1920)
        position = 0;

    position += speed;

    if(water_shade_position > 1920)
        water_shade_position = 0;

    water_shade_position += water_shade_speed;


    glutPostRedisplay();
    glutTimerFunc(20, update, 0);
}



void mountain1(){

    glVertex2f(0,425);
    glVertex2f(0,641);
    glVertex2f(27,639);
    glVertex2f(35,639);
    glVertex2f(44,635);
    glVertex2f(153,615);
    glVertex2f(166,610);
    glVertex2f(174,607);
    glVertex2f(214,623);
    glVertex2f(259,646);
    glVertex2f(275,653);
    glVertex2f(295,662);
    glVertex2f(309,668);
    glVertex2f(313,669);
    glVertex2f(321,670);
    glVertex2f(331,668);
    glVertex2f(346,666);
    glVertex2f(359,662);
    glVertex2f(365,659);
    glVertex2f(374,657);
    glVertex2f(380,654);
    glVertex2f(387,651);
    glVertex2f(391,649);
    glVertex2f(401,657);
    glVertex2f(410,664);
    glVertex2f(421,672);
    glVertex2f(437,683);
    glVertex2f(455,696);
    glVertex2f(471,708);
    glVertex2f(491,721);
    glVertex2f(507,730);
    glVertex2f(523,738);
    glVertex2f(530,739);
    glVertex2f(540,736);
    glVertex2f(553,724);
    glVertex2f(564,714);
    glVertex2f(579,703);
    glVertex2f(597,689);
    glVertex2f(611,678);
    glVertex2f(620,667);
    glVertex2f(628,657);
    glVertex2f(631,658);
    glVertex2f(635,656);
    glVertex2f(640,652);
    glVertex2f(644,650);
    glVertex2f(652,647);
    glVertex2f(655,646);
    glVertex2f(658,644);
    glVertex2f(664,643);
    glVertex2f(669,643);
    glVertex2f(677,644);
    glVertex2f(683,648);
    glVertex2f(690,654);
    glVertex2f(705,663);
    glVertex2f(716,671);
    glVertex2f(725,677);
    glVertex2f(734,683);
    glVertex2f(745,691);
    glVertex2f(755,698);
    glVertex2f(764,704);
    glVertex2f(778,715);
    glVertex2f(788,723);
    glVertex2f(799,731);
    glVertex2f(808,735);
    glVertex2f(817,743);
    glVertex2f(821,742);
    glVertex2f(833,737);
    glVertex2f(837,736);
    glVertex2f(842,733);
    glVertex2f(848,730);
    glVertex2f(853,727);
    glVertex2f(859,724);
    glVertex2f(864,720);
    glVertex2f(870,716);
    glVertex2f(876,714);
    glVertex2f(880,712);
    glVertex2f(884,711);
    glVertex2f(891,711);
    glVertex2f(897,713);
    glVertex2f(902,717);
    glVertex2f(907,720);
    glVertex2f(910,724);
    glVertex2f(916,729);
    glVertex2f(932,741);
    glVertex2f(950,753);
    glVertex2f(971,768);
    glVertex2f(991,785);
    glVertex2f(1014,799);
    glVertex2f(1026,807);
    glVertex2f(1039,814);
    glVertex2f(1052,822);
    glVertex2f(1062,826);
    glVertex2f(1069,829);
    glVertex2f(1032,811);
    glVertex2f(1043,817);
    glVertex2f(1050,821);
    glVertex2f(1060,825);
    glVertex2f(1067,828);
    glVertex2f(1074,830);
    glVertex2f(1116,814);
    glVertex2f(1131,803);
    glVertex2f(1145,792);
    glVertex2f(1164,785);
    glVertex2f(1205,764);
    glVertex2f(1234,751);
    glVertex2f(1265,740);
    glVertex2f(1285,726);
    glVertex2f(1293,720);
    glVertex2f(1323,729);
    glVertex2f(1345,737);
    glVertex2f(1366,743);
    glVertex2f(1375,745);
    glVertex2f(1401,733);
    glVertex2f(1419,716);
    glVertex2f(1438,704);
    glVertex2f(1455,694);
    glVertex2f(1467,689);
    glVertex2f(1476,678);
    glVertex2f(1478,676);
    glVertex2f(1498,688);
    glVertex2f(1518,699);
    glVertex2f(1536,708);
    glVertex2f(1633,664);
    glVertex2f(1671,648);
    glVertex2f(1682,645);
    glVertex2f(1815,592);
    glVertex2f(1884,610);
    glVertex2f(1920,425);

    glEnd();

}


void mountain1_shadow_1(){

    glVertex2f(630,657);
    glVertex2f(629,656);
    glVertex2f(629,653);
    glVertex2f(630,650);
    glVertex2f(631,647);
    glVertex2f(633,644);
    glVertex2f(634,641);
    glVertex2f(637,637);
    glVertex2f(639,635);
    glVertex2f(640,632);
    glVertex2f(642,630);
    glVertex2f(643,628);
    glVertex2f(642,625);
    glVertex2f(639,625);
    glVertex2f(635,625);
    glVertex2f(632,626);
    glVertex2f(627,627);
    glVertex2f(623,628);
    glVertex2f(620,630);
    glVertex2f(616,631);
    glVertex2f(612,633);
    glVertex2f(608,635);
    glVertex2f(605,637);
    glVertex2f(601,640);
    glVertex2f(596,642);
    glVertex2f(593,644);
    glVertex2f(590,646);
    glVertex2f(587,647);
    glVertex2f(586,650);
    glVertex2f(588,651);
    glVertex2f(591,651);
    glVertex2f(594,649);
    glVertex2f(597,647);
    glVertex2f(601,647);
    glVertex2f(605,648);
    glVertex2f(605,650);
    glVertex2f(602,653);
    glVertex2f(600,657);
    glVertex2f(596,660);
    glVertex2f(593,664);
    glVertex2f(589,667);
    glVertex2f(584,669);
    glVertex2f(581,672);
    glVertex2f(575,674);
    glVertex2f(577,676);
    glVertex2f(581,678);
    glVertex2f(581,680);
    glVertex2f(578,682);
    glVertex2f(575,683);
    glVertex2f(571,685);
    glVertex2f(567,687);
    glVertex2f(561,690);
    glVertex2f(558,693);
    glVertex2f(554,696);
    glVertex2f(550,699);
    glVertex2f(547,702);
    glVertex2f(545,705);
    glVertex2f(545,708);
    glVertex2f(546,711);
    glVertex2f(546,713);
    glVertex2f(544,716);
    glVertex2f(541,718);
    glVertex2f(538,722);
    glVertex2f(536,724);
    glVertex2f(537,728);
    glVertex2f(535,732);
    glVertex2f(533,736);
    glVertex2f(530,739);
    glVertex2f(540,736);
    glVertex2f(553,724);
    glVertex2f(564,714);
    glVertex2f(579,703);
    glVertex2f(597,689);
    glVertex2f(611,678);
    glVertex2f(620,667);
    glVertex2f(628,657);

    glEnd();
}


void mountain1_shadow_2(){

    glVertex2f(1279,722);
    glVertex2f(1273,721);
    glVertex2f(1268,719);
    glVertex2f(1265,716);
    glVertex2f(1261,713);
    glVertex2f(1256,709);
    glVertex2f(1255,703);
    glVertex2f(1257,698);
    glVertex2f(1263,695);
    glVertex2f(1268,692);
    glVertex2f(1271,690);
    glVertex2f(1276,687);
    glVertex2f(1284,682);
    glVertex2f(1288,678);
    glVertex2f(1294,674);
    glVertex2f(1302,670);
    glVertex2f(1299,668);
    glVertex2f(1290,670);
    glVertex2f(1278,675);
    glVertex2f(1269,679);
    glVertex2f(1259,685);
    glVertex2f(1250,689);
    glVertex2f(1240,694);
    glVertex2f(1230,699);
    glVertex2f(1222,704);
    glVertex2f(1214,709);
    glVertex2f(1207,713);
    glVertex2f(1201,714);
    glVertex2f(1195,712);
    glVertex2f(1187,707);
    glVertex2f(1182,703);
    glVertex2f(1176,698);
    glVertex2f(1170,696);
    glVertex2f(1162,701);
    glVertex2f(1160,707);
    glVertex2f(1156,712);
    glVertex2f(1152,718);
    glVertex2f(1149,725);
    glVertex2f(1142,732);
    glVertex2f(1137,735);
    glVertex2f(1131,739);
    glVertex2f(1128,746);
    glVertex2f(1127,747);
    glVertex2f(1127,754);
    glVertex2f(1124,763);
    glVertex2f(1120,766);
    glVertex2f(1118,767);
    glVertex2f(1120,769);
    glVertex2f(1122,773);
    glVertex2f(1122,778);
    glVertex2f(1119,784);
    glVertex2f(1115,789);
    glVertex2f(1111,794);
    glVertex2f(1108,799);
    glVertex2f(1102,803);
    glVertex2f(1096,809);
    glVertex2f(1093,814);
    glVertex2f(1087,819);
    glVertex2f(1082,824);
    glVertex2f(1076,829);
    glVertex2f(1074,830);
    glVertex2f(1116,814);
    glVertex2f(1131,803);
    glVertex2f(1145,792);
    glVertex2f(1164,785);
    glVertex2f(1205,764);
    glVertex2f(1234,751);
    glVertex2f(1265,740);
    glVertex2f(1285,726);

    glEnd();

}

void mountain1_shadow_3() {

    glVertex2f(1469,673);
    glVertex2f(1468,676);
    glVertex2f(1465,676);
    glVertex2f(1461,676);
    glVertex2f(1457,675);
    glVertex2f(1455,673);
    glVertex2f(1456,670);
    glVertex2f(1457,668);
    glVertex2f(1459,666);
    glVertex2f(1460,664);
    glVertex2f(1461,661);
    glVertex2f(1461,660);
    glVertex2f(1459,659);
    glVertex2f(1456,660);
    glVertex2f(1453,662);
    glVertex2f(1450,664);
    glVertex2f(1447,666);
    glVertex2f(1443,668);
    glVertex2f(1438,670);
    glVertex2f(1434,672);
    glVertex2f(1430,675);
    glVertex2f(1425,678);
    glVertex2f(1422,680);
    glVertex2f(1420,684);
    glVertex2f(1422,687);
    glVertex2f(1419,691);
    glVertex2f(1411,691);
    glVertex2f(1409,692);
    glVertex2f(1405,693);
    glVertex2f(1402,695);
    glVertex2f(1399,697);
    glVertex2f(1397,699);
    glVertex2f(1395,701);
    glVertex2f(1395,703);
    glVertex2f(1394,705);
    glVertex2f(1394,706);
    glVertex2f(1396,707);
    glVertex2f(1398,707);
    glVertex2f(1402,706);
    glVertex2f(1405,706);
    glVertex2f(1406,707);
    glVertex2f(1407,708);
    glVertex2f(1405,710);
    glVertex2f(1395,720);
    glVertex2f(1393,721);
    glVertex2f(1391,722);
    glVertex2f(1390,722);
    glVertex2f(1388,722);
    glVertex2f(1386,723);
    glVertex2f(1385,724);
    glVertex2f(1384,726);
    glVertex2f(1382,727);
    glVertex2f(1380,728);
    glVertex2f(1378,729);
    glVertex2f(1376,729);
    glVertex2f(1374,730);
    glVertex2f(1373,731);
    glVertex2f(1372,732);
    glVertex2f(1371,734);
    glVertex2f(1372,735);
    glVertex2f(1374,736);
    glVertex2f(1376,735);
    glVertex2f(1378,735);
    glVertex2f(1379,735);
    glVertex2f(1381,734);
    glVertex2f(1382,735);
    glVertex2f(1382,737);
    glVertex2f(1380,739);
    glVertex2f(1375,745);
    glVertex2f(1401,733);
    glVertex2f(1419,716);
    glVertex2f(1438,704);
    glVertex2f(1455,694);

    glEnd();

}


void mountain2() {

    glVertex2f(0, 639);
    glVertex2f(38, 635);
    glVertex2f(47, 633);
    glVertex2f(70, 639);
    glVertex2f(81, 634);
    glVertex2f(114, 645);
    glVertex2f(119, 642);
    glVertex2f(156, 659);
    glVertex2f(193, 638);
    glVertex2f(199, 636);
    glVertex2f(218, 620);
    glVertex2f(229, 613);
    glVertex2f(237, 610);
    glVertex2f(243, 607);
    glVertex2f(254, 609);
    glVertex2f(280, 611);
    glVertex2f(296, 610);
    glVertex2f(304, 610);
    glVertex2f(315, 604);
    glVertex2f(327, 597);
    glVertex2f(347, 589);
    glVertex2f(373, 581);
    glVertex2f(407, 578);
    glVertex2f(439, 577);
    glVertex2f(463, 591);
    glVertex2f(472, 596);
    glVertex2f(482, 598);
    glVertex2f(487, 599);
    glVertex2f(507, 597);
    glVertex2f(551, 600);
    glVertex2f(564, 605);
    glVertex2f(575, 600);
    glVertex2f(596, 590);
    glVertex2f(613, 583);
    glVertex2f(655, 578);
    glVertex2f(662, 576);
    glVertex2f(686, 565);
    glVertex2f(748, 537);
    glVertex2f(769, 532);
    glVertex2f(793, 534);
    glVertex2f(821, 519);
    glVertex2f(845, 513);
    glVertex2f(881, 503);
    glVertex2f(900, 425);
    glVertex2f(0, 425);
    glEnd();
}

void mountain3() {

    glVertex2f(1920, 425);
    glVertex2f(0, 425);
    glVertex2f(0, 427);
    glVertex2f(40, 431);
    glVertex2f(74, 436);
    glVertex2f(141, 448);
    glVertex2f(189, 450);
    glVertex2f(249, 455);
    glVertex2f(321, 465);
    glVertex2f(404, 484);
    glVertex2f(439, 488);
    glVertex2f(465, 491);
    glVertex2f(491, 496);
    glVertex2f(516, 498);
    glVertex2f(637, 485);
    glVertex2f(649, 482);
    glVertex2f(670, 480);
    glVertex2f(693, 482);
    glVertex2f(722, 485);
    glVertex2f(734, 487);
    glVertex2f(770, 491);
    glVertex2f(808, 498);
    glVertex2f(829, 499);
    glVertex2f(847, 503);
    glVertex2f(865, 509);
    glVertex2f(881, 512);
    glVertex2f(892, 516);
    glVertex2f(906, 514);
    glVertex2f(919, 510);
    glVertex2f(942, 506);
    glVertex2f(956, 503);
    glVertex2f(978, 500);
    glVertex2f(987, 502);
    glVertex2f(996, 506);
    glVertex2f(1004, 511);
    glVertex2f(1025, 516);
    glVertex2f(1043, 517);
    glVertex2f(1063, 519);
    glVertex2f(1082, 519);
    glVertex2f(1090, 525);
    glVertex2f(1104, 531);
    glVertex2f(1111, 539);
    glVertex2f(1126, 545);
    glVertex2f(1140, 551);
    glVertex2f(1152, 551);
    glVertex2f(1164, 551);
    glVertex2f(1176, 549);
    glVertex2f(1186, 551);
    glVertex2f(1196, 553);
    glVertex2f(1211, 556);
    glVertex2f(1220, 562);
    glVertex2f(1229, 566);
    glVertex2f(1239, 569);
    glVertex2f(1255, 573);
    glVertex2f(1269, 577);
    glVertex2f(1281, 582);
    glVertex2f(1289, 587);
    glVertex2f(1305, 599);
    glVertex2f(1330, 609);
    glVertex2f(1442, 604);
    glVertex2f(1457, 602);
    glVertex2f(1468, 599);
    glVertex2f(1479, 598);
    glVertex2f(1491, 600);
    glVertex2f(1505, 604);
    glVertex2f(1518, 608);
    glVertex2f(1527, 611);
    glVertex2f(1547, 610);
    glVertex2f(1563, 611);
    glVertex2f(1584, 615);
    glVertex2f(1597, 618);
    glVertex2f(1609, 620);
    glVertex2f(1620, 622);
    glVertex2f(1641, 629);
    glVertex2f(1654, 634);
    glVertex2f(1665, 635);
    glVertex2f(1673, 640);
    glVertex2f(1685, 645);
    glVertex2f(1696, 645);
    glVertex2f(1709, 645);
    glVertex2f(1725, 642);
    glVertex2f(1735, 638);
    glVertex2f(1746, 636);
    glVertex2f(1761, 632);
    glVertex2f(1777, 628);
    glVertex2f(1791, 628);
    glVertex2f(1800, 629);
    glVertex2f(1811, 633);
    glVertex2f(1819, 635);
    glVertex2f(1826, 636);
    glVertex2f(1842, 636);
    glVertex2f(1851, 634);
    glVertex2f(1862, 634);
    glVertex2f(1870, 634);
    glVertex2f(1880, 636);
    glVertex2f(1890, 638);
    glVertex2f(1899, 640);
    glVertex2f(1908, 644);
    glVertex2f(1920, 640);
    glEnd();

}

void mountain4() {
    glVertex2f(1668, 425);
    glVertex2f(1668, 429);
    glVertex2f(1668, 434);
    glVertex2f(1669, 441);
    glVertex2f(1668, 448);
    glVertex2f(1668, 456);
    glVertex2f(1670, 466);
    glVertex2f(1671, 474);
    glVertex2f(1673, 479);
    glVertex2f(1674, 480);
    glVertex2f(1675, 482);
    glVertex2f(1676, 484);
    glVertex2f(1676, 487);
    glVertex2f(1677, 492);
    glVertex2f(1679, 504);
    glVertex2f(1679, 506);
    glVertex2f(1679, 508);
    glVertex2f(1679, 509);
    glVertex2f(1680, 511);
    glVertex2f(1680, 512);
    glVertex2f(1685, 524);
    glVertex2f(1685, 525);
    glVertex2f(1685, 526);
    glVertex2f(1685, 527);
    glVertex2f(1690, 537);
    glVertex2f(1690, 538);
    glVertex2f(1690, 539);
    glVertex2f(1691, 540);
    glVertex2f(1696, 543);
    glVertex2f(1701, 547);
    glVertex2f(1704, 549);
    glVertex2f(1708, 551);
    glVertex2f(1709, 553);
    glVertex2f(1710, 555);
    glVertex2f(1713, 560);
    glVertex2f(1715, 565);
    glVertex2f(1718, 570);
    glVertex2f(1723, 581);
    glVertex2f(1727, 584);
    glVertex2f(1732, 586);
    glVertex2f(1738, 589);
    glVertex2f(1742, 591);
    glVertex2f(1745, 592);
    glVertex2f(1749, 594);
    glVertex2f(1751, 595);
    glVertex2f(1753, 594);
    glVertex2f(1754, 594);
    glVertex2f(1755, 594);
    glVertex2f(1757, 595);
    glVertex2f(1758, 595);
    glVertex2f(1763, 602);
    glVertex2f(1764, 605);
    glVertex2f(1769, 605);
    glVertex2f(1770, 606);
    glVertex2f(1772, 607);
    glVertex2f(1774, 608);
    glVertex2f(1775, 609);
    glVertex2f(1775, 610);
    glVertex2f(1778, 619);
    glVertex2f(1780, 624);
    glVertex2f(1780, 625);
    glVertex2f(1785, 626);
    glVertex2f(1788, 626);
    glVertex2f(1791, 625);
    glVertex2f(1794, 624);
    glVertex2f(1797, 623);
    glVertex2f(1803, 622);
    glVertex2f(1807, 621);
    glVertex2f(1809, 620);
    glVertex2f(1812, 621);
    glVertex2f(1816, 623);
    glVertex2f(1817, 623);
    glVertex2f(1817, 624);
    glVertex2f(1820, 629);
    glVertex2f(1823, 632);
    glVertex2f(1826, 636);
    glVertex2f(1829, 642);
    glVertex2f(1835, 655);
    glVertex2f(1837, 657);
    glVertex2f(1842, 667);
    glVertex2f(1845, 670);
    glVertex2f(1847, 671);
    glVertex2f(1851, 671);
    glVertex2f(1855, 671);
    glVertex2f(1857, 673);
    glVertex2f(1859, 676);
    glVertex2f(1860, 681);
    glVertex2f(1862, 684);
    glVertex2f(1866, 686);
    glVertex2f(1875, 687);
    glVertex2f(1882, 688);
    glVertex2f(1889, 691);
    glVertex2f(1896, 695);
    glVertex2f(1901, 700);
    glVertex2f(1907, 709);
    glVertex2f(1914, 717);
    glVertex2f(1920, 724);
    glVertex2f(1920, 425);
    glEnd();

}

void mountain5() {

    glVertex2f(1920, 350);
    glVertex2f(1602, 299);
    glVertex2f(1591, 294);
    glVertex2f(1586, 291);
    glVertex2f(1579, 290);
    glVertex2f(1574, 288);
    glVertex2f(1567, 286);
    glVertex2f(1561, 284);
    glVertex2f(1553, 280);
    glVertex2f(1544, 275);
    glVertex2f(1537, 272);
    glVertex2f(1526, 267);
    glVertex2f(1522, 264);
    glVertex2f(1516, 259);
    glVertex2f(1511, 253);
    glVertex2f(1507, 249);
    glVertex2f(1504, 243);
    glVertex2f(1501, 240);
    glVertex2f(1498, 237);
    glVertex2f(1498, 233);
    glVertex2f(1495, 229);
    glVertex2f(1494, 222);
    glVertex2f(1494, 217);
    glVertex2f(1494, 211);
    glVertex2f(1495, 206);
    glVertex2f(1497, 203);
    glVertex2f(1500, 200);
    glVertex2f(1504, 196);
    glVertex2f(1509, 191);
    glVertex2f(1514, 187);
    glVertex2f(1519, 184);
    glVertex2f(1523, 181);
    glVertex2f(1529, 178);
    glVertex2f(1534, 172);
    glVertex2f(1542, 167);
    glVertex2f(1555, 160);
    glVertex2f(1564, 156);
    glVertex2f(1578, 151);
    glVertex2f(1589, 148);
    glVertex2f(1599, 144);
    glVertex2f(1611, 138);
    glVertex2f(1622, 130);
    glVertex2f(1633, 125);
    glVertex2f(1646, 119);
    glVertex2f(1654, 113);
    glVertex2f(1666, 105);
    glVertex2f(1676, 97);
    glVertex2f(1687, 90);
    glVertex2f(1700, 78);
    glVertex2f(1704, 73);
    glVertex2f(1710, 67);
    glVertex2f(1717, 62);
    glVertex2f(1727, 55);
    glVertex2f(1735, 48);
    glVertex2f(1741, 40);
    glVertex2f(1745, 33);
    glVertex2f(1749, 25);
    glVertex2f(1751, 20);
    glVertex2f(1751, 14);
    glVertex2f(1747, 11);
    glVertex2f(1745, 0);
    glVertex2f(1920, 0);

    glEnd();

}



void water() {

    glVertex2f(0,425);
    glVertex2f(1920,425);
    glVertex2f(1920,300);
    glVertex2f(0,300);
    glEnd();

}

waterfall_with_shade_1() {

    glVertex2f(1725, 425);
    glVertex2f(1725, 426);
    glVertex2f(1725, 428);
    glVertex2f(1726, 431);
    glVertex2f(1726, 434);
    glVertex2f(1727, 439);
    glVertex2f(1728, 444);
    glVertex2f(1728, 446);
    glVertex2f(1729, 449);
    glVertex2f(1730, 457);
    glVertex2f(1731, 465);
    glVertex2f(1733, 475);
    glVertex2f(1734, 486);
    glVertex2f(1735, 492);
    glVertex2f(1738, 510);
    glVertex2f(1739, 515);
    glVertex2f(1741, 525);
    glVertex2f(1742, 536);
    glVertex2f(1745, 552);
    glVertex2f(1747, 562);
    glVertex2f(1748, 572);
    glVertex2f(1749, 574);
    glVertex2f(1750, 575);
    glVertex2f(1752, 575);
    glVertex2f(1754, 576);
    glVertex2f(1755, 577);
    glVertex2f(1754, 581);
    glVertex2f(1754, 587);
    glVertex2f(1755, 591);
    glVertex2f(1754, 594);
    glVertex2f(1756, 594);
    glVertex2f(1757, 595);
    glVertex2f(1758, 595);
    glVertex2f(1759, 592);
    glVertex2f(1760, 588);
    glVertex2f(1760, 584);
    glVertex2f(1759, 580);
    glVertex2f(1759, 577);
    glVertex2f(1758, 575);
    glVertex2f(1756, 574);
    glVertex2f(1754, 573);
    glVertex2f(1752, 572);
    glVertex2f(1752, 571);
    glVertex2f(1752, 567);
    glVertex2f(1752, 565);
    glVertex2f(1752, 555);
    glVertex2f(1753, 547);
    glVertex2f(1754, 535);
    glVertex2f(1755, 503);
    glVertex2f(1757, 485);
    glVertex2f(1757, 465);
    glVertex2f(1759, 454);
    glVertex2f(1759, 444);
    glVertex2f(1760, 436);
    glVertex2f(1760, 430);
    glVertex2f(1760, 425);
}

waterfall_with_shade_2() {
    glVertex2f(1760, 425);
    glVertex2f(1760, 430);
    glVertex2f(1760, 436);
    glVertex2f(1759, 444);
    glVertex2f(1759, 454);
    glVertex2f(1757, 465);
    glVertex2f(1757, 485);
    glVertex2f(1755, 503);
    glVertex2f(1754, 535);
    glVertex2f(1753, 547);
    glVertex2f(1752, 555);
    glVertex2f(1752, 565);
    glVertex2f(1752, 567);
    glVertex2f(1752, 571);
    glVertex2f(1752, 572);
    glVertex2f(1754, 573);
    glVertex2f(1756, 574);
    glVertex2f(1758, 575);
    glVertex2f(1759, 577);
    glVertex2f(1759, 580);
    glVertex2f(1760, 584);
    glVertex2f(1760, 588);
    glVertex2f(1759, 592);
    glVertex2f(1758, 595);
    glVertex2f(1757, 595);
    glVertex2f(1756, 594);
    glVertex2f(1754, 594);
    glVertex2f(1755, 591);
    glVertex2f(1754, 587);
    glVertex2f(1754, 581);
    glVertex2f(1755, 577);
    glVertex2f(1754, 576);
    glVertex2f(1752, 575);
    glVertex2f(1750, 575);
    glVertex2f(1749, 574);
    glVertex2f(1748, 572);
    glVertex2f(1747, 562);
    glVertex2f(1745, 552);
    glVertex2f(1742, 536);
    glVertex2f(1741, 525);
    glVertex2f(1739, 515);
    glVertex2f(1738, 510);
    glVertex2f(1735, 492);
    glVertex2f(1734, 486);
    glVertex2f(1733, 475);
    glVertex2f(1731, 465);
    glVertex2f(1730, 457);
    glVertex2f(1729, 449);
    glVertex2f(1728, 446);
    glVertex2f(1728, 444);
    glVertex2f(1727, 439);
    glVertex2f(1726, 434);
    glVertex2f(1726, 431);
    glVertex2f(1725, 428);
    glVertex2f(1725, 426);
    glVertex2f(1725, 425);
    glEnd();
}

void road() {

    glVertex2f(1233, 0);
    glVertex2f(1237, 11);
    glVertex2f(1266, 16);
    glVertex2f(1285, 20);
    glVertex2f(1323, 26);
    glVertex2f(1362, 33);
    glVertex2f(1383, 37);
    glVertex2f(1394, 40);
    glVertex2f(1408, 41);
    glVertex2f(1420, 43);
    glVertex2f(1431, 45);
    glVertex2f(1438, 47);
    glVertex2f(1449, 51);
    glVertex2f(1459, 54);
    glVertex2f(1464, 57);
    glVertex2f(1469, 59);
    glVertex2f(1473, 63);
    glVertex2f(1475, 67);
    glVertex2f(1478, 74);
    glVertex2f(1477, 80);
    glVertex2f(1472, 88);
    glVertex2f(1466, 94);
    glVertex2f(1459, 100);
    glVertex2f(1448, 108);
    glVertex2f(1440, 116);
    glVertex2f(1429, 126);
    glVertex2f(1417, 143);
    glVertex2f(1408, 156);
    glVertex2f(1404, 163);
    glVertex2f(1399, 172);
    glVertex2f(1395, 182);
    glVertex2f(1394, 189);
    glVertex2f(1394, 198);
    glVertex2f(1394, 205);
    glVertex2f(1396, 217);
    glVertex2f(1399, 224);
    glVertex2f(1403, 231);
    glVertex2f(1410, 238);
    glVertex2f(1415, 242);
    glVertex2f(1419, 246);
    glVertex2f(1425, 249);
    glVertex2f(1430, 254);
    glVertex2f(1439, 259);
    glVertex2f(1443, 262);
    glVertex2f(1448, 265);
    glVertex2f(1453, 267);
    glVertex2f(1460, 271);
    glVertex2f(1467, 273);
    glVertex2f(1475, 277);
    glVertex2f(1484, 280);
    glVertex2f(1499, 283);
    glVertex2f(1508, 284);
    glVertex2f(1520, 287);
    glVertex2f(1529, 288);
    glVertex2f(1537, 289);
    glVertex2f(1547, 291);
    glVertex2f(1557, 293);
    glVertex2f(1570, 295);
    glVertex2f(1578, 296);
    glVertex2f(1584, 297);
    glVertex2f(1592, 298);
    glVertex2f(1597, 299);
    glVertex2f(1602, 299);
    glVertex2f(1591, 294);
    glVertex2f(1586, 291);
    glVertex2f(1579, 290);
    glVertex2f(1574, 288);
    glVertex2f(1567, 286);
    glVertex2f(1561, 284);
    glVertex2f(1553, 280);
    glVertex2f(1544, 275);
    glVertex2f(1537, 272);
    glVertex2f(1526, 267);
    glVertex2f(1522, 264);
    glVertex2f(1516, 259);
    glVertex2f(1511, 253);
    glVertex2f(1507, 249);
    glVertex2f(1504, 243);
    glVertex2f(1501, 240);
    glVertex2f(1498, 237);
    glVertex2f(1498, 233);
    glVertex2f(1495, 229);
    glVertex2f(1494, 222);
    glVertex2f(1494, 217);
    glVertex2f(1494, 211);
    glVertex2f(1495, 206);
    glVertex2f(1497, 203);
    glVertex2f(1500, 200);
    glVertex2f(1504, 196);
    glVertex2f(1509, 191);
    glVertex2f(1514, 187);
    glVertex2f(1519, 184);
    glVertex2f(1523, 181);
    glVertex2f(1529, 178);
    glVertex2f(1534, 172);
    glVertex2f(1542, 167);
    glVertex2f(1555, 160);
    glVertex2f(1564, 156);
    glVertex2f(1578, 151);
    glVertex2f(1589, 148);
    glVertex2f(1599, 144);
    glVertex2f(1611, 138);
    glVertex2f(1622, 130);
    glVertex2f(1633, 125);
    glVertex2f(1646, 119);
    glVertex2f(1654, 113);
    glVertex2f(1666, 105);
    glVertex2f(1676, 97);
    glVertex2f(1687, 90);
    glVertex2f(1700, 78);
    glVertex2f(1704, 73);
    glVertex2f(1710, 67);
    glVertex2f(1717, 62);
    glVertex2f(1727, 55);
    glVertex2f(1735, 48);
    glVertex2f(1741, 40);
    glVertex2f(1745, 33);
    glVertex2f(1749, 25);
    glVertex2f(1751, 20);
    glVertex2f(1751, 14);
    glVertex2f(1747, 11);
    glVertex2f(1745, 0);

    glEnd();
}

void water_shade1() {
    glVertex2f(1139, 362);
    glVertex2f(1148, 367);
    glVertex2f(1329, 368);
    glVertex2f(1398, 368);
    glVertex2f(1514, 369);
    glVertex2f(1517, 366);
    glVertex2f(1635, 366);
    glVertex2f(1661, 366);
    glVertex2f(1717, 366);
    glVertex2f(1719, 365);
    glVertex2f(1719, 364);
    glVertex2f(1717, 362);
    glVertex2f(1713, 361);
    glVertex2f(1623, 359);
    glVertex2f(1302, 359);
    glVertex2f(1278, 361);
    glVertex2f(1251, 361);
    glVertex2f(1212, 362);
    glVertex2f(1182, 362);
    glVertex2f(1160, 362);
    glVertex2f(1145, 361);
    glVertex2f(1141, 362);
    glEnd();

}

void water_shade2() {

    glVertex2f(303, 346);
    glVertex2f(304, 347);
    glVertex2f(304, 347);
    glVertex2f(304, 347);
    glVertex2f(305, 347);
    glVertex2f(306, 348);
    glVertex2f(376, 348);
    glVertex2f(377, 348);
    glVertex2f(378, 348);
    glVertex2f(378, 347);
    glVertex2f(379, 347);
    glVertex2f(380, 347);
    glVertex2f(382, 347);
    glVertex2f(383, 347);
    glVertex2f(565, 347);
    glVertex2f(317, 340);
    glVertex2f(316, 341);
    glVertex2f(315, 341);
    glVertex2f(314, 341);
    glVertex2f(313, 341);
    glVertex2f(312, 342);
    glVertex2f(311, 342);
    glVertex2f(310, 342);
    glVertex2f(309, 342);
    glVertex2f(308, 343);
    glVertex2f(307, 343);
    glVertex2f(306, 343);
    glVertex2f(305, 344);
    glVertex2f(304, 344);
    glVertex2f(304, 345);
    glVertex2f(303, 345);
    glVertex2f(303, 346);
    glEnd();
}

void water_shade3() {

    glVertex2f(1678, 381);
    glVertex2f(1679, 382);
    glVertex2f(1679, 382);
    glVertex2f(1679, 382);
    glVertex2f(1680, 382);
    glVertex2f(1681, 383);
    glVertex2f(1751, 383);
    glVertex2f(1752, 383);
    glVertex2f(1753, 383);
    glVertex2f(1753, 382);
    glVertex2f(1754, 382);
    glVertex2f(1755, 382);
    glVertex2f(1757, 382);
    glVertex2f(1758, 382);
    glVertex2f(1940, 382);
    glVertex2f(1692, 375);
    glVertex2f(1691, 376);
    glVertex2f(1690, 376);
    glVertex2f(1689, 376);
    glVertex2f(1688, 376);
    glVertex2f(1687, 377);
    glVertex2f(1686, 377);
    glVertex2f(1685, 377);
    glVertex2f(1684, 377);
    glVertex2f(1683, 378);
    glVertex2f(1682, 378);
    glVertex2f(1681, 378);
    glVertex2f(1680, 379);
    glVertex2f(1679, 379);
    glVertex2f(1679, 380);
    glVertex2f(1678, 380);
    glVertex2f(1678, 381);
    glEnd();
}

void water_shade4() {
    glVertex2f(78, 377);
    glVertex2f(78, 377);
    glVertex2f(78, 377);
    glVertex2f(82, 372);
    glVertex2f(83, 372);
    glVertex2f(86, 372);
    glVertex2f(89, 371);
    glVertex2f(91, 371);
    glVertex2f(99, 370);
    glVertex2f(221, 373);
    glVertex2f(532, 377);
    glVertex2f(532, 377);
    glVertex2f(488, 373);
    glVertex2f(507, 373);
    glVertex2f(513, 372);
    glVertex2f(521, 372);
    glVertex2f(528, 372);
    glVertex2f(531, 373);
    glVertex2f(532, 377);
    glVertex2f(532, 377);
    glVertex2f(532, 377);
    glVertex2f(516, 377);
    glVertex2f(532, 377);
    glVertex2f(532, 377);
    glVertex2f(78, 377);
    glVertex2f(78, 377);
    glVertex2f(78, 377);
    glEnd();
}
void water_shade5() {
    glVertex2f(1027, 394);
    glVertex2f(1027, 394);
    glVertex2f(1023, 394);
    glVertex2f(1021, 398);
    glVertex2f(1019, 399);
    glVertex2f(1015, 399);
    glVertex2f(1005, 399);
    glVertex2f(998, 399);
    glVertex2f(937, 398);
    glVertex2f(1027, 394);
    glVertex2f(1027, 394);
    glVertex2f(1027, 394);
    glVertex2f(596, 394);
    glVertex2f(596, 394);
    glVertex2f(596, 394);
    glVertex2f(596, 394);
    glVertex2f(596, 394);
    glVertex2f(596, 394);
    glVertex2f(601, 390);
    glVertex2f(604, 389);
    glVertex2f(606, 389);
    glVertex2f(596, 394);
    glVertex2f(1027, 394);
    glVertex2f(1027, 394);
    glVertex2f(1027, 394);
    glEnd();
}
void water_shade6() {
    glVertex2f(1115, 403);
    glVertex2f(1126, 403);
    glVertex2f(1126, 403);
    glVertex2f(1365, 403);
    glVertex2f(1365, 403);
    glVertex2f(1365, 403);
    glVertex2f(1365, 403);
    glVertex2f(1365, 403);
    glVertex2f(1365, 403);
    glVertex2f(1365, 403);
    glVertex2f(1365, 397);
    glVertex2f(1354, 397);
    glVertex2f(1126, 403);
    glVertex2f(1126, 403);
    glVertex2f(1126, 403);
    glVertex2f(1126, 403);
    glEnd();
}


void tree_0n_mountain5() {



    glVertex2f(1920, 332);
    glVertex2f(1915, 329);
    glVertex2f(1913, 327);
    glVertex2f(1912, 325);
    glVertex2f(1913, 322);
    glVertex2f(1913, 321);
    glVertex2f(1913, 318);
    glVertex2f(1913, 316);
    glVertex2f(1912, 315);
    glVertex2f(1910, 314);
    glVertex2f(1909, 314);
    glVertex2f(1907, 315);
    glVertex2f(1905, 315);
    glVertex2f(1902, 315);
    glVertex2f(1901, 314);
    glVertex2f(1898, 313);
    glVertex2f(1894, 312);
    glVertex2f(1893, 310);
    glVertex2f(1893, 308);
    glVertex2f(1895, 305);
    glVertex2f(1896, 303);
    glVertex2f(1896, 299);
    glVertex2f(1896, 297);
    glVertex2f(1893, 294);
    glVertex2f(1888, 294);
    glVertex2f(1885, 295);
    glVertex2f(1883, 297);
    glVertex2f(1880, 299);
    glVertex2f(1877, 298);
    glVertex2f(1875, 294);
    glVertex2f(1873, 292);
    glVertex2f(1870, 289);
    glVertex2f(1866, 288);
    glVertex2f(1864, 287);
    glVertex2f(1862, 288);
    glVertex2f(1859, 289);
    glVertex2f(1854, 291);
    glVertex2f(1848, 288);
    glVertex2f(1845, 285);
    glVertex2f(1844, 281);
    glVertex2f(1843, 278);
    glVertex2f(1838, 276);
    glVertex2f(1833, 276);
    glVertex2f(1829, 277);
    glVertex2f(1824, 281);
    glVertex2f(1821, 282);
    glVertex2f(1816, 278);
    glVertex2f(1812, 276);
    glVertex2f(1807, 275);
    glVertex2f(1802, 274);
    glVertex2f(1795, 278);
    glVertex2f(1791, 274);
    glVertex2f(1786, 273);
    glVertex2f(1780, 274);
    glVertex2f(1774, 279);
    glVertex2f(1771, 283);
    glVertex2f(1767, 278);
    glVertex2f(1760, 279);
    glVertex2f(1756, 280);
    glVertex2f(1754, 283);
    glVertex2f(1751, 286);
    glVertex2f(1748, 288);
    glVertex2f(1746, 288);
    glVertex2f(1743, 285);
    glVertex2f(1739, 284);
    glVertex2f(1732, 283);
    glVertex2f(1728, 284);
    glVertex2f(1726, 287);
    glVertex2f(1724, 289);
    glVertex2f(1719, 291);
    glVertex2f(1715, 292);
    glVertex2f(1710, 293);
    glVertex2f(1707, 295);
    glVertex2f(1706, 296);
    glVertex2f(1706, 300);
    glVertex2f(1706, 303);
    glVertex2f(1706, 305);
    glVertex2f(1701, 308);
    glVertex2f(1696, 310);
    glVertex2f(1691, 314);
    glVertex2f(1688, 316);
    glVertex2f(1688, 321);
    glVertex2f(1691, 325);
    glVertex2f(1689, 326);
    glVertex2f(1689, 330);
    glVertex2f(1692, 337);
    glVertex2f(1697, 340);
    glVertex2f(1702, 340);
    glVertex2f(1704, 340);
    glVertex2f(1705, 346);
    glVertex2f(1709, 350);
    glVertex2f(1716, 351);
    glVertex2f(1718, 351);
    glVertex2f(1721, 352);
    glVertex2f(1721, 356);
    glVertex2f(1721, 364);
    glVertex2f(1726, 369);
    glVertex2f(1736, 369);
    glVertex2f(1740, 370);
    glVertex2f(1741, 375);
    glVertex2f(1740, 378);
    glVertex2f(1741, 380);
    glVertex2f(1747, 381);
    glVertex2f(1751, 381);
    glVertex2f(1754, 384);
    glVertex2f(1753, 389);
    glVertex2f(1753, 394);
    glVertex2f(1756, 399);
    glVertex2f(1761, 400);
    glVertex2f(1766, 399);
    glVertex2f(1769, 398);
    glVertex2f(1772, 397);
    glVertex2f(1778, 394);
    glVertex2f(1780, 397);
    glVertex2f(1779, 402);
    glVertex2f(1776, 409);
    glVertex2f(1779, 414);
    glVertex2f(1784, 417);
    glVertex2f(1778, 425);
    glVertex2f(1776, 430);
    glVertex2f(1778, 434);
    glVertex2f(1781, 437);
    glVertex2f(1786, 439);
    glVertex2f(1790, 439);
    glVertex2f(1795, 442);
    glVertex2f(1794, 446);
    glVertex2f(1795, 444);
    glVertex2f(1795, 446);
    glVertex2f(1795, 448);
    glVertex2f(1796, 451);
    glVertex2f(1798, 453);
    glVertex2f(1802, 455);
    glVertex2f(1803, 455);
    glVertex2f(1805, 454);
    glVertex2f(1809, 453);
    glVertex2f(1811, 451);
    glVertex2f(1814, 446);
    glVertex2f(1815, 444);
    glVertex2f(1816, 442);
    glVertex2f(1818, 442);
    glVertex2f(1820, 443);
    glVertex2f(1822, 445);
    glVertex2f(1821, 449);
    glVertex2f(1823, 453);
    glVertex2f(1824, 455);
    glVertex2f(1827, 454);
    glVertex2f(1832, 452);
    glVertex2f(1835, 454);
    glVertex2f(1837, 457);
    glVertex2f(1836, 460);
    glVertex2f(1834, 463);
    glVertex2f(1833, 465);
    glVertex2f(1832, 469);
    glVertex2f(1832, 473);
    glVertex2f(1833, 476);
    glVertex2f(1836, 478);
    glVertex2f(1840, 481);
    glVertex2f(1844, 484);
    glVertex2f(1845, 487);
    glVertex2f(1846, 490);
    glVertex2f(1849, 492);
    glVertex2f(1853, 493);
    glVertex2f(1856, 493);
    glVertex2f(1858, 492);
    glVertex2f(1861, 489);
    glVertex2f(1863, 487);
    glVertex2f(1865, 483);
    glVertex2f(1867, 480);
    glVertex2f(1867, 479);
    glVertex2f(1870, 479);
    glVertex2f(1873, 480);
    glVertex2f(1874, 484);
    glVertex2f(1872, 489);
    glVertex2f(1870, 492);
    glVertex2f(1872, 496);
    glVertex2f(1875, 498);
    glVertex2f(1875, 502);
    glVertex2f(1874, 505);
    glVertex2f(1874, 509);
    glVertex2f(1875, 513);
    glVertex2f(1877, 515);
    glVertex2f(1880, 517);
    glVertex2f(1884, 519);
    glVertex2f(1884, 522);
    glVertex2f(1885, 524);
    glVertex2f(1888, 527);
    glVertex2f(1893, 529);
    glVertex2f(1899, 529);
    glVertex2f(1907, 526);
    glVertex2f(1907, 525);
    glVertex2f(1909, 524);
    glVertex2f(1911, 524);
    glVertex2f(1913, 524);
    glVertex2f(1914, 525);
    glVertex2f(1915, 526);
    glVertex2f(1917, 527);
    glVertex2f(1920, 528);
        glEnd();

}

void right_tree_branch() {
    glVertex2f(1920, 353);
    glVertex2f(1918, 353);
    glVertex2f(1915, 353);
    glVertex2f(1913, 355);
    glVertex2f(1908, 355);
    glVertex2f(1903, 355);
    glVertex2f(1900, 356);
    glVertex2f(1897, 357);
    glVertex2f(1894, 357);
    glVertex2f(1903, 356);
    glVertex2f(1893, 358);
    glVertex2f(1887, 362);
    glVertex2f(1882, 363);
    glVertex2f(1874, 365);
    glVertex2f(1866, 364);
    glVertex2f(1860, 363);
    glVertex2f(1854, 363);
    glVertex2f(1848, 361);
    glVertex2f(1854, 390);
    glVertex2f(1856, 391);
    glVertex2f(1860, 393);
    glVertex2f(1862, 393);
    glVertex2f(1865, 395);
    glVertex2f(1868, 396);
    glVertex2f(1874, 397);
    glVertex2f(1878, 397);
    glVertex2f(1883, 396);
    glVertex2f(1887, 395);
    glVertex2f(1890, 394);
    glVertex2f(1893, 392);
    glVertex2f(1896, 391);
    glVertex2f(1898, 390);
    glVertex2f(1900, 389);
    glVertex2f(1902, 389);
    glVertex2f(1905, 388);
    glVertex2f(1909, 387);
    glVertex2f(1911, 386);
    glVertex2f(1914, 386);
    glVertex2f(1915, 388);
    glVertex2f(1915, 391);
    glVertex2f(1913, 394);
    glVertex2f(1912, 398);
    glVertex2f(1910, 400);
    glVertex2f(1908, 403);
    glVertex2f(1906, 407);
    glVertex2f(1905, 409);
    glVertex2f(1904, 413);
    glVertex2f(1902, 416);
    glVertex2f(1901, 419);
    glVertex2f(1901, 422);
    glVertex2f(1920, 422);
    glEnd();
}



void big_tree_root_with_shade1() {

    glVertex2f(0, 367);
    glVertex2f(4, 365);
    glVertex2f(4, 363);
    glVertex2f(4, 358);
    glVertex2f(4, 354);
    glVertex2f(4, 350);
    glVertex2f(4, 346);
    glVertex2f(4, 342);
    glVertex2f(4, 337);
    glVertex2f(5, 334);
    glVertex2f(6, 330);
    glVertex2f(7, 326);
    glVertex2f(9, 322);
    glVertex2f(11, 319);
    glVertex2f(15, 315);
    glVertex2f(17, 312);
    glVertex2f(21, 307);
    glVertex2f(21, 309);
    glVertex2f(24, 314);
    glVertex2f(26, 320);
    glVertex2f(27, 324);
    glVertex2f(29, 328);
    glVertex2f(30, 333);
    glVertex2f(31, 338);
    glVertex2f(32, 342);
    glVertex2f(32, 348);
    glVertex2f(33, 357);
    glVertex2f(62, 358);
    glVertex2f(63, 350);
    glVertex2f(63, 344);
    glVertex2f(63, 338);
    glVertex2f(63, 334);
    glVertex2f(63, 328);
    glVertex2f(63, 323);
    glVertex2f(64, 320);
    glVertex2f(64, 314);
    glVertex2f(65, 309);
    glVertex2f(67, 307);
    glVertex2f(68, 307);
    glVertex2f(73, 308);
    glVertex2f(76, 312);
    glVertex2f(79, 316);
    glVertex2f(83, 320);
    glVertex2f(87, 327);
    glVertex2f(90, 334);
    glVertex2f(94, 340);
    glVertex2f(96, 344);
    glVertex2f(98, 350);
    glVertex2f(100, 355);
    glVertex2f(110, 363);
    glVertex2f(183, 358);
    glVertex2f(178, 355);
    glVertex2f(173, 352);
    glVertex2f(166, 347);
    glVertex2f(160, 343);
    glVertex2f(156, 339);
    glVertex2f(152, 335);
    glVertex2f(149, 331);
    glVertex2f(143, 326);
    glVertex2f(140, 323);
    glVertex2f(137, 319);
    glVertex2f(136, 317);
    glVertex2f(137, 316);
    glVertex2f(137, 314);
    glVertex2f(139, 313);
    glVertex2f(144, 314);
    glVertex2f(151, 315);
    glVertex2f(159, 316);
    glVertex2f(167, 318);
    glVertex2f(171, 319);
    glVertex2f(177, 322);
    glVertex2f(182, 324);
    glVertex2f(187, 325);
    glVertex2f(191, 327);
    glVertex2f(199, 329);
    glVertex2f(204, 329);
    glVertex2f(220, 328);
    glVertex2f(228, 329);
    glVertex2f(236, 328);

}

void big_tree_root_with_shade2() {

    glVertex2f(230, 292);
    glVertex2f(225, 293);
    glVertex2f(219, 293);
    glVertex2f(213, 292);
    glVertex2f(209, 293);
    glVertex2f(201, 293);
    glVertex2f(194, 291);
    glVertex2f(188, 289);
    glVertex2f(183, 286);
    glVertex2f(177, 283);
    glVertex2f(173, 281);
    glVertex2f(170, 279);
    glVertex2f(167, 277);
    glVertex2f(163, 276);
    glVertex2f(158, 276);
    glVertex2f(153, 276);
    glVertex2f(147, 275);
    glVertex2f(140, 274);
    glVertex2f(138, 274);
    glVertex2f(133, 275);
    glVertex2f(129, 275);
    glVertex2f(125, 276);
    glVertex2f(123, 275);
    glVertex2f(120, 273);
    glVertex2f(119, 271);
    glVertex2f(117, 269);
    glVertex2f(117, 269);
    glVertex2f(114, 267);
    glVertex2f(111, 264);
    glVertex2f(109, 260);
    glVertex2f(106, 255);
    glVertex2f(104, 250);
    glVertex2f(102, 245);
    glVertex2f(101, 241);
    glVertex2f(99, 238);
    glVertex2f(96, 235);
    glVertex2f(94, 231);
    glVertex2f(93, 224);
    glVertex2f(93, 219);
    glVertex2f(93, 214);
    glVertex2f(94, 209);
    glVertex2f(95, 204);
    glVertex2f(96, 200);
    glVertex2f(95, 196);
    glVertex2f(95, 191);
    glVertex2f(94, 186);
    glVertex2f(96, 178);
    glVertex2f(96, 172);
    glVertex2f(97, 167);
    glVertex2f(97, 161);
    glVertex2f(97, 156);
    glVertex2f(98, 151);
    glVertex2f(99, 148);
    glVertex2f(102, 145);
    glVertex2f(104, 144);
    glVertex2f(102, 146);
    glVertex2f(104, 144);
    glVertex2f(106, 142);
    glVertex2f(107, 139);
    glVertex2f(109, 135);
    glVertex2f(109, 133);
    glVertex2f(111, 131);
    glVertex2f(119, 131);
    glVertex2f(125, 129);
    glVertex2f(131, 127);
    glVertex2f(135, 124);
    glVertex2f(139, 119);
    glVertex2f(140, 115);
    glVertex2f(143, 110);
    glVertex2f(146, 106);
    glVertex2f(150, 102);
    glVertex2f(156, 97);
    glVertex2f(161, 94);
    glVertex2f(169, 90);
    glVertex2f(174, 86);
    glVertex2f(177, 83);
    glVertex2f(179, 79);
    glVertex2f(180, 75);
    glVertex2f(173, 71);
    glVertex2f(165, 68);
    glVertex2f(157, 69);
    glVertex2f(151, 69);
    glVertex2f(145, 70);
    glVertex2f(136, 69);
    glVertex2f(128, 72);
    glVertex2f(120, 76);
    glVertex2f(114, 77);
    glVertex2f(106, 79);
    glVertex2f(101, 80);
    glVertex2f(96, 81);
    glVertex2f(94, 79);
    glVertex2f(95, 76);
    glVertex2f(95, 73);
    glVertex2f(90, 70);
    glVertex2f(85, 69);
    glVertex2f(83, 65);
    glVertex2f(81, 63);
    glVertex2f(78, 59);
    glVertex2f(75, 58);
    glVertex2f(73, 56);
    glVertex2f(71, 56);
    glVertex2f(67, 58);
    glVertex2f(64, 61);
    glVertex2f(60, 66);
    glVertex2f(57, 71);
    glVertex2f(54, 76);
    glVertex2f(51, 81);
    glVertex2f(49, 82);
    glVertex2f(47, 81);
    glVertex2f(45, 80);
    glVertex2f(41, 78);
    glVertex2f(39, 74);
    glVertex2f(35, 70);
    glVertex2f(33, 65);
    glVertex2f(30, 60);
    glVertex2f(27, 57);
    glVertex2f(23, 55);
    glVertex2f(19, 54);
    glVertex2f(16, 56);
    glVertex2f(13, 59);
    glVertex2f(9, 61);
    glVertex2f(6, 62);
    glVertex2f(3, 61);
    glVertex2f(0, 59);
    glEnd();


}

void tree_leaf4() {

    glVertex2f(307, 372);
    glVertex2f(304, 282);
    glVertex2f(307, 282);
    glVertex2f(308, 281);
    glVertex2f(310, 279);
    glVertex2f(312, 277);
    glVertex2f(314, 277);
    glVertex2f(318, 277);
    glVertex2f(320, 276);
    glVertex2f(323, 275);
    glVertex2f(327, 275);
    glVertex2f(330, 275);
    glVertex2f(335, 278);
    glVertex2f(338, 278);
    glVertex2f(342, 281);
    glVertex2f(343, 283);
    glVertex2f(345, 286);
    glVertex2f(347, 287);
    glVertex2f(349, 287);
    glVertex2f(353, 284);
    glVertex2f(357, 284);
    glVertex2f(364, 282);
    glVertex2f(368, 281);
    glVertex2f(376, 281);
    glVertex2f(384, 284);
    glVertex2f(392, 286);
    glVertex2f(396, 288);
    glVertex2f(402, 290);
    glVertex2f(411, 296);
    glVertex2f(416, 299);
    glVertex2f(419, 303);
    glVertex2f(422, 308);
    glVertex2f(423, 314);
    glVertex2f(428, 319);
    glVertex2f(430, 325);
    glVertex2f(434, 334);
    glVertex2f(437, 342);
    glVertex2f(437, 348);
    glVertex2f(436, 350);
    glVertex2f(435, 352);
    glVertex2f(434, 354);
    glVertex2f(431, 358);
    glVertex2f(429, 364);
    glVertex2f(429, 370);
    glVertex2f(428, 376);
    glVertex2f(424, 384);
    glVertex2f(422, 391);
    glVertex2f(418, 396);
    glVertex2f(414, 398);
    glVertex2f(406, 398);
    glVertex2f(403, 398);
    glVertex2f(400, 398);
    glVertex2f(397, 400);
    glVertex2f(397, 402);
    glVertex2f(398, 407);
    glVertex2f(396, 411);
    glVertex2f(394, 415);
    glVertex2f(390, 420);
    glVertex2f(388, 423);
    glVertex2f(387, 427);
    glVertex2f(385, 431);
    glVertex2f(383, 435);
    glVertex2f(380, 439);
    glVertex2f(375, 444);
    glVertex2f(373, 447);
    glVertex2f(369, 451);
    glVertex2f(367, 454);
    glVertex2f(363, 457);
    glVertex2f(357, 460);
    glVertex2f(350, 463);
    glVertex2f(342, 467);
    glVertex2f(333, 468);
    glVertex2f(327, 471);
    glVertex2f(319, 471);
    glVertex2f(312, 477);
    glVertex2f(309, 480);
    glVertex2f(305, 483);
    glVertex2f(300, 486);
    glVertex2f(293, 488);
    glVertex2f(283, 488);
    glVertex2f(274, 488);
    glVertex2f(269, 486);
    glVertex2f(264, 484);
    glVertex2f(259, 480);
    glVertex2f(256, 475);
    glVertex2f(257, 471);
    glVertex2f(257, 468);
    glVertex2f(251, 465);
    glVertex2f(244, 461);
    glVertex2f(240, 453);
    glVertex2f(237, 444);
    glVertex2f(235, 439);
    glVertex2f(235, 434);
    glVertex2f(233, 426);
    glVertex2f(229, 419);
    glVertex2f(224, 413);
    glVertex2f(215, 407);
    glVertex2f(214, 404);
    glVertex2f(213, 401);
    glVertex2f(210, 394);
    glVertex2f(211, 394);
    glVertex2f(209, 389);
    glVertex2f(213, 381);
    glVertex2f(213, 377);
    glVertex2f(215, 372);
    glVertex2f(215, 368);
    glVertex2f(212, 364);
    glVertex2f(209, 360);
    glVertex2f(207, 356);
    glVertex2f(206, 351);
    glVertex2f(207, 344);
    glVertex2f(211, 339);
    glVertex2f(214, 334);
    glVertex2f(216, 329);
    glVertex2f(218, 324);
    glVertex2f(217, 318);
    glVertex2f(215, 311);
    glVertex2f(215, 305);
    glVertex2f(216, 296);
    glVertex2f(219, 287);
    glVertex2f(219, 282);
    glVertex2f(221, 278);
    glVertex2f(224, 276);
    glVertex2f(225, 275);
    glVertex2f(231, 274);
    glVertex2f(234, 272);
    glVertex2f(240, 270);
    glVertex2f(244, 270);
    glVertex2f(248, 269);
    glVertex2f(256, 269);
    glVertex2f(260, 269);
    glVertex2f(269, 267);
    glVertex2f(277, 267);
    glVertex2f(280, 269);
    glVertex2f(283, 270);
    glVertex2f(286, 274);
    glVertex2f(289, 274);
    glVertex2f(292, 275);
    glVertex2f(297, 277);
    glVertex2f(300, 278);
    glVertex2f(303, 279);
    glVertex2f(305, 280);
    glVertex2f(307, 282);
    glEnd();

}


void tree_leaf3() {

    glVertex2f(5, 482);
    glVertex2f(-8, 360);
    glVertex2f(-2, 359);
    glVertex2f(-2, 359);
    glVertex2f(3, 357);
    glVertex2f(8, 354);
    glVertex2f(13, 352);
    glVertex2f(15, 351);
    glVertex2f(19, 349);
    glVertex2f(29, 344);
    glVertex2f(33, 342);
    glVertex2f(41, 340);
    glVertex2f(45, 340);
    glVertex2f(52, 339);
    glVertex2f(59, 339);
    glVertex2f(65, 343);
    glVertex2f(72, 346);
    glVertex2f(80, 346);
    glVertex2f(84, 346);
    glVertex2f(89, 343);
    glVertex2f(97, 340);
    glVertex2f(102, 338);
    glVertex2f(107, 336);
    glVertex2f(116, 336);
    glVertex2f(125, 338);
    glVertex2f(134, 342);
    glVertex2f(141, 347);
    glVertex2f(147, 352);
    glVertex2f(153, 356);
    glVertex2f(157, 358);
    glVertex2f(165, 355);
    glVertex2f(170, 352);
    glVertex2f(175, 351);
    glVertex2f(183, 351);
    glVertex2f(192, 354);
    glVertex2f(200, 356);
    glVertex2f(207, 359);
    glVertex2f(211, 371);
    glVertex2f(211, 381);
    glVertex2f(211, 389);
    glVertex2f(211, 396);
    glVertex2f(214, 404);
    glVertex2f(218, 411);
    glVertex2f(223, 419);
    glVertex2f(230, 426);
    glVertex2f(234, 431);
    glVertex2f(237, 436);
    glVertex2f(238, 443);
    glVertex2f(238, 449);
    glVertex2f(236, 456);
    glVertex2f(234, 464);
    glVertex2f(230, 471);
    glVertex2f(227, 479);
    glVertex2f(223, 489);
    glVertex2f(220, 498);
    glVertex2f(217, 507);
    glVertex2f(211, 516);
    glVertex2f(203, 523);
    glVertex2f(193, 531);
    glVertex2f(187, 538);
    glVertex2f(183, 545);
    glVertex2f(178, 553);
    glVertex2f(162, 558);
    glVertex2f(146, 563);
    glVertex2f(135, 569);
    glVertex2f(126, 575);
    glVertex2f(118, 582);
    glVertex2f(110, 589);
    glVertex2f(99, 595);
    glVertex2f(94, 598);
    glVertex2f(81, 602);
    glVertex2f(66, 602);
    glVertex2f(57, 600);
    glVertex2f(52, 598);
    glVertex2f(42, 599);
    glVertex2f(34, 606);
    glVertex2f(21, 611);
    glVertex2f(4, 614);
    glVertex2f(-14, 614);
    glVertex2f(-24, 619);
    glVertex2f(-39, 621);
    glVertex2f(-70, 618);
    glVertex2f(-77, 610);
    glVertex2f(-81, 605);
    glVertex2f(-87, 597);
    glVertex2f(-91, 592);
    glVertex2f(-96, 580);
    glVertex2f(-104, 576);
    glVertex2f(-116, 572);
    glVertex2f(-130, 568);
    glVertex2f(-141, 558);
    glVertex2f(-142, 555);
    glVertex2f(-144, 548);
    glVertex2f(-147, 543);
    glVertex2f(-163, 538);
    glVertex2f(-167, 530);
    glVertex2f(-171, 521);
    glVertex2f(-176, 515);
    glVertex2f(-175, 504);
    glVertex2f(-182, 495);
    glVertex2f(-187, 489);
    glVertex2f(-185, 483);
    glVertex2f(-189, 477);
    glVertex2f(-192, 471);
    glVertex2f(-196, 466);
    glVertex2f(-197, 460);
    glVertex2f(-199, 454);
    glVertex2f(-199, 447);
    glVertex2f(-199, 440);
    glVertex2f(-201, 433);
    glVertex2f(-202, 424);
    glVertex2f(-199, 414);
    glVertex2f(-200, 405);
    glVertex2f(-204, 397);
    glVertex2f(-204, 386);
    glVertex2f(-199, 374);
    glVertex2f(-191, 362);
    glVertex2f(-189, 357);
    glVertex2f(-179, 352);
    glVertex2f(-173, 349);
    glVertex2f(-164, 346);
    glVertex2f(-159, 346);
    glVertex2f(-146, 346);
    glVertex2f(-139, 344);
    glVertex2f(-129, 341);
    glVertex2f(-113, 336);
    glVertex2f(-102, 331);
    glVertex2f(-94, 328);
    glVertex2f(-82, 328);
    glVertex2f(-69, 331);
    glVertex2f(-62, 333);
    glVertex2f(-52, 338);
    glVertex2f(-48, 337);
    glVertex2f(-43, 337);
    glVertex2f(-37, 336);
    glVertex2f(-28, 338);
    glVertex2f(-21, 342);
    glVertex2f(-15, 343);
    glVertex2f(-12, 346);
    glVertex2f(-9, 349);
    glVertex2f(-5, 352);
    glVertex2f(-2, 355);
    glVertex2f(-2, 361);
    glEnd();

}

void tree_leaf2() {
    glVertex2f(94, 450);
    glVertex2f(17, 600);
    glVertex2f(15, 606);
    glVertex2f(17, 620);
    glVertex2f(17, 625);
    glVertex2f(18, 631);
    glVertex2f(19, 642);
    glVertex2f(21, 655);
    glVertex2f(29, 668);
    glVertex2f(36, 663);
    glVertex2f(42, 668);
    glVertex2f(48, 678);
    glVertex2f(52, 684);
    glVertex2f(58, 687);
    glVertex2f(65, 688);
    glVertex2f(76, 684);
    glVertex2f(82, 677);
    glVertex2f(86, 673);
    glVertex2f(98, 677);
    glVertex2f(98, 690);
    glVertex2f(105, 698);
    glVertex2f(111, 701);
    glVertex2f(121, 708);
    glVertex2f(132, 708);
    glVertex2f(145, 709);
    glVertex2f(155, 710);
    glVertex2f(157, 710);
    glVertex2f(172, 704);
    glVertex2f(178, 695);
    glVertex2f(193, 688);
    glVertex2f(203, 689);
    glVertex2f(212, 692);
    glVertex2f(218, 692);
    glVertex2f(228, 688);
    glVertex2f(235, 680);
    glVertex2f(239, 673);
    glVertex2f(244, 667);
    glVertex2f(253, 664);
    glVertex2f(262, 651);
    glVertex2f(265, 646);
    glVertex2f(274, 644);
    glVertex2f(283, 639);
    glVertex2f(288, 635);
    glVertex2f(288, 619);
    glVertex2f(294, 610);
    glVertex2f(301, 606);
    glVertex2f(307, 603);
    glVertex2f(308, 594);
    glVertex2f(307, 586);
    glVertex2f(303, 579);
    glVertex2f(311, 571);
    glVertex2f(320, 566);
    glVertex2f(325, 547);
    glVertex2f(322, 536);
    glVertex2f(325, 519);
    glVertex2f(323, 504);
    glVertex2f(318, 492);
    glVertex2f(313, 487);
    glVertex2f(308, 481);
    glVertex2f(300, 481);
    glVertex2f(280, 464);
    glVertex2f(273, 459);
    glVertex2f(276, 438);
    glVertex2f(274, 436);
    glVertex2f(271, 419);
    glVertex2f(261, 378);
    glVertex2f(231, 366);
    glEnd();

}


void tree_leaf1() {

    glVertex2f(3, 600);
    glVertex2f(0, 600);
    glVertex2f(3, 599);
    glVertex2f(4, 597);
    glVertex2f(6, 595);
    glVertex2f(8, 595);
    glVertex2f(10, 595);
    glVertex2f(14, 594);
    glVertex2f(16, 593);
    glVertex2f(19, 593);
    glVertex2f(23, 593);
    glVertex2f(26, 596);
    glVertex2f(31, 596);
    glVertex2f(34, 599);
    glVertex2f(38, 601);
    glVertex2f(39, 604);
    glVertex2f(41, 605);
    glVertex2f(43, 605);
    glVertex2f(45, 602);
    glVertex2f(49, 602);
    glVertex2f(53, 600);
    glVertex2f(60, 599);
    glVertex2f(64, 599);
    glVertex2f(72, 602);
    glVertex2f(80, 604);
    glVertex2f(88, 606);
    glVertex2f(92, 608);
    glVertex2f(98, 614);
    glVertex2f(107, 617);
    glVertex2f(112, 621);
    glVertex2f(115, 626);
    glVertex2f(118, 632);
    glVertex2f(119, 637);
    glVertex2f(124, 643);
    glVertex2f(126, 652);
    glVertex2f(130, 660);
    glVertex2f(133, 666);
    glVertex2f(133, 668);
    glVertex2f(132, 670);
    glVertex2f(131, 672);
    glVertex2f(130, 676);
    glVertex2f(127, 682);
    glVertex2f(125, 688);
    glVertex2f(125, 694);
    glVertex2f(124, 702);
    glVertex2f(120, 709);
    glVertex2f(118, 714);
    glVertex2f(114, 716);
    glVertex2f(110, 716);
    glVertex2f(102, 716);
    glVertex2f(99, 716);
    glVertex2f(96, 718);
    glVertex2f(93, 720);
    glVertex2f(93, 725);
    glVertex2f(94, 729);
    glVertex2f(92, 733);
    glVertex2f(90, 738);
    glVertex2f(86, 741);
    glVertex2f(84, 745);
    glVertex2f(83, 749);
    glVertex2f(81, 753);
    glVertex2f(79, 757);
    glVertex2f(76, 762);
    glVertex2f(71, 765);
    glVertex2f(69, 769);
    glVertex2f(65, 772);
    glVertex2f(63, 775);
    glVertex2f(59, 778);
    glVertex2f(53, 781);
    glVertex2f(46, 785);
    glVertex2f(38, 786);
    glVertex2f(29, 789);
    glVertex2f(23, 789);
    glVertex2f(15, 795);
    glVertex2f(8, 798);
    glVertex2f(5, 801);
    glVertex2f(1, 804);
    glVertex2f(-4, 806);
    glVertex2f(-11, 806);
    glVertex2f(-21, 806);
    glVertex2f(-30, 804);
    glVertex2f(-35, 802);
    glVertex2f(-40, 798);
    glVertex2f(-45, 793);
    glVertex2f(-48, 789);
    glVertex2f(-47, 786);
    glVertex2f(-47, 783);
    glVertex2f(-53, 779);
    glVertex2f(-60, 771);
    glVertex2f(-64, 762);
    glVertex2f(-67, 757);
    glVertex2f(-69, 752);
    glVertex2f(-69, 744);
    glVertex2f(-71, 737);
    glVertex2f(-75, 731);
    glVertex2f(-80, 725);
    glVertex2f(-89, 722);
    glVertex2f(-90, 719);
    glVertex2f(-91, 712);
    glVertex2f(-94, 712);
    glVertex2f(-93, 707);
    glVertex2f(-95, 699);
    glVertex2f(-91, 695);
    glVertex2f(-91, 690);
    glVertex2f(-89, 686);
    glVertex2f(-89, 682);
    glVertex2f(-92, 678);
    glVertex2f(-95, 674);
    glVertex2f(-97, 669);
    glVertex2f(-98, 662);
    glVertex2f(-97, 657);
    glVertex2f(-93, 652);
    glVertex2f(-90, 647);
    glVertex2f(-88, 642);
    glVertex2f(-86, 636);
    glVertex2f(-87, 629);
    glVertex2f(-89, 623);
    glVertex2f(-89, 614);
    glVertex2f(-88, 605);
    glVertex2f(-85, 600);
    glVertex2f(-85, 596);
    glVertex2f(-83, 594);
    glVertex2f(-80, 593);
    glVertex2f(-79, 592);
    glVertex2f(-73, 590);
    glVertex2f(-70, 588);
    glVertex2f(-64, 588);
    glVertex2f(-60, 587);
    glVertex2f(-56, 587);
    glVertex2f(-48, 587);
    glVertex2f(-44, 585);
    glVertex2f(-35, 585);
    glVertex2f(-27, 587);
    glVertex2f(-24, 588);
    glVertex2f(-21, 592);
    glVertex2f(-18, 592);
    glVertex2f(-15, 593);
    glVertex2f(-12, 595);
    glVertex2f(-7, 596);
    glVertex2f(-4, 597);
    glVertex2f(-1, 598);
    glVertex2f(1, 600);
    /*

        glVertex2f(274, 488);
        glVertex2f(256, 648);
        glVertex2f(412, 305);
        glVertex2f(445, 292);
        glVertex2f(451, 284);
        glVertex2f(460, 283);
        glVertex2f(473, 282);
        glVertex2f(494, 278);
        glVertex2f(507, 281);
        glVertex2f(520, 285);
        glVertex2f(537, 295);
        glVertex2f(560, 293);
        glVertex2f(576, 298);
        glVertex2f(590, 307);
        glVertex2f(607, 313);
        glVertex2f(622, 320);
        glVertex2f(629, 334);
        glVertex2f(633, 350);
        glVertex2f(626, 375);
        glVertex2f(612, 387);
        glVertex2f(604, 401);
        glVertex2f(586, 433);
        glVertex2f(575, 453);
        glVertex2f(568, 462);
        glVertex2f(550, 468);
        glVertex2f(534, 468);
        glVertex2f(520, 466);
        glVertex2f(511, 465);
        glVertex2f(500, 465);
        glVertex2f(495, 472);
        glVertex2f(491, 483);
        glVertex2f(480, 503);
        glVertex2f(479, 513);
        glVertex2f(481, 523);
        glVertex2f(470, 544);
        glVertex2f(470, 557);
        glVertex2f(469, 574);
        glVertex2f(460, 591);
        glVertex2f(453, 605);
        glVertex2f(445, 618);
        glVertex2f(437, 626);
        glVertex2f(430, 634);
        glVertex2f(407, 635);
        glVertex2f(389, 634);
        glVertex2f(382, 634);
        glVertex2f(376, 636);
        glVertex2f(372, 639);
        glVertex2f(371, 645);
        glVertex2f(365, 655);
        glVertex2f(357, 662);
        glVertex2f(344, 668);
        glVertex2f(333, 670);
        glVertex2f(319, 671);
        glVertex2f(311, 671);
        glVertex2f(293, 671);
        glVertex2f(287, 669);
        glVertex2f(278, 666);
        glVertex2f(271, 664);
        glVertex2f(267, 661);
        glVertex2f(264, 657);
        glVertex2f(256, 648);
        glVertex2f(274, 488);
    */
    glEnd();

}

void bamboo_raft() {
    glVertex2f(1860, 337);
    glVertex2f(1797, 325);
    glVertex2f(1797, 325);
    glVertex2f(1796, 325);
    glVertex2f(1796, 326);
    glVertex2f(1796, 326);
    glVertex2f(1796, 327);
    glVertex2f(1796, 327);
    glVertex2f(1796, 328);
    glVertex2f(1796, 328);
    glVertex2f(1796, 329);
    glVertex2f(1796, 329);
    glVertex2f(1796, 329);
    glVertex2f(1796, 330);
    glVertex2f(1797, 330);
    glVertex2f(1797, 330);
    glVertex2f(1797, 330);
    glVertex2f(1797, 331);
    glVertex2f(1797, 331);
    glVertex2f(1797, 331);
    glVertex2f(1797, 332);
    glVertex2f(1798, 332);
    glVertex2f(1798, 333);
    glVertex2f(1798, 333);
    glVertex2f(1799, 333);
    glVertex2f(1799, 333);
    glVertex2f(1799, 334);
    glVertex2f(1799, 334);
    glVertex2f(1799, 334);
    glVertex2f(1799, 335);
    glVertex2f(1799, 335);
    glVertex2f(1799, 335);
    glVertex2f(1800, 336);
    glVertex2f(1800, 336);
    glVertex2f(1800, 336);
    glVertex2f(1800, 336);
    glVertex2f(1801, 337);
    glVertex2f(1800, 337);
    glVertex2f(1801, 338);
    glVertex2f(1801, 339);
    glVertex2f(1802, 339);
    glVertex2f(1802, 340);
    glVertex2f(1802, 340);
    glVertex2f(1802, 340);
    glVertex2f(1802, 341);
    glVertex2f(1803, 341);
    glVertex2f(1803, 341);
    glVertex2f(1803, 342);
    glVertex2f(1804, 342);
    glVertex2f(1804, 343);
    glVertex2f(1804, 343);
    glVertex2f(1804, 344);
    glVertex2f(1804, 344);
    glVertex2f(1804, 345);
    glVertex2f(1805, 345);
    glVertex2f(1805, 345);
    glVertex2f(1805, 345);
    glVertex2f(1806, 345);
    glVertex2f(1914, 347);
    glVertex2f(1915, 347);
    glVertex2f(1915, 347);
    glVertex2f(1915, 346);
    glVertex2f(1915, 346);
    glVertex2f(1916, 345);
    glVertex2f(1916, 345);
    glVertex2f(1915, 344);
    glVertex2f(1915, 344);
    glVertex2f(1916, 343);
    glVertex2f(1917, 343);
    glVertex2f(1917, 342);
    glVertex2f(1917, 342);
    glVertex2f(1917, 342);
    glVertex2f(1917, 341);
    glVertex2f(1917, 341);
    glVertex2f(1917, 341);
    glVertex2f(1917, 341);
    glVertex2f(1917, 341);
    glVertex2f(1918, 340);
    glVertex2f(1918, 340);
    glVertex2f(1918, 339);
    glVertex2f(1918, 339);
    glVertex2f(1918, 339);
    glVertex2f(1917, 338);
    glVertex2f(1918, 338);
    glVertex2f(1918, 338);
    glVertex2f(1918, 337);
    glVertex2f(1918, 337);
    glVertex2f(1918, 337);
    glVertex2f(1918, 336);
    glVertex2f(1919, 336);
    glVertex2f(1919, 335);
    glVertex2f(1919, 335);
    glVertex2f(1918, 335);
    glVertex2f(1918, 335);
    glVertex2f(1919, 334);
    glVertex2f(1919, 334);
    glVertex2f(1919, 334);
    glVertex2f(1920, 333);
    glVertex2f(1920, 333);
    glVertex2f(1920, 332);
    glVertex2f(1920, 332);
    glVertex2f(1919, 332);
    glVertex2f(1920, 332);
    glVertex2f(1920, 331);
    glVertex2f(1920, 331);
    glVertex2f(1920, 330);
    glVertex2f(1920, 330);
    glVertex2f(1920, 329);
    glVertex2f(1921, 329);
    glVertex2f(1921, 329);
    glVertex2f(1921, 328);
    glVertex2f(1920, 327);
    glVertex2f(1920, 327);
    glVertex2f(1920, 327);
    glVertex2f(1920, 327);
    glVertex2f(1797, 325);
    glEnd();
}

void human() {
    glVertex2f(1844, 362);
    glVertex2f(1844, 350);
    glVertex2f(1843, 350);
    glVertex2f(1843, 350);
    glVertex2f(1843, 349);
    glVertex2f(1842, 349);
    glVertex2f(1842, 348);
    glVertex2f(1841, 347);
    glVertex2f(1841, 347);
    glVertex2f(1840, 346);
    glVertex2f(1840, 345);
    glVertex2f(1839, 345);
    glVertex2f(1838, 345);
    glVertex2f(1838, 345);
    glVertex2f(1838, 344);
    glVertex2f(1838, 343);
    glVertex2f(1838, 342);
    glVertex2f(1838, 341);
    glVertex2f(1838, 340);
    glVertex2f(1838, 339);
    glVertex2f(1838, 338);
    glVertex2f(1838, 337);
    glVertex2f(1837, 337);
    glVertex2f(1836, 337);
    glVertex2f(1836, 336);
    glVertex2f(1834, 336);
    glVertex2f(1834, 336);
    glVertex2f(1834, 337);
    glVertex2f(1834, 338);
    glVertex2f(1834, 339);
    glVertex2f(1834, 341);
    glVertex2f(1834, 342);
    glVertex2f(1834, 343);
    glVertex2f(1833, 345);
    glVertex2f(1833, 345);
    glVertex2f(1832, 346);
    glVertex2f(1832, 347);
    glVertex2f(1832, 348);
    glVertex2f(1832, 350);
    glVertex2f(1833, 351);
    glVertex2f(1834, 353);
    glVertex2f(1835, 354);
    glVertex2f(1836, 356);
    glVertex2f(1836, 357);
    glVertex2f(1836, 358);
    glVertex2f(1836, 359);
    glVertex2f(1836, 360);
    glVertex2f(1836, 362);
    glVertex2f(1835, 363);
    glVertex2f(1835, 364);
    glVertex2f(1834, 365);
    glVertex2f(1833, 366);
    glVertex2f(1832, 367);
    glVertex2f(1831, 368);
    glVertex2f(1830, 369);
    glVertex2f(1829, 370);
    glVertex2f(1828, 371);
    glVertex2f(1827, 372);
    glVertex2f(1826, 374);
    glVertex2f(1825, 375);
    glVertex2f(1824, 377);
    glVertex2f(1824, 378);
    glVertex2f(1823, 379);
    glVertex2f(1823, 380);
    glVertex2f(1824, 381);
    glVertex2f(1825, 382);
    glVertex2f(1825, 382);
    glVertex2f(1826, 382);
    glVertex2f(1827, 381);
    glVertex2f(1828, 381);
    glVertex2f(1829, 379);
    glVertex2f(1829, 377);
    glVertex2f(1830, 376);
    glVertex2f(1832, 375);
    glVertex2f(1832, 374);
    glVertex2f(1833, 372);
    glVertex2f(1834, 372);
    glVertex2f(1834, 373);
    glVertex2f(1833, 374);
    glVertex2f(1832, 376);
    glVertex2f(1832, 378);
    glVertex2f(1832, 379);
    glVertex2f(1832, 381);
    glVertex2f(1833, 382);
    glVertex2f(1834, 385);
    glVertex2f(1835, 385);
    glVertex2f(1835, 386);
    glVertex2f(1837, 386);
    glVertex2f(1838, 387);
    glVertex2f(1839, 387);
    glVertex2f(1840, 388);
    glVertex2f(1842, 388);
    glVertex2f(1843, 388);
    glVertex2f(1844, 388);
    glVertex2f(1845, 388);
    glVertex2f(1847, 388);
    glVertex2f(1847, 387);
    glVertex2f(1848, 387);
    glVertex2f(1849, 386);
    glVertex2f(1850, 385);
    glVertex2f(1851, 384);
    glVertex2f(1852, 383);
    glVertex2f(1852, 382);
    glVertex2f(1853, 381);
    glVertex2f(1853, 380);
    glVertex2f(1853, 378);
    glVertex2f(1853, 377);
    glVertex2f(1853, 375);
    glVertex2f(1852, 374);
    glVertex2f(1852, 373);
    glVertex2f(1851, 372);
    glVertex2f(1850, 372);
    glVertex2f(1848, 371);
    glVertex2f(1847, 371);
    glVertex2f(1847, 370);
    glVertex2f(1846, 370);
    glVertex2f(1845, 370);
    glVertex2f(1846, 370);
    glVertex2f(1846, 370);
    glVertex2f(1848, 369);
    glVertex2f(1849, 369);
    glVertex2f(1851, 368);
    glVertex2f(1851, 367);
    glVertex2f(1852, 366);
    glVertex2f(1853, 367);
    glVertex2f(1853, 367);
    glVertex2f(1853, 368);
    glVertex2f(1853, 368);
    glVertex2f(1853, 369);
    glVertex2f(1854, 371);
    glVertex2f(1855, 371);
    glVertex2f(1855, 370);
    glVertex2f(1855, 369);
    glVertex2f(1856, 367);
    glVertex2f(1856, 366);
    glVertex2f(1856, 365);
    glVertex2f(1856, 364);
    glVertex2f(1855, 363);
    glVertex2f(1854, 362);
    glVertex2f(1853, 362);
    glVertex2f(1851, 362);
    glVertex2f(1851, 363);
    glVertex2f(1850, 363);
    glVertex2f(1851, 362);
    glVertex2f(1851, 361);
    glVertex2f(1851, 360);
    glVertex2f(1851, 359);
    glVertex2f(1851, 357);
    glVertex2f(1851, 356);
    glVertex2f(1853, 355);
    glVertex2f(1854, 354);
    glVertex2f(1854, 353);
    glVertex2f(1855, 352);
    glVertex2f(1856, 351);
    glVertex2f(1856, 350);
    glVertex2f(1857, 349);
    glVertex2f(1857, 348);
    glVertex2f(1856, 347);
    glVertex2f(1856, 346);
    glVertex2f(1855, 345);
    glVertex2f(1856, 344);
    glVertex2f(1855, 343);
    glVertex2f(1856, 342);
    glVertex2f(1856, 340);
    glVertex2f(1856, 339);
    glVertex2f(1856, 338);
    glVertex2f(1857, 338);
    glVertex2f(1856, 337);
    glVertex2f(1855, 337);
    glVertex2f(1854, 336);
    glVertex2f(1853, 336);
    glVertex2f(1853, 337);
    glVertex2f(1852, 337);
    glVertex2f(1852, 339);
    glVertex2f(1852, 341);
    glVertex2f(1851, 343);
    glVertex2f(1851, 344);
    glVertex2f(1851, 345);
    glVertex2f(1850, 345);
    glVertex2f(1849, 346);
    glVertex2f(1849, 347);
    glVertex2f(1848, 349);
    glVertex2f(1847, 349);
    glVertex2f(1846, 350);
    glVertex2f(1845, 350);
    glVertex2f(1844, 350);
    glEnd();
}





void human_dress() {
    glVertex2f(1844, 354);
    glVertex2f(1844, 354);
    glVertex2f(1844, 350);
    glVertex2f(1844, 350);
    glVertex2f(1843, 350);
    glVertex2f(1843, 349);
    glVertex2f(1842, 349);
    glVertex2f(1842, 348);
    glVertex2f(1842, 348);
    glVertex2f(1841, 347);
    glVertex2f(1841, 346);
    glVertex2f(1840, 346);
    glVertex2f(1840, 345);
    glVertex2f(1839, 345);
    glVertex2f(1838, 345);
    glVertex2f(1837, 345);
    glVertex2f(1836, 345);
    glVertex2f(1835, 345);
    glVertex2f(1834, 345);
    glVertex2f(1833, 345);
    glVertex2f(1833, 345);
    glVertex2f(1832, 345);
    glVertex2f(1832, 346);
    glVertex2f(1832, 346);
    glVertex2f(1832, 347);
    glVertex2f(1832, 348);
    glVertex2f(1832, 349);
    glVertex2f(1832, 350);
    glVertex2f(1832, 350);
    glVertex2f(1833, 351);
    glVertex2f(1833, 352);
    glVertex2f(1833, 352);
    glVertex2f(1834, 353);
    glVertex2f(1834, 354);
    glVertex2f(1835, 355);
    glVertex2f(1835, 355);
    glVertex2f(1835, 356);
    glVertex2f(1836, 356);
    glVertex2f(1836, 357);
    glVertex2f(1836, 357);
    glVertex2f(1836, 357);
    glVertex2f(1837, 356);
    glVertex2f(1838, 356);
    glVertex2f(1838, 356);
    glVertex2f(1839, 356);
    glVertex2f(1840, 355);
    glVertex2f(1841, 355);
    glVertex2f(1843, 355);
    glVertex2f(1844, 355);
    glVertex2f(1846, 355);
    glVertex2f(1847, 356);
    glVertex2f(1848, 356);
    glVertex2f(1850, 356);
    glVertex2f(1850, 356);
    glVertex2f(1851, 356);
    glVertex2f(1851, 357);
    glVertex2f(1851, 357);
    glVertex2f(1852, 356);
    glVertex2f(1853, 356);
    glVertex2f(1853, 355);
    glVertex2f(1854, 355);
    glVertex2f(1854, 354);
    glVertex2f(1855, 354);
    glVertex2f(1855, 353);
    glVertex2f(1856, 351);
    glVertex2f(1856, 350);
    glVertex2f(1857, 350);
    glVertex2f(1857, 349);
    glVertex2f(1857, 348);
    glVertex2f(1856, 347);
    glVertex2f(1856, 346);
    glVertex2f(1855, 345);
    glVertex2f(1855, 345);
    glVertex2f(1854, 345);
    glVertex2f(1852, 344);
    glVertex2f(1851, 344);
    glVertex2f(1850, 345);
    glVertex2f(1850, 345);
    glVertex2f(1849, 346);
    glVertex2f(1849, 347);
    glVertex2f(1849, 348);
    glVertex2f(1848, 348);
    glVertex2f(1847, 349);
    glVertex2f(1847, 350);
    glVertex2f(1846, 350);
    glVertex2f(1845, 350);
    glVertex2f(1844, 350);

    glEnd();
}

void human_head() {
    glVertex2f(1847, 385);
    glVertex2f(1844, 370);
    glVertex2f(1844, 371);
    glVertex2f(1844, 372);
    glVertex2f(1844, 373);
    glVertex2f(1844, 375);
    glVertex2f(1843, 377);
    glVertex2f(1843, 377);
    glVertex2f(1844, 378);
    glVertex2f(1845, 379);
    glVertex2f(1845, 379);
    glVertex2f(1844, 379);
    glVertex2f(1843, 380);
    glVertex2f(1843, 380);
    glVertex2f(1842, 381);
    glVertex2f(1842, 382);
    glVertex2f(1841, 383);
    glVertex2f(1840, 383);
    glVertex2f(1839, 384);
    glVertex2f(1838, 385);
    glVertex2f(1836, 385);
    glVertex2f(1836, 385);
    glVertex2f(1835, 386);
    glVertex2f(1836, 386);
    glVertex2f(1837, 387);
    glVertex2f(1838, 387);
    glVertex2f(1839, 388);
    glVertex2f(1840, 388);
    glVertex2f(1841, 388);
    glVertex2f(1842, 388);
    glVertex2f(1842, 389);
    glVertex2f(1843, 388);
    glVertex2f(1844, 388);
    glVertex2f(1845, 388);
    glVertex2f(1846, 388);
    glVertex2f(1847, 388);
    glVertex2f(1848, 388);
    glVertex2f(1849, 388);
    glVertex2f(1849, 387);
    glVertex2f(1850, 387);
    glVertex2f(1851, 386);
    glVertex2f(1852, 385);
    glVertex2f(1852, 384);
    glVertex2f(1853, 383);
    glVertex2f(1853, 382);
    glVertex2f(1853, 381);
    glVertex2f(1853, 380);
    glVertex2f(1854, 378);
    glVertex2f(1854, 376);
    glVertex2f(1853, 375);
    glVertex2f(1853, 373);
    glVertex2f(1852, 372);
    glVertex2f(1850, 371);
    glVertex2f(1848, 371);
    glVertex2f(1848, 371);
    glVertex2f(1846, 370);
    glVertex2f(1845, 370);
    glVertex2f(1844, 370);
    glVertex2f(1843, 370);

    glEnd();
}

void plane() {

    glVertex2f(1888, 897);
    glVertex2f(1888, 900);
    glVertex2f(1888, 900);
    glVertex2f(1890, 901);
    glVertex2f(1894, 903);
    glVertex2f(1895, 905);
    glVertex2f(1896, 905);
    glVertex2f(1897, 905);
    glVertex2f(1898, 905);
    glVertex2f(1899, 905);
    glVertex2f(1899, 904);
    glVertex2f(1898, 903);
    glVertex2f(1898, 901);
    glVertex2f(1897, 900);
    glVertex2f(1897, 900);
    glVertex2f(1898, 899);
    glVertex2f(1900, 899);
    glVertex2f(1901, 900);
    glVertex2f(1920, 902);
    glVertex2f(1920, 902);
    glVertex2f(1920, 901);
    glVertex2f(1919, 901);
    glVertex2f(1915, 895);
    glVertex2f(1914, 895);
    glVertex2f(1913, 895);
    glVertex2f(1913, 894);
    glVertex2f(1911, 894);
    glVertex2f(1899, 895);
    glVertex2f(1899, 895);
    glVertex2f(1898, 895);
    glVertex2f(1897, 894);
    glVertex2f(1897, 893);
    glVertex2f(1898, 891);
    glVertex2f(1898, 888);
    glVertex2f(1898, 887);
    glVertex2f(1898, 887);
    glVertex2f(1898, 886);
    glVertex2f(1897, 886);
    glVertex2f(1896, 886);
    glVertex2f(1895, 887);
    glVertex2f(1894, 887);
    glVertex2f(1886, 894);
    glVertex2f(1885, 894);
    glVertex2f(1885, 894);
    glVertex2f(1884, 895);
    glVertex2f(1882, 895);
    glVertex2f(1866, 896);
    glVertex2f(1865, 896);
    glVertex2f(1864, 896);
    glVertex2f(1863, 896);
    glVertex2f(1862, 897);
    glVertex2f(1861, 897);
    glVertex2f(1861, 897);
    glVertex2f(1861, 898);
    glVertex2f(1861, 898);
    glVertex2f(1862, 898);
    glVertex2f(1862, 899);
    glVertex2f(1863, 899);
    glVertex2f(1863, 899);
    glVertex2f(1864, 900);
    glVertex2f(1865, 900);
    glVertex2f(1865, 900);
    glVertex2f(1865, 901);
    glVertex2f(1866, 901);
    glVertex2f(1866, 901);
    glVertex2f(1867, 901);
    glVertex2f(1868, 901);
    glVertex2f(1868, 901);
    glVertex2f(1869, 901);
    glVertex2f(1870, 901);
    glVertex2f(1875, 901);
    glVertex2f(1886, 901);
    glVertex2f(1889, 902);

    glEnd();
}


void land_shade1() {

    glVertex2f(864, 59);
    glVertex2f(830, 53);
    glVertex2f(798, 57);
    glVertex2f(768, 61);
    glVertex2f(742, 63);
    glVertex2f(718, 67);
    glVertex2f(704, 69);
    glVertex2f(702, 69);
    glVertex2f(704, 75);
    glVertex2f(734, 79);
    glVertex2f(750, 77);
    glVertex2f(770, 79);
    glVertex2f(796, 79);
    glVertex2f(816, 79);
    glVertex2f(844, 81);
    glVertex2f(886, 81);
    glVertex2f(922, 79);
    glVertex2f(968, 79);
    glVertex2f(996, 75);
    glVertex2f(1032, 75);
    glVertex2f(1056, 73);
    glVertex2f(1068, 73);
    glVertex2f(1072, 73);
    glVertex2f(1076, 73);
    glVertex2f(1078, 71);
    glVertex2f(1078, 69);
    glVertex2f(1072, 67);
    glVertex2f(1058, 67);
    glVertex2f(1044, 65);
    glVertex2f(1002, 63);
    glVertex2f(968, 63);
    glVertex2f(950, 61);
    glVertex2f(930, 61);
    glVertex2f(918, 61);
    glVertex2f(904, 61);
    glVertex2f(900, 61);
    glVertex2f(898, 57);
    glVertex2f(910, 57);
    glVertex2f(930, 57);
    glVertex2f(952, 55);
    glVertex2f(964, 53);
    glVertex2f(986, 53);
    glVertex2f(1002, 51);
    glVertex2f(1016, 49);
    glVertex2f(1030, 49);
    glVertex2f(1034, 47);
    glVertex2f(1024, 45);
    glVertex2f(1002, 43);
    glVertex2f(984, 39);
    glVertex2f(968, 37);
    glVertex2f(946, 35);
    glVertex2f(932, 35);
    glVertex2f(912, 35);
    glVertex2f(896, 35);
    glVertex2f(870, 35);
    glVertex2f(854, 35);
    glVertex2f(830, 35);
    glVertex2f(810, 35);
    glVertex2f(804, 39);
    glVertex2f(802, 43);
    glVertex2f(810, 45);
    glVertex2f(820, 47);
    glVertex2f(824, 49);
    glVertex2f(828, 51);
    glVertex2f(828, 55);

    glEnd();
}

void land_shade2() {

    glVertex2f(949, 247);
    glVertex2f(932, 244);
    glVertex2f(916, 246);
    glVertex2f(901, 248);
    glVertex2f(888, 249);
    glVertex2f(876, 251);
    glVertex2f(869, 252);
    glVertex2f(868, 252);
    glVertex2f(869, 255);
    glVertex2f(884, 257);
    glVertex2f(892, 256);
    glVertex2f(902, 257);
    glVertex2f(915, 257);
    glVertex2f(925, 257);
    glVertex2f(939, 258);
    glVertex2f(960, 258);
    glVertex2f(978, 257);
    glVertex2f(1001, 257);
    glVertex2f(1015, 255);
    glVertex2f(1033, 255);
    glVertex2f(1045, 254);
    glVertex2f(1051, 254);
    glVertex2f(1053, 254);
    glVertex2f(1055, 254);
    glVertex2f(1056, 253);
    glVertex2f(1056, 252);
    glVertex2f(1053, 251);
    glVertex2f(1046, 251);
    glVertex2f(1039, 250);
    glVertex2f(1018, 249);
    glVertex2f(1001, 249);
    glVertex2f(992, 248);
    glVertex2f(982, 248);
    glVertex2f(976, 248);
    glVertex2f(969, 248);
    glVertex2f(967, 248);
    glVertex2f(966, 246);
    glVertex2f(972, 246);
    glVertex2f(982, 246);
    glVertex2f(993, 245);
    glVertex2f(999, 244);
    glVertex2f(1010, 244);
    glVertex2f(1018, 243);
    glVertex2f(1025, 242);
    glVertex2f(1032, 242);
    glVertex2f(1034, 241);
    glVertex2f(1029, 240);
    glVertex2f(1018, 239);
    glVertex2f(1009, 237);
    glVertex2f(1001, 236);
    glVertex2f(990, 235);
    glVertex2f(983, 235);
    glVertex2f(973, 235);
    glVertex2f(965, 235);
    glVertex2f(952, 235);
    glVertex2f(944, 235);
    glVertex2f(932, 235);
    glVertex2f(922, 235);
    glVertex2f(919, 237);
    glVertex2f(918, 239);
    glVertex2f(922, 240);
    glVertex2f(927, 241);
    glVertex2f(929, 242);
    glVertex2f(931, 243);
    glVertex2f(931, 245);

    glEnd();
}

void land_shade3() {

    glVertex2f(599, 227);
    glVertex2f(582, 224);
    glVertex2f(566, 226);
    glVertex2f(551, 228);
    glVertex2f(538, 229);
    glVertex2f(526, 231);
    glVertex2f(519, 232);
    glVertex2f(518, 232);
    glVertex2f(519, 235);
    glVertex2f(534, 237);
    glVertex2f(542, 236);
    glVertex2f(552, 237);
    glVertex2f(565, 237);
    glVertex2f(575, 237);
    glVertex2f(589, 238);
    glVertex2f(610, 238);
    glVertex2f(628, 237);
    glVertex2f(651, 237);
    glVertex2f(665, 235);
    glVertex2f(683, 235);
    glVertex2f(695, 234);
    glVertex2f(701, 234);
    glVertex2f(703, 234);
    glVertex2f(705, 234);
    glVertex2f(706, 233);
    glVertex2f(706, 232);
    glVertex2f(703, 231);
    glVertex2f(696, 231);
    glVertex2f(689, 230);
    glVertex2f(668, 229);
    glVertex2f(651, 229);
    glVertex2f(642, 228);
    glVertex2f(632, 228);
    glVertex2f(626, 228);
    glVertex2f(619, 228);
    glVertex2f(617, 228);
    glVertex2f(616, 226);
    glVertex2f(622, 226);
    glVertex2f(632, 226);
    glVertex2f(643, 225);
    glVertex2f(649, 224);
    glVertex2f(660, 224);
    glVertex2f(668, 223);
    glVertex2f(675, 222);
    glVertex2f(682, 222);
    glVertex2f(684, 221);
    glVertex2f(679, 220);
    glVertex2f(668, 219);
    glVertex2f(659, 217);
    glVertex2f(651, 216);
    glVertex2f(640, 215);
    glVertex2f(633, 215);
    glVertex2f(623, 215);
    glVertex2f(615, 215);
    glVertex2f(602, 215);
    glVertex2f(594, 215);
    glVertex2f(582, 215);
    glVertex2f(572, 215);
    glVertex2f(569, 217);
    glVertex2f(568, 219);
    glVertex2f(572, 220);
    glVertex2f(577, 221);
    glVertex2f(579, 222);
    glVertex2f(581, 223);
    glVertex2f(581, 225);

    glEnd();
}

void land_shade4() {
    glVertex2f(406, 100);
    glVertex2f(537, 110);
    glVertex2f(537, 108);
    glVertex2f(539, 105);
    glVertex2f(542, 104);
    glVertex2f(544, 104);
    glVertex2f(546, 104);
    glVertex2f(549, 106);
    glVertex2f(553, 106);
    glVertex2f(558, 105);
    glVertex2f(563, 104);
    glVertex2f(566, 104);
    glVertex2f(569, 102);
    glVertex2f(571, 100);
    glVertex2f(574, 98);
    glVertex2f(577, 97);
    glVertex2f(580, 94);
    glVertex2f(580, 93);
    glVertex2f(580, 91);
    glVertex2f(579, 89);
    glVertex2f(575, 87);
    glVertex2f(572, 85);
    glVertex2f(569, 83);
    glVertex2f(564, 81);
    glVertex2f(560, 80);
    glVertex2f(551, 80);
    glVertex2f(547, 79);
    glVertex2f(545, 79);
    glVertex2f(541, 77);
    glVertex2f(541, 75);
    glVertex2f(542, 73);
    glVertex2f(543, 71);
    glVertex2f(545, 71);
    glVertex2f(550, 71);
    glVertex2f(557, 70);
    glVertex2f(561, 69);
    glVertex2f(564, 67);
    glVertex2f(566, 64);
    glVertex2f(566, 61);
    glVertex2f(563, 57);
    glVertex2f(557, 54);
    glVertex2f(550, 52);
    glVertex2f(543, 51);
    glVertex2f(530, 51);
    glVertex2f(524, 50);
    glVertex2f(508, 47);
    glVertex2f(498, 47);
    glVertex2f(485, 46);
    glVertex2f(473, 45);
    glVertex2f(462, 44);
    glVertex2f(449, 42);
    glVertex2f(435, 40);
    glVertex2f(416, 38);
    glVertex2f(402, 37);
    glVertex2f(387, 36);
    glVertex2f(368, 36);
    glVertex2f(351, 36);
    glVertex2f(331, 38);
    glVertex2f(313, 40);
    glVertex2f(300, 41);
    glVertex2f(287, 43);
    glVertex2f(278, 46);
    glVertex2f(257, 49);
    glVertex2f(245, 51);
    glVertex2f(239, 54);
    glVertex2f(237, 58);
    glVertex2f(241, 62);
    glVertex2f(246, 63);
    glVertex2f(249, 65);
    glVertex2f(251, 68);
    glVertex2f(247, 71);
    glVertex2f(231, 71);
    glVertex2f(219, 72);
    glVertex2f(199, 72);
    glVertex2f(186, 72);
    glVertex2f(173, 73);
    glVertex2f(165, 75);
    glVertex2f(157, 78);
    glVertex2f(146, 80);
    glVertex2f(137, 83);
    glVertex2f(135, 85);
    glVertex2f(134, 86);
    glVertex2f(134, 89);
    glVertex2f(134, 90);
    glVertex2f(135, 92);
    glVertex2f(137, 94);
    glVertex2f(139, 97);
    glVertex2f(142, 98);
    glVertex2f(145, 100);
    glVertex2f(151, 103);
    glVertex2f(155, 104);
    glVertex2f(158, 105);
    glVertex2f(162, 106);
    glVertex2f(165, 107);
    glVertex2f(172, 108);
    glVertex2f(176, 109);
    glVertex2f(185, 111);
    glVertex2f(189, 111);
    glVertex2f(192, 112);
    glVertex2f(197, 112);
    glVertex2f(203, 113);
    glVertex2f(207, 113);
    glVertex2f(213, 114);
    glVertex2f(216, 114);
    glVertex2f(219, 115);
    glVertex2f(225, 116);
    glVertex2f(231, 117);
    glVertex2f(239, 117);
    glVertex2f(243, 119);
    glVertex2f(251, 119);
    glVertex2f(259, 119);
    glVertex2f(264, 120);
    glVertex2f(269, 120);
    glVertex2f(274, 122);
    glVertex2f(283, 122);
    glVertex2f(288, 122);
    glVertex2f(292, 123);
    glVertex2f(297, 123);
    glVertex2f(307, 123);
    glVertex2f(319, 124);
    glVertex2f(328, 124);
    glVertex2f(338, 124);
    glVertex2f(354, 124);
    glVertex2f(364, 123);
    glVertex2f(377, 123);
    glVertex2f(386, 123);
    glVertex2f(396, 123);
    glVertex2f(407, 123);
    glVertex2f(422, 123);
    glVertex2f(430, 123);
    glVertex2f(444, 123);
    glVertex2f(456, 121);
    glVertex2f(470, 118);
    glVertex2f(481, 118);
    glVertex2f(499, 116);
    glVertex2f(511, 116);
    glVertex2f(519, 116);
    glVertex2f(525, 114);
    glVertex2f(531, 113);
    glVertex2f(540, 111);

    glEnd();
}

void land_shade5() {

    glVertex2f(1143, 270);
    glVertex2f(1250, 274);
    glVertex2f(1252, 272);
    glVertex2f(1252, 269);
    glVertex2f(1252, 267);
    glVertex2f(1247, 265);
    glVertex2f(1242, 264);
    glVertex2f(1235, 262);
    glVertex2f(1234, 256);
    glVertex2f(1218, 255);
    glVertex2f(1212, 255);
    glVertex2f(1205, 253);
    glVertex2f(1187, 251);
    glVertex2f(1172, 250);
    glVertex2f(1162, 247);
    glVertex2f(1151, 247);
    glVertex2f(1142, 247);
    glVertex2f(1132, 247);
    glVertex2f(1124, 247);
    glVertex2f(1113, 247);
    glVertex2f(1109, 249);
    glVertex2f(1107, 250);
    glVertex2f(1109, 252);
    glVertex2f(1115, 253);
    glVertex2f(1120, 255);
    glVertex2f(1124, 257);
    glVertex2f(1119, 258);
    glVertex2f(1112, 258);
    glVertex2f(1105, 258);
    glVertex2f(1099, 259);
    glVertex2f(1092, 260);
    glVertex2f(1089, 261);
    glVertex2f(1098, 266);
    glVertex2f(1101, 267);
    glVertex2f(1108, 268);
    glVertex2f(1118, 268);
    glVertex2f(1126, 271);
    glVertex2f(1131, 272);
    glVertex2f(1138, 274);
    glVertex2f(1147, 274);
    glVertex2f(1154, 275);
    glVertex2f(1164, 275);
    glVertex2f(1175, 277);
    glVertex2f(1181, 277);
    glVertex2f(1192, 277);
    glVertex2f(1201, 277);
    glVertex2f(1212, 277);
    glVertex2f(1250, 274);

    glEnd();
}



void day() {
    glClearColor(0.61f,0.95f,1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

    glLineWidth(2);

    glBegin(GL_POLYGON);
    glColor3f(0.18f,0.64f,1.0f);
    glVertex2f(0,1080);
    glVertex2f(0,425);
    glVertex2f(1920,425);
    glVertex2f(1920,1080);

    glColor3f(0.97f,1.0f,0.7f);
    glVertex2f(0,425);
    glVertex2f(0,1080);
    glVertex2f(1920,1080);
    glVertex2f(1920,425);

    glEnd();

    //Mountain 1
    glBegin(GL_POLYGON);
    glColor3f(0.35f,0.96f,0.6f);
    mountain1();

    //Mountain1 Shadow 1
    glBegin(GL_POLYGON);
    glColor3f(0.56f,1.0f,0.75f);
    mountain1_shadow_1();


    //Mountain1 Shadow 2
    glBegin(GL_POLYGON);
    glColor3f(0.56f,1.0f,0.75f);
    mountain1_shadow_2();

    //Mountain1 Shadow 3
    glBegin(GL_POLYGON);
    glColor3f(0.56f,1.0f,0.75f);
    mountain1_shadow_2();



    //Mountain 2
    glBegin(GL_POLYGON);
    glColor3f(0.18f,0.8f,0.45f);
    mountain2();

    //Mountain 3
    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.6f,0.26f);
    mountain3();


    //Water
    glBegin(GL_QUADS);
    glColor3f(0.61f,0.95f,1.0f);
    water();


    //waterfall front water shade
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.41f,0.89f,0.92f);
    glVertex2f(1760,425);
    circle(1742, 425, 50, 10);

    //Mountain 4
    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.4f,0.1f);
    mountain4();

    //Waterfall with shade
    glBegin(GL_POLYGON);
    glColor3f(0.7f,0.88f,1.00f);
    waterfall_with_shade_1();
    glColor3f(0.30f,0.89f,1.0f);
    waterfall_with_shade_2();

    //waterfall shade
    glBegin(GL_TRIANGLES);
    glColor3f(0.41f,0.89f,0.92f);
    glVertex2f(1752,545);
    glVertex2f(1754,537);
    glVertex2f(1751,537);
    glEnd();


    //River front Land
    glBegin(GL_POLYGON);
    glColor3f(0.54f,0.85f,0.31f);
    glVertex2f(0,0);
    glVertex2f(0,300);
    glVertex2f(1920,300);
    glVertex2f(1920,0);
    glEnd();


    //Land shade 1
    glBegin(GL_POLYGON);
    glColor3f(0.69f,1.0f,0.53f);
    land_shade1();

    //Land shade 2
    glBegin(GL_POLYGON);
    glColor3f(0.69f,1.0f,0.53f);
    land_shade2();

    //Land shade 3
    glBegin(GL_POLYGON);
    glColor3f(0.69f,1.0f,0.53f);
    land_shade3();

    //Land shade 4
    glBegin(GL_POLYGON);
    glColor3f(0.69f,1.0f,0.53f);
    land_shade4();

    //Land shade 5
    glBegin(GL_POLYGON);
    glColor3f(0.69f,1.0f,0.53f);
    land_shade5();





    //Road
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.88f,0.9f,0.67f);
    road();



    //Moving water shade STARTS
    glPushMatrix();
    glTranslatef(-water_shade_position,0,0);

    //Water shade 1(Moving)
    glBegin(GL_POLYGON);
    glColor3f(0.41f,0.89f,0.92f);
    water_shade1();

    //Water shade 2(Moving)
    glBegin(GL_POLYGON);
    glColor3f(0.41f,0.89f,0.92f);
    water_shade2();

    //Water shade 3(Moving)
    glBegin(GL_POLYGON);
    glColor3f(0.41f,0.89f,0.92f);
    water_shade3();

    //Water shade 4(Moving)
    glBegin(GL_POLYGON);
    glColor3f(0.41f,0.89f,0.92f);
    water_shade4();

    //Water shade 5(Moving)
    glBegin(GL_POLYGON);
    glColor3f(0.41f,0.89f,0.92f);
    water_shade5();

    //Water shade 6(Moving)
    glBegin(GL_POLYGON);
    glColor3f(0.41f,0.89f,0.92f);
    water_shade6();

    //Bamboo raft
    glBegin(GL_POLYGON);
    glColor3f(0.22f,0.45f,0.0f);
    bamboo_raft();


    //Raft vertical line
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(1913,330);
    glVertex2f(1907,348);

    glVertex2f(1891,347);
    glVertex2f(1895,330);

    glVertex2f(1870,347);
    glVertex2f(1874,330);

    glVertex2f(1816,347);
    glVertex2f(1807,328);

    glVertex2f(1828,329);
    glVertex2f(1836,346);

    glVertex2f(1853,347);
    glVertex2f(1848,329);

    glEnd();



    //Human
    glBegin(GL_POLYGON);
    glColor3f(0.77f,0.63f,0.43f);
    human();

    //Head
    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    human_head();

    //Human dress
    glBegin(GL_POLYGON);
    glColor3f(0.35f,0.36f,0.38f);
    human_dress();

    //bamboo stick
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(1820,385);
    glVertex2f(1913,345);
    glEnd();




    /*
    glVertex2f(1797, 325);
    glVertex2f(1796, 325);
    glVertex2f(1796, 326);
    glVertex2f(1796, 326);
    glVertex2f(1796, 327);
    glVertex2f(1796, 327);
    glVertex2f(1796, 328);
    glVertex2f(1796, 328);
    glVertex2f(1796, 329);
    glVertex2f(1796, 329);
    glVertex2f(1796, 329);
    glVertex2f(1796, 330);
    glVertex2f(1797, 330);
    glVertex2f(1797, 330);
    glVertex2f(1797, 330);
    glVertex2f(1797, 331);
    glVertex2f(1797, 331);
    glVertex2f(1797, 331);
    glVertex2f(1797, 332);
    glVertex2f(1798, 332);
    glVertex2f(1798, 333);
    glVertex2f(1798, 333);
    glVertex2f(1799, 333);
    glVertex2f(1799, 333);
    glVertex2f(1799, 334);
    glVertex2f(1799, 334);
    glVertex2f(1799, 334);
    glVertex2f(1799, 335);
    glVertex2f(1799, 335);
    glVertex2f(1799, 335);
    glVertex2f(1800, 336);
    glVertex2f(1800, 336);
    glVertex2f(1800, 336);
    glVertex2f(1800, 336);
    glVertex2f(1801, 337);
    glVertex2f(1800, 337);
    glVertex2f(1801, 338);
    glVertex2f(1801, 339);
    glVertex2f(1802, 339);
    glVertex2f(1802, 340);
    glVertex2f(1802, 340);
    glVertex2f(1802, 340);
    glVertex2f(1802, 341);
    glVertex2f(1803, 341);
    glVertex2f(1803, 341);
    glVertex2f(1803, 342);
    glVertex2f(1804, 342);
    glVertex2f(1804, 343);
    glVertex2f(1804, 343);
    glVertex2f(1804, 344);
    glVertex2f(1804, 344);
    glVertex2f(1804, 345);
    glVertex2f(1805, 345);
    glVertex2f(1805, 345);
    glVertex2f(1805, 345);
    glVertex2f(1806, 345);
    glVertex2f(1914, 347);
    glVertex2f(1915, 347);
    glVertex2f(1915, 347);
    glVertex2f(1915, 346);
    glVertex2f(1915, 346);
    glVertex2f(1916, 345);
    glVertex2f(1916, 345);
    glVertex2f(1915, 344);
    glVertex2f(1915, 344);
    glVertex2f(1916, 343);
    glVertex2f(1917, 343);
    glVertex2f(1917, 342);
    glVertex2f(1917, 342);
    glVertex2f(1917, 342);
    glVertex2f(1917, 341);
    glVertex2f(1917, 341);
    glVertex2f(1917, 341);
    glVertex2f(1917, 341);
    glVertex2f(1917, 341);
    glVertex2f(1918, 340);
    glVertex2f(1918, 340);
    glVertex2f(1918, 339);
    glVertex2f(1918, 339);
    glVertex2f(1918, 339);
    glVertex2f(1917, 338);
    glVertex2f(1918, 338);
    glVertex2f(1918, 338);
    glVertex2f(1918, 337);
    glVertex2f(1918, 337);
    glVertex2f(1918, 337);
    glVertex2f(1918, 336);
    glVertex2f(1919, 336);
    glVertex2f(1919, 335);
    glVertex2f(1919, 335);
    glVertex2f(1918, 335);
    glVertex2f(1918, 335);
    glVertex2f(1919, 334);
    glVertex2f(1919, 334);
    glVertex2f(1919, 334);
    glVertex2f(1920, 333);
    glVertex2f(1920, 333);
    glVertex2f(1920, 332);
    glVertex2f(1920, 332);
    glVertex2f(1919, 332);
    glVertex2f(1920, 332);
    glVertex2f(1920, 331);
    glVertex2f(1920, 331);
    glVertex2f(1920, 330);
    glVertex2f(1920, 330);
    glVertex2f(1920, 329);
    glVertex2f(1921, 329);
    glVertex2f(1921, 329);
    glVertex2f(1921, 328);
    glVertex2f(1920, 327);
    glVertex2f(1920, 327);
    glVertex2f(1920, 327);
    glVertex2f(1920, 327);
    glVertex2f(1860, 337);
    */



    //Moving water shade ENDS
    glPopMatrix();


    //Mountain 5 (River front Mountain)
    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.6f,0.26f);
    mountain5();

    //Sun
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f,0.97f,0.45f);
    circle(1700, 900, 100, 100);


    //Tent 1______________________________________________________________

    //Side shade
    glBegin(GL_POLYGON);
    glColor3f(0.89f, 0.55f, 0.0f);
    glVertex2f(276, 169);
    glVertex2f(271, 207);
    glVertex2f(456, 318);
    glVertex2f(542, 187);
    glVertex2f(526, 145);
    glVertex2f(354, 133);
    glEnd();

    //Thin roof side shad
    glBegin(GL_POLYGON);
    glColor3f(0.74f, 0.46f, 0.16f);
    glVertex2f(456, 318);
    glVertex2f(551, 185);
    glVertex2f(542, 187);
    glVertex2f(450, 318);
    glEnd();

    //roof
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.67f, 0.14f);
    glVertex2f(252, 203);
    glVertex2f(346, 317);
    glVertex2f(456, 318);
    glVertex2f(343, 177);
    glEnd();

    //Front with gate
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.72f, 0.27f);
    glVertex2f(354, 133);
    glVertex2f(347, 175);
    glVertex2f(478, 278);
    glVertex2f(542, 187);
    glVertex2f(526, 145);
    glVertex2f(461, 142);
    glVertex2f(457, 251);
    glVertex2f(456, 251);
    glVertex2f(456, 251);
    glVertex2f(455, 251);
    glVertex2f(455, 251);
    glVertex2f(455, 251);
    glVertex2f(454, 251);
    glEnd();

    //Gate
    glBegin(GL_POLYGON);
    glColor3f(0.74f, 0.46f, 0.16f);
    glVertex2f(461, 141);
    glVertex2f(457, 251);
    glVertex2f(456, 251);
    glVertex2f(456, 251);
    glVertex2f(455, 251);
    glVertex2f(455, 251);
    glVertex2f(455, 251);
    glVertex2f(454, 251);
    glVertex2f(450, 139);
    glEnd();

    //Tent anchor 1
    glBegin(GL_TRIANGLES);
    glColor3f(0.58f,0.3f,0.0f);
    glVertex2f(290,141);
    glVertex2f(296,141);
    glVertex2f(293,119);
    glEnd();

    //Tent anchor 2
    glBegin(GL_TRIANGLES);
    glColor3f(0.58f,0.3f,0.0f);
    glVertex2f(221,192);
    glVertex2f(228,192);
    glVertex2f(225,174);
    glEnd();

    //Tent anchor 3
    glBegin(GL_TRIANGLES);
    glColor3f(0.58f,0.3f,0.0f);
    glVertex2f(581,167);
    glVertex2f(587,167);
    glVertex2f(584,147);
    glEnd();



    //Tent anchor 1 rope
    glBegin(GL_LINES);
    glColor3f(0.49,0.25,0.0f);
    glVertex2f(289,134);
    glVertex2f(342,177);
    glEnd();

    //Tent anchor 2 rope
    glBegin(GL_LINES);
    glColor3f(0.49,0.25,0.0f);
    glVertex2f(220,184);
    glVertex2f(253,204);
    glEnd();

    //Tent anchor 3 rope
    glBegin(GL_LINES);
    glColor3f(0.49,0.25,0.0f);
    glVertex2f(588,158);
    glVertex2f(548,187);
    glEnd();



    //Tent 2______________________________________________________________

    //Side shade
    glBegin(GL_POLYGON);
    glColor3f(0.89f, 0.55f, 0.0f);
    glVertex2f(926, 199);
    glVertex2f(931, 237);
    glVertex2f(746, 348);
    glVertex2f(660, 217);
    glVertex2f(676, 175);
    glVertex2f(848, 163);
    glEnd();

    //Thin roof side shad
    glBegin(GL_POLYGON);
    glColor3f(0.74f, 0.46f, 0.16f);
    glVertex2f(746, 348);
    glVertex2f(651, 215);
    glVertex2f(660, 217);
    glVertex2f(752, 348);
    glEnd();

    //roof
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.67f, 0.14f);
    glVertex2f(950, 233);
    glVertex2f(856, 347);
    glVertex2f(746, 348);
    glVertex2f(859, 207);
    glEnd();

    //Front with gate
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.72f, 0.27f);
    glVertex2f(848, 163);
    glVertex2f(855, 205);
    glVertex2f(724, 308);
    glVertex2f(660, 217);
    glVertex2f(676, 175);
    glVertex2f(741, 172);
    glVertex2f(745, 281);
    glVertex2f(746, 281);
    glVertex2f(746, 281);
    glVertex2f(747, 281);
    glVertex2f(747, 281);
    glVertex2f(747, 281);
    glVertex2f(748, 281);
    glEnd();

    //Gate
    glBegin(GL_POLYGON);
    glColor3f(0.74f, 0.46f, 0.16f);
    glVertex2f(741, 171);
    glVertex2f(745, 281);
    glVertex2f(746, 281);
    glVertex2f(746, 281);
    glVertex2f(747, 281);
    glVertex2f(747, 281);
    glVertex2f(747, 281);
    glVertex2f(748, 281);
    glVertex2f(752, 169);
    glEnd();

    //Tent anchor 1
    glBegin(GL_TRIANGLES);
    glColor3f(0.58f,0.3f,0.0f);
    glVertex2f(912, 171);
    glVertex2f(906, 171);
    glVertex2f(909, 149);
    glEnd();

    //Tent anchor 2
    glBegin(GL_TRIANGLES);
    glColor3f(0.58f,0.3f,0.0f);
    glVertex2f(981, 222);
    glVertex2f(974, 222);
    glVertex2f(977, 204);
    glEnd();

    //Tent anchor 3
    glBegin(GL_TRIANGLES);
    glColor3f(0.58f,0.3f,0.0f);
    glVertex2f(621, 197);
    glVertex2f(615, 197);
    glVertex2f(618, 177);
    glEnd();



    //Tent anchor 1 rope
    glBegin(GL_LINES);
    glColor3f(0.49,0.25,0.0f);
    glVertex2f(913, 164);
    glVertex2f(860, 207);
    glEnd();

    //Tent anchor 2 rope
    glBegin(GL_LINES);
    glColor3f(0.49,0.25,0.0f);
    glVertex2f(982, 214);
    glVertex2f(949, 234);
    glEnd();

    //Tent anchor 3 rope
    glBegin(GL_LINES);
    glColor3f(0.49,0.25,0.0f);
    glVertex2f(614, 188);
    glVertex2f(654, 217);
    glEnd();














    //Tree on mountain 5
    glBegin(GL_POLYGON);
    glColor3f(0.02f,0.58f,0.1f);
    glVertex2f(1920, 420);
    glColor3f(0.0f,0.42f,0.06f);
    tree_0n_mountain5();


    //Big tree
    glBegin(GL_POLYGON);
    //Light color
    glColor3f(0.58f,0.3f,0.0f);
    glVertex2f(0, 200);
    //Most dark color
    glColor3f(0.49,0.25,0.0f);
    big_tree_root_with_shade1();
    //Dark color
    glColor3f(0.51f,0.26f,0.0f);
    big_tree_root_with_shade2();


    //Big tree leaf
    glBegin(GL_POLYGON);
    glColor3f(0.35f,0.7f,0.0f);
    tree_leaf1();
    glBegin(GL_POLYGON);
    glColor3f(0.01f,0.61f,0.0f);
    tree_leaf2();
    glBegin(GL_POLYGON);
    glColor3f(0.42f,0.88f,0.17f);
    tree_leaf3();
    glBegin(GL_POLYGON);
    glColor3f(0.66f,0.95f,0.12f);
    tree_leaf4();


    //Right side tree branch
    glBegin(GL_POLYGON);
    glColor3f(0.49,0.25,0.0f);
    right_tree_branch();








    // Cloud 1

    glPushMatrix();
    glTranslatef(+position,0,0);


    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f,1.0f,1.0f);
    circle(0, 1000, 25, 25);

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f,1.0f,1.0f);
    circle(90, 1000, 20, 20);

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f,1.0f,1.0f);
    circle(30, 1030, 30, 30);

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f,1.0f,1.0f);
    circle(25, 1015, 25, 25);


    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f,1.0f,1.0f);
    circle(25, 1005, 25, 25);

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f,1.0f,1.0f);
    circle(60, 1027, 20, 20);

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f,1.0f,1.0f);
    circle(35, 1040, 20, 20);

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f,1.0f,1.0f);
    circle(70, 1015, 20, 20);

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f,1.0f,1.0f);
    circle(70, 1000, 20, 20);

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f,1.0f,1.0f);
    circle(50, 1000, 20, 20);

    glPopMatrix();


    //Plane
    glPushMatrix();
    glTranslatef(-position,0,0);
    glBegin(GL_POLYGON);
    glColor3f(0.42f,0.63f,0.72f);
    plane();
    glPopMatrix();



    glFlush(); // Render now
}


void cover() {
    //glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
    glClearColor(0.61f,0.95f,1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
    glLineWidth(2);

    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(0,1080);
    glVertex2f(0,0);
    glVertex2f(1920,0);
    glVertex2f(1920,1080);
    glColor3f(0.38f,0.0f,1.0f);
    glVertex2f(0,0);
    glVertex2f(0,1080);
    glVertex2f(1920,1080);
    glVertex2f(1920,0);
    glColor3f(1.0f,0.84f,0.0f);
    glVertex2f(0,0);
    glEnd();

    glColor3f(1.0f,1.0f,1.0f);
    renderBitmapString(772, 999, 0.0f, GLUT_BITMAP_HELVETICA_18, " 01047 - COMPUTER GRAPHICS [A]");
    renderBitmapString(800, 945, 0.0f, GLUT_BITMAP_HELVETICA_18, "  Somewhere in Bandarban");
    renderBitmapString(791, 885, 0.0f, GLUT_BITMAP_HELVETICA_18, "      Submitted by Group- 4");
    renderBitmapString(676, 810, 0.0f, GLUT_BITMAP_HELVETICA_18, "ID                                 Name                                                 Contribution ");
    renderBitmapString(676, 756, 0.0f, GLUT_BITMAP_HELVETICA_18, "19-39783-1                Mahmud Hossain Tushar                          16.5% ");
    renderBitmapString(676, 702, 0.0f, GLUT_BITMAP_HELVETICA_18, "20-42076-1                MD. Sazib Ahmed                                    16.5% ");
    renderBitmapString(676, 648, 0.0f, GLUT_BITMAP_HELVETICA_18, "20-42226-1                Shariar Alam                                             16.5% ");
    renderBitmapString(676, 594, 0.0f, GLUT_BITMAP_HELVETICA_18, "20-43256-1                Muhammad Intisar Mahmud                    16.5% ");
    renderBitmapString(676, 540, 0.0f, GLUT_BITMAP_HELVETICA_18, "20-43479-1                MD. Shah Jalal                                        16.5% ");
    renderBitmapString(676, 486, 0.0f, GLUT_BITMAP_HELVETICA_18, "20-43502-1                Pulok Kanti Paul                                      16.5% ");
    renderBitmapString(860, 270, 0.0f, GLUT_BITMAP_HELVETICA_18, "Submitted to");
    renderBitmapString(860, 216, 0.0f, GLUT_BITMAP_HELVETICA_18, "MAHFUJUR RAHAMAN");
    renderBitmapString(860, 189, 0.0f, GLUT_BITMAP_HELVETICA_12, "FACULTY OF SCIENCE & TECHNOLOGY");
    renderBitmapString(860, 162, 0.0f, GLUT_BITMAP_HELVETICA_10, "American International University-Bangladesh");

 glFlush(); // Render now
}

void night() {

    //glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)





    glFlush(); // Render now
}

void sunset() {

    //glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
    glClearColor(1.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)






    glFlush(); // Render now
}



void handleKeypress(unsigned char key, int x, int y) {

    switch (key) {
    case 'd':
        //speed4 = 0;
        glutDisplayFunc(day);
        glutPostRedisplay();
        break;

    case 's':
        glutDisplayFunc(sunset);
        glutPostRedisplay();
        break;

    case 'n':
        glutDisplayFunc(night);
        glutPostRedisplay();
        break;

    case 'c':
        //speed4 = 2;
        glutDisplayFunc(cover);
        glutPostRedisplay();
        break;
    case 'f':
        glutFullScreen();
        glutPostRedisplay();
        break;

    case 'r':
        glutReshapeWindow(1920, 1080);
        glutInitWindowPosition(0, 0);
        glutPostRedisplay();
        break;

    case 'l':
        glutReshapeWindow(960, 540);
        glutInitWindowPosition(100, 100);
        glutPostRedisplay();
        break;

    case 'e':
        exit(0);
        break;

        glutPostRedisplay();
    }
}




/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char ** argv) {

    cout << "Press d : To Start Day mode" << endl << endl;
    cout << "Press s : To Start Sunset mode" << endl << endl;
    cout << "Press n : To Start Night mode" << endl << endl;
    cout << "Press c : To Go to Cover " << endl << endl;
    cout << "Press f : TO Expand to Full Screen " << endl << endl;
    cout << "Press f : TO Make Small Screen " << endl << endl;
    cout << "Press r : To Restore the Screen " << endl << endl;
    cout << "Press e : To Exit " << endl << endl;

    //cout << "Press 1 : For Animation ON " << endl << endl;
    //cout << "Press 0 : For Animation OFF " << endl << endl;
    //cout << "Press h : For hands up and down " << endl << endl;
    //cout << "Press n : For Night " << endl << endl;
    //cout << "Press d : For Day " << endl << endl;
    //cout << "Press r : For Rain start " << endl << endl;
    //cout << "Press e : For Rain stop " << endl << endl;
    // cout << "Press UP arrow : For Speed up " << endl << endl;
    // cout << "Press Down Arrow : For Speed Down " << endl << endl;
    // cout << "Press + : For Full Screen " << endl << endl;
    // cout << "Press - : For Restore Screen " << endl << endl;
    // cout << "Press x : For Hide Screen " << endl << endl;

    glutInit( & argc, argv);
    glutInitWindowSize(1920, 1080); // Set the window's initial width & height
    glutInitWindowPosition(0, 0); // Set the window's initial position according to the monitor
    glutCreateWindow("Somewhere in Bandarban"); // Create a window with the given title
    glOrtho(0, 1920, 0, 1080, -100, 100);
    glutDisplayFunc(day); // Register display callback handler for window re-paint

    glutKeyboardFunc(handleKeypress);
    glutTimerFunc(20, update, 0);

    //glutTimerFunc(100,update,0);
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
