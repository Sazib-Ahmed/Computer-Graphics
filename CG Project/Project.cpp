#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include<cstdio>
#include <GL/gl.h>
#define PI          3.141516
#include <GL/glut.h>
#include<math.h>


#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include <vector>
#include <math.h>
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


GLfloat position = 0.0f;
GLfloat speed = 0.02f;

void update(int value)
{

    if(position > 1.0)
        position = -1.0f;

    position += speed;

    glutPostRedisplay();
    glutTimerFunc(100, update, 0);
}


void display() {
glClearColor(0.64f,0.86f,1.0f, 1.0f); // Set background color to black and opaque
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
/// glColor3f(0.0,0.0,0.0);
///renderBitmapString(0.0f, 0.0f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "Hello");
glOrtho(0, 1920, 0, 1080, -100, 100);

glLineWidth(2);

glBegin(GL_POLYGON);
glColor3f(0.18f,0.64f,1.0f);
glVertex2f(0,1080);
glVertex2f(0,425);
glVertex2f(1920,425);
glVertex2f(1920,1080);


//glBegin(GL_POLYGON);
glColor3f(0.97f,1.0f,0.7f);
glVertex2f(0,425);
glVertex2f(0,1080);
glVertex2f(1920,1080);
glVertex2f(1920,425);

glEnd();





//Mountain 1
glBegin(GL_POLYGON);
glColor3f(0.35f,0.96f,0.6f);

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

//LJHLJL


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
glVertex2f(696,657);
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
/*
cco

//sfgfgfg


glVertex2f(639,650);
glVertex2f(647,647);
glVertex2f(654,645);
glVertex2f(665,643);
glVertex2f(670,643);
glVertex2f(675,645);


glVertex2f(681,648);
glVertex2f(685,651);
glVertex2f(694,654);
glVertex2f(700,660);
glVertex2f(707,664);
glVertex2f(717,671);
glVertex2f(730,679);
glVertex2f(742,690);

glVertex2f(754,697);
glVertex2f(769,708);
glVertex2f(778,715);
glVertex2f(790,722);
glVertex2f(797,728);
glVertex2f(806,735);
glVertex2f(813,741);
glVertex2f(816,744);
glVertex2f(819,744);



glVertex2f(832,737);
glVertex2f(837,734);
glVertex2f(844,730);
glVertex2f(852,725);
glVertex2f(859,721);
glVertex2f(862,716);

glVertex2f(870,712);
glVertex2f(877,709);
glVertex2f(880,709);
glVertex2f(884,709);
glVertex2f(890,712);
glVertex2f(896,715);
glVertex2f(904,719);
glVertex2f(909,726);

//kdasjvhf
*/
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


//Shadow 1
glBegin(GL_POLYGON);
glColor3f(0.56f,1.0f,0.75f);
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


//Shadow 2
glBegin(GL_POLYGON);
glColor3f(0.56f,1.0f,0.75f);
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

//Shadow 4
glBegin(GL_POLYGON);
glColor3f(0.56f,1.0f,0.75f);


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

//Mountain 2
glBegin(GL_POLYGON);
glColor3f(0.18f,0.8f,0.45f);


glVertex2f(0,639);
glVertex2f(38,635);
glVertex2f(47,633);
glVertex2f(70,639);
glVertex2f(81,634);
glVertex2f(114,645);
glVertex2f(119,642);
glVertex2f(156,659);
glVertex2f(193,638);
glVertex2f(199,636);
glVertex2f(218,620);
glVertex2f(229,613);
glVertex2f(237,610);
glVertex2f(243,607);
glVertex2f(254,609);
glVertex2f(280,611);
glVertex2f(296,610);
glVertex2f(304,610);
glVertex2f(315,604);
glVertex2f(327,597);
glVertex2f(347,589);
glVertex2f(373,581);
glVertex2f(407,578);
glVertex2f(439,577);
glVertex2f(463,591);
glVertex2f(472,596);
glVertex2f(482,598);
glVertex2f(487,599);
glVertex2f(507,597);
glVertex2f(551,600);
glVertex2f(564,605);
glVertex2f(575,600);
glVertex2f(596,590);
glVertex2f(613,583);
glVertex2f(655,578);
glVertex2f(662,576);
glVertex2f(686,565);
glVertex2f(748,537);
glVertex2f(769,532);
glVertex2f(793,534);
glVertex2f(821,519);
glVertex2f(845,513);
glVertex2f(881,503);
glVertex2f(900,425);
glVertex2f(0,425);
glEnd();

//Mountain 3
glBegin(GL_POLYGON);
glColor3f(0.0f,0.6f,0.26f);
glVertex2f(1920,425);
glVertex2f(0,425);
glVertex2f(0,427);
glVertex2f(40,431);
glVertex2f(74,436);
glVertex2f(141,448);
glVertex2f(189,450);
glVertex2f(249,455);
glVertex2f(321,465);
glVertex2f(404,484);
glVertex2f(439,488);
glVertex2f(465,491);
glVertex2f(491,496);
glVertex2f(516,498);
glVertex2f(637,485);
glVertex2f(649,482);
glVertex2f(670,480);
glVertex2f(693,482);
glVertex2f(722,485);
glVertex2f(734,487);
glVertex2f(770,491);
glVertex2f(808,498);
glVertex2f(829,499);
glVertex2f(847,503);
glVertex2f(865,509);
glVertex2f(881,512);
glVertex2f(892,516);
glVertex2f(906,514);
glVertex2f(919,510);
glVertex2f(942,506);
glVertex2f(956,503);
glVertex2f(978,500);
glVertex2f(987,502);
glVertex2f(996,506);
glVertex2f(1004,511);
glVertex2f(1025,516);
glVertex2f(1043,517);
glVertex2f(1063,519);
glVertex2f(1082,519);
glVertex2f(1090,525);
glVertex2f(1104,531);
glVertex2f(1111,539);
glVertex2f(1126,545);
glVertex2f(1140,551);
glVertex2f(1152,551);
glVertex2f(1164,551);
glVertex2f(1176,549);
glVertex2f(1186,551);
glVertex2f(1196,553);
glVertex2f(1211,556);
glVertex2f(1220,562);
glVertex2f(1229,566);
glVertex2f(1239,569);
glVertex2f(1255,573);
glVertex2f(1269,577);
glVertex2f(1281,582);
glVertex2f(1289,587);
glVertex2f(1305,599);
glVertex2f(1330,609);
glVertex2f(1442,604);
glVertex2f(1457,602);
glVertex2f(1468,599);
glVertex2f(1479,598);
glVertex2f(1491,600);
glVertex2f(1505,604);
glVertex2f(1518,608);
glVertex2f(1527,611);
glVertex2f(1547,610);
glVertex2f(1563,611);
glVertex2f(1584,615);
glVertex2f(1597,618);
glVertex2f(1609,620);
glVertex2f(1620,622);
glVertex2f(1641,629);
glVertex2f(1654,634);
glVertex2f(1665,635);
glVertex2f(1673,640);
glVertex2f(1685,645);
glVertex2f(1696,645);
glVertex2f(1709,645);
glVertex2f(1725,642);
glVertex2f(1735,638);
glVertex2f(1746,636);
glVertex2f(1761,632);
glVertex2f(1777,628);
glVertex2f(1791,628);
glVertex2f(1800,629);
glVertex2f(1811,633);
glVertex2f(1819,635);
glVertex2f(1826,636);
glVertex2f(1842,636);
glVertex2f(1851,634);
glVertex2f(1862,634);
glVertex2f(1870,634);
glVertex2f(1880,636);
glVertex2f(1890,638);
glVertex2f(1899,640);
glVertex2f(1908,644);
glVertex2f(1920,640);
glEnd();

//Mountain 4
glBegin(GL_POLYGON);
glColor3f(0.0f,0.4f,0.1f);
glVertex2f(1668,425);
glVertex2f(1668,429);
glVertex2f(1668,434);
glVertex2f(1669,441);
glVertex2f(1668,448);
glVertex2f(1668,456);
glVertex2f(1670,466);
glVertex2f(1671,474);
glVertex2f(1673,479);
glVertex2f(1674,480);
glVertex2f(1675,482);
glVertex2f(1676,484);
glVertex2f(1676,487);
glVertex2f(1677,492);
glVertex2f(1679,504);
glVertex2f(1679,506);
glVertex2f(1679,508);
glVertex2f(1679,509);
glVertex2f(1680,511);
glVertex2f(1680,512);
glVertex2f(1685,524);
glVertex2f(1685,525);
glVertex2f(1685,526);
glVertex2f(1685,527);
glVertex2f(1690,537);
glVertex2f(1690,538);
glVertex2f(1690,539);
glVertex2f(1691,540);
glVertex2f(1696,543);
glVertex2f(1701,547);
glVertex2f(1704,549);
glVertex2f(1708,551);
glVertex2f(1709,553);
glVertex2f(1710,555);
glVertex2f(1713,560);
glVertex2f(1715,565);
glVertex2f(1718,570);
glVertex2f(1723,581);
glVertex2f(1727,584);
glVertex2f(1732,586);
glVertex2f(1738,589);
glVertex2f(1742,591);
glVertex2f(1745,592);
glVertex2f(1749,594);
glVertex2f(1751,595);
glVertex2f(1753,594);
glVertex2f(1754,594);
glVertex2f(1755,594);
glVertex2f(1757,595);
glVertex2f(1758,595);
glVertex2f(1763,602);
glVertex2f(1764,605);
glVertex2f(1769,605);
glVertex2f(1770,606);
glVertex2f(1772,607);
glVertex2f(1774,608);
glVertex2f(1775,609);
glVertex2f(1775,610);
glVertex2f(1778,619);
glVertex2f(1780,624);
glVertex2f(1780,625);
glVertex2f(1785,626);
glVertex2f(1788,626);
glVertex2f(1791,625);
glVertex2f(1794,624);
glVertex2f(1797,623);
glVertex2f(1803,622);
glVertex2f(1807,621);
glVertex2f(1809,620);
glVertex2f(1812,621);
glVertex2f(1816,623);
glVertex2f(1817,623);
glVertex2f(1817,624);
glVertex2f(1820,629);
glVertex2f(1823,632);
glVertex2f(1826,636);
glVertex2f(1829,642);
glVertex2f(1835,655);
glVertex2f(1837,657);
glVertex2f(1842,667);
glVertex2f(1845,670);
glVertex2f(1847,671);
glVertex2f(1851,671);
glVertex2f(1855,671);
glVertex2f(1857,673);
glVertex2f(1859,676);
glVertex2f(1860,681);
glVertex2f(1862,684);
glVertex2f(1866,686);
glVertex2f(1875,687);
glVertex2f(1882,688);
glVertex2f(1889,691);
glVertex2f(1896,695);
glVertex2f(1901,700);
glVertex2f(1907,709);
glVertex2f(1914,717);
glVertex2f(1917,724);
glVertex2f(1920,425);
glEnd();



//Waterfall
glBegin(GL_POLYGON);
glColor3f(0.7f,0.88f,1.00f);
glVertex2f(1725,425);
glVertex2f(1725,426);
glVertex2f(1725,428);
glVertex2f(1726,431);
glVertex2f(1726,434);
glVertex2f(1727,439);
glVertex2f(1728,444);
glVertex2f(1728,446);
glVertex2f(1729,449);
glVertex2f(1730,457);
glVertex2f(1731,465);
glVertex2f(1733,475);
glVertex2f(1734,486);
glVertex2f(1735,492);
glVertex2f(1738,510);
glVertex2f(1739,515);
glVertex2f(1741,525);
glVertex2f(1742,536);
glVertex2f(1745,552);
glVertex2f(1747,562);
glVertex2f(1748,572);
glVertex2f(1749,574);
glVertex2f(1750,575);
glVertex2f(1752,575);
glVertex2f(1754,576);
glVertex2f(1755,577);
glVertex2f(1754,581);
glVertex2f(1754,587);
glVertex2f(1755,591);
glVertex2f(1754,594);
glVertex2f(1756,594);
glVertex2f(1757,595);
glVertex2f(1758,595);
glVertex2f(1759,592);
glVertex2f(1760,588);
glVertex2f(1760,584);
glVertex2f(1759,580);
glVertex2f(1759,577);
glVertex2f(1758,575);
glVertex2f(1756,574);
glVertex2f(1754,573);
glVertex2f(1752,572);
glVertex2f(1752,571);
glVertex2f(1752,567);
glVertex2f(1752,565);
glVertex2f(1752,555);
glVertex2f(1753,547);
glVertex2f(1754,535);
glVertex2f(1755,503);
glVertex2f(1757,485);
glVertex2f(1757,465);
glVertex2f(1759,454);
glVertex2f(1759,444);
glVertex2f(1760,436);
glVertex2f(1760,430);
glVertex2f(1760,425);
glEnd();

//River front Land
glBegin(GL_POLYGON);
glColor3f(0.54f,0.85f,0.31f);
glVertex2f(0,0);
glVertex2f(0,300);
glVertex2f(1920,300);
glVertex2f(1920,0);
glEnd();

//Road
glBegin(GL_TRIANGLE_FAN);
glColor3f(0.88f,0.9f,0.67f);
glVertex2f(1237,11);
glVertex2f(1266,16);
glVertex2f(1285,20);
glVertex2f(1323,26);
glVertex2f(1362,33);
glVertex2f(1383,37);
glVertex2f(1394,40);
glVertex2f(1408,41);
glVertex2f(1420,43);
glVertex2f(1431,45);
glVertex2f(1438,47);
glVertex2f(1449,51);
glVertex2f(1459,54);
glVertex2f(1464,57);
glVertex2f(1469,59);
glVertex2f(1473,63);
glVertex2f(1475,67);
glVertex2f(1478,74);
glVertex2f(1477,80);
glVertex2f(1472,88);
glVertex2f(1466,94);
glVertex2f(1459,100);
glVertex2f(1448,108);
glVertex2f(1440,116);
glVertex2f(1429,126);
glVertex2f(1417,143);
glVertex2f(1408,156);
glVertex2f(1404,163);
glVertex2f(1399,172);
glVertex2f(1395,182);
glVertex2f(1394,189);
glVertex2f(1394,198);
glVertex2f(1394,205);
glVertex2f(1396,217);
glVertex2f(1399,224);
glVertex2f(1403,231);
glVertex2f(1410,238);
glVertex2f(1415,242);
glVertex2f(1419,246);
glVertex2f(1425,249);
glVertex2f(1430,254);
glVertex2f(1439,259);
glVertex2f(1443,262);
glVertex2f(1448,265);
glVertex2f(1453,267);
glVertex2f(1460,271);
glVertex2f(1467,273);
glVertex2f(1475,277);
glVertex2f(1484,280);
glVertex2f(1499,283);
glVertex2f(1508,284);
glVertex2f(1520,287);
glVertex2f(1529,288);
glVertex2f(1537,289);
glVertex2f(1547,291);
glVertex2f(1557,293);
glVertex2f(1570,295);
glVertex2f(1578,296);
glVertex2f(1584,297);
glVertex2f(1592,298);
glVertex2f(1597,299);
glVertex2f(1602,299);
glVertex2f(1591,294);
glVertex2f(1586,291);
glVertex2f(1579,290);
glVertex2f(1574,288);
glVertex2f(1567,286);
glVertex2f(1561,284);
glVertex2f(1553,280);
glVertex2f(1544,275);
glVertex2f(1537,272);
glVertex2f(1526,267);
glVertex2f(1522,264);
glVertex2f(1516,259);
glVertex2f(1511,253);
glVertex2f(1507,249);
glVertex2f(1504,243);
glVertex2f(1501,240);
glVertex2f(1498,237);
glVertex2f(1498,233);
glVertex2f(1495,229);
glVertex2f(1494,222);
glVertex2f(1494,217);
glVertex2f(1494,211);
glVertex2f(1495,206);
glVertex2f(1497,203);
glVertex2f(1500,200);
glVertex2f(1504,196);
glVertex2f(1509,191);
glVertex2f(1514,187);
glVertex2f(1519,184);
glVertex2f(1523,181);
glVertex2f(1529,178);
glVertex2f(1534,172);
glVertex2f(1542,167);
glVertex2f(1555,160);
glVertex2f(1564,156);
glVertex2f(1578,151);
glVertex2f(1589,148);
glVertex2f(1599,144);
glVertex2f(1611,138);
glVertex2f(1622,130);
glVertex2f(1633,125);
glVertex2f(1646,119);
glVertex2f(1654,113);
glVertex2f(1666,105);
glVertex2f(1676,97);
glVertex2f(1687,90);
glVertex2f(1700,78);
glVertex2f(1704,73);
glVertex2f(1710,67);
glVertex2f(1717,62);
glVertex2f(1727,55);
glVertex2f(1735,48);
glVertex2f(1741,40);
glVertex2f(1745,33);
glVertex2f(1749,25);
glVertex2f(1751,20);
glVertex2f(1751,14);
glVertex2f(1747,11);
glVertex2f(1921,0);



glEnd();



glBegin(GL_POLYGON);
glColor3f(0.0f,0.6f,0.26f);
glVertex2f(1920,350);
glVertex2f(1602,299);
glVertex2f(1591,294);
glVertex2f(1586,291);
glVertex2f(1579,290);
glVertex2f(1574,288);
glVertex2f(1567,286);
glVertex2f(1561,284);
glVertex2f(1553,280);
glVertex2f(1544,275);
glVertex2f(1537,272);
glVertex2f(1526,267);
glVertex2f(1522,264);
glVertex2f(1516,259);
glVertex2f(1511,253);
glVertex2f(1507,249);
glVertex2f(1504,243);
glVertex2f(1501,240);
glVertex2f(1498,237);
glVertex2f(1498,233);
glVertex2f(1495,229);
glVertex2f(1494,222);
glVertex2f(1494,217);
glVertex2f(1494,211);
glVertex2f(1495,206);
glVertex2f(1497,203);
glVertex2f(1500,200);
glVertex2f(1504,196);
glVertex2f(1509,191);
glVertex2f(1514,187);
glVertex2f(1519,184);
glVertex2f(1523,181);
glVertex2f(1529,178);
glVertex2f(1534,172);
glVertex2f(1542,167);
glVertex2f(1555,160);
glVertex2f(1564,156);
glVertex2f(1578,151);
glVertex2f(1589,148);
glVertex2f(1599,144);
glVertex2f(1611,138);
glVertex2f(1622,130);
glVertex2f(1633,125);
glVertex2f(1646,119);
glVertex2f(1654,113);
glVertex2f(1666,105);
glVertex2f(1676,97);
glVertex2f(1687,90);
glVertex2f(1700,78);
glVertex2f(1704,73);
glVertex2f(1710,67);
glVertex2f(1717,62);
glVertex2f(1727,55);
glVertex2f(1735,48);
glVertex2f(1741,40);
glVertex2f(1745,33);
glVertex2f(1749,25);
glVertex2f(1751,20);
glVertex2f(1751,14);
glVertex2f(1747,11);
glVertex2f(1921,0);

glEnd();


//Water shade 1
glBegin(GL_POLYGON);
glColor3f(0.22f,0.7f,1.0f);

glVertex2f(1139,362);
glVertex2f(1148,367);
glVertex2f(1329,368);
glVertex2f(1398,368);
glVertex2f(1514,369);
glVertex2f(1517,366);
glVertex2f(1519,365);
glVertex2f(1523,364);
glVertex2f(1527,365);
glVertex2f(1610,365);
glVertex2f(1635,366);
glVertex2f(1661,366);
glVertex2f(1717,366);
glVertex2f(1719,365);
glVertex2f(1719,364);
glVertex2f(1717,362);
glVertex2f(1713,361);
glVertex2f(1623,359);
glVertex2f(1460,355);
glVertex2f(1429,355);
glVertex2f(1302,359);
glVertex2f(1278,361);
glVertex2f(1251,361);
glVertex2f(1212,362);
glVertex2f(1182,362);
glVertex2f(1160,362);
glVertex2f(1145,361);
glVertex2f(1141,362);
glEnd();


//Tent 1
glBegin(GL_POLYGON);
glColor3f(0.89f,0.55f,0.0f);
glVertex2f(276,169);
glVertex2f(271,207);
glVertex2f(456,318);
glVertex2f(551,185);
glVertex2f(528,145);
glVertex2f(354,133);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1.0f,0.67f,0.14f);
glVertex2f(252,203);
glVertex2f(346,317);
glVertex2f(456,318);
glVertex2f(343,177);

