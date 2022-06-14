#include <iostream>
#include <cmath>
#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

using namespace std;

/*
Void coordinates(x1,y1,step)
{
for(int i=0; i<step; i++)
        {
            x1+=1/m;
            y1+=1;
            cout<< "( "<<round(x1)<<", "<<round(y1)<<" )"<<endl;
        }

}
*/



int main()
{
    float x1,y1,x2,y2,m,xinc,yinc,x,y;
    int step1,step2,step;

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
/*
    xinc=x/step;
    yinc=y/step;


    cout<< "( "<<x1<<", "<<y1<<" )"<<endl;
    for(int i=0; i<step; i++)
    {
        x1+=xinc;
        y1+=yinc;
        cout<< "( "<<x1<<", "<<y1<<" )"<<endl;
    }



    */
    cout<< "( "<<round(x1)<<", "<<round(y1)<<" )"<<endl;

    glBegin(GL_POINTS);
    glVertex2i(x1,y1);
    glEnd();

    if(m<1)
    {
        for(int i=0; i<step; i++)
        {
            x1+=1;
            y1+=m;
            cout<< "( "<<round(x1)<<", "<<round(y1)<<" )"<<endl;
            glBegin(GL_POINTS);
            glVertex2i(x1,y1);
            glEnd();
        }


    }
    else if(m>1)
    {
        for(int i=0; i<step; i++)
        {
            x1+=1/m;
            y1+=1;
            cout<< "( "<<round(x1)<<", "<<round(y1)<<" )"<<endl;
        }

    }
    else if(m=1)
    {
        for(int i=0; i<step; i++)
        {
            x1+=1;
            y1+=1;
            cout<< "( "<<round(x1)<<", "<<round(y1)<<" )"<<endl;
        }
    }
    else
    {
        cout <<" Error"<< endl;

    }

    cout << endl;
    return 0;
}
