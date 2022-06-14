#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

#include<iostream>
#include<stdlib.h>
#include <cmath>



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

void display() {
    float x1,y1,x2,y2,m,xinc,yinc,x,y;
    int step1,step2,step;

glClearColor(0.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
/// glColor3f(0.0,0.0,0.0);
///renderBitmapString(0.0f, 0.0f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "Hello");
glLineWidth(2);
glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);

glVertex2f(1.00f, 0.00f);
glVertex2f(-1.00f, 0.00f);
glVertex2f(0.00f, 1.00f);
glVertex2f(0.00f, -1.00f);
glEnd();

    x1=2;
    y1=3;
    x2=9;
    y2=7;
    //cout << "Pixel Coordinates"  << endl;

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

 //cout<< "( "<<round(x1)<<", "<<round(y1)<<" )"<<endl;

 if(m<1)
    {
        for(int i=0; i<step; i++)
        {
            x1+=1;
            y1+=m;
            //cout<< "( "<<round(x1)<<", "<<round(y1)<<" )"<<endl;
            glVertex2i(x1,y1);
        }


    }
    else if(m>1)
    {
        for(int i=0; i<step; i++)
        {
            x1+=1/m;
            y1+=1;
            //cout<< "( "<<round(x1)<<", "<<round(y1)<<" )"<<endl;
            glVertex2i(x1,y1);
        }

    }
    else if(m=1)
    {
        for(int i=0; i<step; i++)
        {
            x1+=1;
            y1+=1;
            //cout<< "( "<<round(x1)<<", "<<round(y1)<<" )"<<endl;
            glVertex2i(x1,y1);
        }
    }
    else
    {
        //cout <<" Error"<< endl;

    }
    glEnd();





 glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitWindowSize(1080, 1200); // Set the window's initial width & height
glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
glutDisplayFunc(display); // Register display callback handler for window re-paint
glutMainLoop(); // Enter the event-processing loop
return 0;
}