glEnd();

glBegin(GL_POLYGON);
glColor3f(1.f,0.72f,0.27f);
glVertex2f(354,133);
glVertex2f(347,175);
glVertex2f(478,278);
glVertex2f(542,187);
glVertex2f(526,145);
glVertex2f(461,142);
glVertex2f(457,251);
glVertex2f(456,251);
glVertex2f(456,251);
glVertex2f(455,251);
glVertex2f(455,251);
glVertex2f(455,251);
glVertex2f(454,251);
glEnd();



//Sun

glBegin(GL_TRIANGLE_FAN);
glColor3f(1.0f,0.97f,0.45f);
circle(1700, 900, 100, 100);


// Cloud

glPushMatrix();
glTranslatef(0.0f,-position,0.0f);


glBegin(GL_TRIANGLE_FAN);
glColor3f(1.0f,1.0f,1.0f);
circle(200, 1000, 25, 25);

glBegin(GL_TRIANGLE_FAN);
glColor3f(1.0f,1.0f,1.0f);
circle(290, 1000, 20, 20);

glBegin(GL_TRIANGLE_FAN);
glColor3f(1.0f,1.0f,1.0f);
circle(230, 1030, 30, 30);

glBegin(GL_TRIANGLE_FAN);
glColor3f(1.0f,1.0f,1.0f);
circle(225, 1015, 25, 25);


