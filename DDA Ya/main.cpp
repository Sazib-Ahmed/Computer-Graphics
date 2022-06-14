#include<windows.h>
#include<GL/glut.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int isBigger(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}


void display (void)
{
    float x = 10, y = 10;

    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (0.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POINTS);
    glVertex2i(x,y);

    int m = 1;
    cout<<m<<endl;
    for(int k=0;k<40;k++)
    {
        if(m<1)

        {
            x = x+1;
            y=y+m;
            glVertex2i(x,y);
        }

        else if(m>1)

        {
            x = x+(1/m);
            y = y+1;
            glVertex2i(x,y);

        }

        else if(m=1)

        {
            x=x+1;
            y=y+1;
            glVertex2i(x,y);

        }

    }

    glEnd();
    glFlush();


    //second line

    glColor3f (0.0, 0.0, 0.0);
    glPointSize(5.0);

    float x1 = 50, y1 = 50;
    int mm = -1;
    glBegin(GL_POINTS);
    glVertex2i(x1,y1);

    for(int l=0;l</*isBigger(ex,ey)*/40;l++)
    {
        if(mm<1)

        {
            x1 = x1+1;
            y1 = y1+mm;
            glVertex2i(x1,y1);
        }

        else if(mm>1)

        {
            x1 = x1+(1/mm);
            y1 = y1+1;
            glVertex2i(x1,y1);

        }

        else if(mm==1)

        {
            x1=x1+1;
            y1=y1+1;
            glVertex2i(x1,y1);

        }

    }

    glEnd();
    glFlush();


    //third line
    glColor3f (0.0, 0.0, 0.0);
    glPointSize(5.0);
float x3 = 20, y3 = 30;
    glBegin(GL_POINTS);
    glVertex2i(x3,y3);
    int m3 = 0;
    cout<<m3<<endl;



    for(int m=0;m<80;m++)
    {
        if(m3<1)

        {
            x3= x3+1;
            y3=y3+m3;
            glVertex2i(x3,y3);
        }

        else if(m3>1)

        {
            x3 = x3+(1/m3);
            y3 = y3+1;
            glVertex2i(x3,y3);

        }

        else if(m3==1)

        {
            x3=x3+1;
            y3=y3+1;
            glVertex2i(x3,y3);

        }

    }

    glEnd();
    glFlush();



}










void init(void)
{
    glClearColor (1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("DDA Line Algorithm ");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;

}
