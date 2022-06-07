

#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

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


/*
glBegin(GL_TRIANGLES);
glColor3f(0.1, 0.2, 0.3);
glVertex3f(0, 0, 0);
glVertex3f(1, 0, 0);
glVertex3f(0, 1, 0);
glEnd();


glVertex2f(-0.45f, 0.46f);
glVertex2f(-0.3f, 0.2f);
glVertex2f(-0.3f, 0.2f);
glVertex2f(-0.6f, 0.2f);
glVertex2f(-0.6f, 0.2f);
glVertex2f(-0.45f, 0.46f);

glVertex2f(0.4f, -0.2f);
glVertex2f(0.5f, -0.5f);
glVertex2f(0.5f, -0.5f);
glVertex2f(0.3f, -0.5f);
glVertex2f(0.3f, -0.5f);
glVertex2f(0.4f, -0.2f);

glVertex2f(-0.6f, -0.2f);
glVertex2f(-0.3f, -0.2f);
glVertex2f(-0.3f, -0.2f);
glVertex2f(-0.3f, -0.5f);
glVertex2f(-0.3f, -0.5f);
glVertex2f(-0.6f, -0.5f);
glVertex2f(-0.6f, -0.5f);
glVertex2f(-0.6f, -0.2f);



glEnd();
/*


glVertex2f(-0.2f, 0.2f);
glVertex2f(0.2f, 0.2f);
glVertex2f(-0.2f, 0.2f);
glVertex2f(-0.2f, -0.2f);
glVertex2f(-0.2f, -0.2f);
glVertex2f(0.2f, -0.2f);
glVertex2f(0.2f, -0.2f);
glVertex2f(0.2f, 0.2f);

glVertex2f(0.1f, -0.1f);
glVertex2f(0.5f, -0.1f);
glVertex2f(0.1f, -0.1f);
glVertex2f(0.1f, -0.5f);
glVertex2f(0.1f, -0.5f);
glVertex2f(0.5f, -0.5f);
glVertex2f(0.5f, -0.5f);
glVertex2f(0.5f, -0.1f);
glEnd();


/*
glBegin(GL_POLYGON);
glColor3f(0.0f, 1.0f, 0.0f);
glVertex2f(-0.2f, 0.2f);
glVertex2f(-0.1f, 0.2f);
glVertex2f(-0.2f, 0.1f);
glVertex2f(-0.1f, 0.1f);
glVertex2f(-0.1f, 0.2f);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0f, 0.0f, 1.0f);
glVertex2f(0.1f, -0.1f);
glVertex2f(0.2f, -0.1f);
glVertex2f(0.1f, -0.2f);
glVertex2f(0.2f, -0.2f);
glVertex2f(0.2f, -0.1f);
glEnd();
*/

//Flag of Scotland
glBegin(GL_POLYGON);
glColor3f(1.0f, 1.0f, 1.0f);

glVertex2f(-0.0f, 0.8f);
glVertex2f(-0.0f, 0.2f);
glVertex2f(-1.0f, 0.2f);
glVertex2f(-1.0f, 0.8f);
glVertex2f(-0.0f, 0.8f);
glEnd();


glBegin(GL_POLYGON);
glColor3f(0.0f, 0.0f, 1.0f);
glVertex2f(-0.0f, 0.73f);
glVertex2f(-0.0f, 0.27f);
glVertex2f(-.38f, 0.5f);
glVertex2f(-0.0f, 0.73f);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0f, 0.0f, 1.0f);
glVertex2f(-1.0f, 0.73f);
glVertex2f(-1.0f, 0.27f);
glVertex2f(-.62f, 0.5f);
glVertex2f(-1.0f, 0.73f);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0f, 0.0f, 1.0f);
glVertex2f(-0.12f, 0.8f);
glVertex2f(-.5f, 0.575f);
glVertex2f(-.88f, 0.8f);
glVertex2f(-0.12f, 0.8f);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0f, 0.0f, 1.0f);
glVertex2f(-0.12f, 0.2f);
glVertex2f(-.5f, 0.375f);
glVertex2f(-.88f, 0.2f);
glVertex2f(-0.12f, 0.2f);
glEnd();

//Flag of Somalia
glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.502f, 1.0f);
	glVertex2f(0.1f , 0.63f);
	glVertex2f(0.6f , 0.63f);
	glVertex2f(0.6f , 0.3f);
	glVertex2f(0.1f , 0.3f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.38f , 0.5f);
	glVertex2f(0.46f , 0.5f);
	glVertex2f(0.4f , 0.44f);
	glVertex2f(0.44f , 0.36f);
	glVertex2f(0.35f , 0.42f);
	glVertex2f(0.26f , 0.36f);
	glVertex2f(0.3f , 0.44f);
	glVertex2f(0.24f , 0.5f);
	glVertex2f(0.32f , 0.5f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f , 0.58f);
	glVertex2f(0.38f , 0.5f);
	glVertex2f(0.32f , 0.5f);
	glEnd();

/*
glBegin(GL_POLYGON);
glColor3f(1.0f, 0.0f, 0.0f);
glVertex2f(0.4f, -0.2f);
glVertex2f(0.5f, -0.5f);
glVertex2f(0.5f, -0.5f);
glVertex2f(0.3f, -0.5f);
glVertex2f(0.3f, -0.5f);
glVertex2f(0.4f, -0.2f);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0f, 1.0f, 0.0f);
glVertex2f(-0.6f, -0.2f);
glVertex2f(-0.3f, -0.2f);
glVertex2f(-0.3f, -0.2f);
glVertex2f(-0.3f, -0.5f);
glVertex2f(-0.3f, -0.5f);
glVertex2f(-0.6f, -0.5f);
glVertex2f(-0.6f, -0.5f);
glVertex2f(-0.6f, -0.2f);
glEnd();
/*
glBegin(GL_POLYGON);
glColor3f(0.0f, 1.0f, 0.0f);
glVertex2f(-0.5f, 0.5f);
glVertex2f(-0.1f, 0.5f);
glVertex2f(-0.5f, 0.5f);
glVertex2f(-0.5f, 0.1f);
glVertex2f(-0.5f, 0.1f);
glVertex2f(-0.1f, 0.1f);
glVertex2f(-0.1f, 0.5f);
glVertex2f(-0.1f, 0.1f);
glEnd();



glBegin(GL_POLYGON);
glColor3f(0.0f, 0.0f, 1.0f);
glVertex2f(0.1f, -0.1f);
glVertex2f(0.5f, -0.1f);
glVertex2f(0.1f, -0.1f);
glVertex2f(0.1f, -0.5f);
glVertex2f(0.1f, -0.5f);
glVertex2f(0.5f, -0.5f);
glVertex2f(0.5f, -0.5f);
glVertex2f(0.5f, -0.1f);
glEnd();
*/

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
