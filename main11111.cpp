

#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846
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
glClearColor(0.42f,0.71f,1.0f, 0.0f); // Set background color to black and opaque
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
/// glColor3f(0.0,0.0,0.0);
///renderBitmapString(0.0f, 0.0f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "Hello");
glLineWidth(2);
/*
glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);

glVertex2f(1.00f, 0.00f);
glVertex2f(-1.00f, 0.00f);
glVertex2f(0.00f, 1.00f);
glVertex2f(0.00f, -1.00f);
glEnd();
*/

glBegin(GL_POLYGON);

glColor3f(0.0f,0.34f,0.68f);
glVertex2f(-1.0f, 0.2f);
glVertex2f(1.0f, 0.2f);
glVertex2f(1.0f, -1.0f);
glVertex2f(-1.0f, -1.0f);
glVertex2f(-1.0f, 0.2f);
glEnd();


glBegin(GL_POLYGON);

glColor3f(0.85f,0.55f,0.0f);
glVertex2f(-0.6f, 0.2f);
glVertex2f(-0.2f, 0.2f);
glVertex2f(-.4f, 0.4f);
glVertex2f(-0.6f, 0.2f);
glEnd();



glBegin(GL_POLYGON);

glColor3f(0.41f,0.27f,0.0f);
glVertex2f(-0.38f, 0.2f);
glVertex2f(0.25f, 0.2f);
glVertex2f(-.2f, 0.42f);
glVertex2f(-0.38f, 0.2f);
glEnd();


glBegin(GL_POLYGON);

glColor3f(0.41f,0.27f,0.0f);
glVertex2f(0.1f, 0.2f);
glVertex2f(0.9f, 0.2f);
glVertex2f(0.5f, 0.3f);
glVertex2f(0.1f, 0.2f);
glEnd();




glBegin(GL_POLYGON);

glColor3f(0.24f,0.59f,0.31f);
glVertex2f(-0.65f, -0.2f);
glVertex2f(-0.35f, -0.2f);
glVertex2f(-0.45f, -0.27f);
glVertex2f(-0.55f, -0.27f);
glEnd();

glBegin(GL_POLYGON);

glColor3f(0.93f,0.0f,0.02f);
glVertex2f(-0.5f, -0.05f);
glVertex2f(-0.44f, -0.18f);
glVertex2f(-0.5f, -0.18f);
glVertex2f(-0.5f, -0.05f);
glEnd();

glBegin(GL_POLYGON);

glColor3f(0.93f,0.0f,0.02f);
glVertex2f(-0.51f, -0.11f);
glVertex2f(-0.51f, -0.18f);
glVertex2f(-0.55f, -0.18f);
glVertex2f(-0.51f, -0.14f);
glEnd();



glBegin(GL_POLYGON);

glColor3f(0.85f,0.55f,0.0f);
glVertex2f(-0.4f, -0.6f);
glVertex2f(0.4f, -0.6f);
glVertex2f(0.3f, -0.7f);
glVertex2f(-0.3f, -0.7f);
glEnd();


glBegin(GL_POLYGON);

glColor3f(0.0f,0.0f,0.0f);

glVertex2f(0.3f, -0.7f);
glVertex2f(-0.3f, -0.7f);
glVertex2f(-0.27f, -0.72f);
glVertex2f(0.27f, -0.72f);
glEnd();






GLfloat x=0.6f; GLfloat y=0.6f; GLfloat radius =0.1f;
	int i;
	int lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;
    glColor3f(1.0f, 1.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();







//Sun
GLfloat x1=0.0f; GLfloat y1=0.6f; GLfloat radius1 =0.025f;
	int i1;
	int lineAmount1 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;
    glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
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