glBegin(GL_TRIANGLE_FAN);
glColor3f(1.0f,1.0f,1.0f);
circle(225, 1005, 25, 25);

glBegin(GL_TRIANGLE_FAN);
glColor3f(1.0f,1.0f,1.0f);
circle(260, 1027, 20, 20);

glBegin(GL_TRIANGLE_FAN);
glColor3f(1.0f,1.0f,1.0f);
circle(235, 1040, 20, 20);

glBegin(GL_TRIANGLE_FAN);
glColor3f(1.0f,1.0f,1.0f);
circle(270, 1015, 20, 20);

glBegin(GL_TRIANGLE_FAN);
glColor3f(1.0f,1.0f,1.0f);
circle(270, 1000, 20, 20);

glBegin(GL_TRIANGLE_FAN);
glColor3f(1.0f,1.0f,1.0f);
circle(250, 1000, 20, 20);
    glPopMatrix();



    glPushMatrix();
    glTranslatef(position,0.0f,1.0f);
    filledCircle(-0.7,0.4,0.1, 1.0,1.0,1.0);
    filledCircle(-0.45,0.4,0.2, 1.0,1.0,1.0);
    filledCircle(-0.2,0.4,0.1, 1.0,1.0,1.0);

    filledCircle(-0.1,0.8,0.1, 1.0,1.0,1.0);
    filledCircle(0.15,0.8,0.2, 1.0,1.0,1.0);
    filledCircle(0.4,0.8,0.1, 1.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f,-position,0.0f);
    filledCircle(0.8,0.55,0.15, 1.0,1.0,0.0);
    glPopMatrix();



 glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitWindowSize(1920,1080 ); // Set the window's initial width & height
glutInitWindowPosition(0,0);  // Set the window's initial position according to the monitor
glutCreateWindow("Mountain View"); // Create a window with the given title
glutDisplayFunc(display); // Register display callback handler for window re-paint
//glutTimerFunc(100,update,0);
glutMainLoop(); // Enter the event-processing loop
return 0;
}
