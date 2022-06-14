#include<windows.h>
#include<GL/glut.h>
#include<iostream>
#include<stdlib.h>
#include <cmath>

using namespace std;


void display (void)
{
    float x1,y1,x2,y2,m,xinc,yinc,x,y;
    int step1,step2,step;

/*
    cout << "DDA line Algorithm " << endl;
    cout << "Enter the points to see line coordinates"  << endl<< endl;
    cout << "First Point, X1 = " ;
    cin>>x1;
    cout << "First Point, Y1 = " ;
    cin>>y1;
    cout<<endl;
    cout << "Second Point, X2 = " ;
    cin>>x2;
    cout << "Second Point, Y2 = " ;
    cin>>y2;
    cout<<endl;
    cout << "Pixel Coordinates"  << endl;
    */

    x1=2;
    y1=3;
    x2=9;
    y2=7;
    cout << "Pixel Coordinates"  << endl;

    x=x2-x1;
    y=y2-y1;

    m=y/x;

    step1=x2-x1;
    step2=y2-y1;


    if(step1>step2)
    {
        step=step1;
    }
    else if(step1<step2)
    {

        step=step2;
    }





    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (0.0, 0.0, 0.0);

    glPointSize(2.0);
    glBegin(GL_POINTS);
    glVertex2i(x1,y1);

 cout<< "( "<<round(x1)<<", "<<round(y1)<<" )"<<endl;

 if(m<1)
    {
        for(int i=0; i<step; i++)
        {
            x1+=1;
            y1+=m;
            cout<< "( "<<round(x1)<<", "<<round(y1)<<" )"<<endl;
            glVertex2i(x1,y1);
        }


    }
    else if(m>1)
    {
        for(int i=0; i<step; i++)
        {
            x1+=1/m;
            y1+=1;
            cout<< "( "<<round(x1)<<", "<<round(y1)<<" )"<<endl;
            glVertex2i(x1,y1);
        }

    }
    else if(m=1)
    {
        for(int i=0; i<step; i++)
        {
            x1+=1;
            y1+=1;
            cout<< "( "<<round(x1)<<", "<<round(y1)<<" )"<<endl;
            glVertex2i(x1,y1);
        }
    }
    else
    {
        cout <<" Error"<< endl;

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
