#include <iostream> 
#include <string>
#include <gl/glut.h>
using namespace std;

void display() {
	glPointSize(5.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.1f, 0.0f);
	glVertex2f(-0.1f, 0.0f);
	glVertex2f(0.0f, -0.1f);
	glVertex2f(0.0f, 0.1f);
	glVertex2f(-0.1f, 0.1f);
	glVertex2f(0.1f, 0.1f);
	glVertex2f(-0.2f, 0.1f);
	glVertex2f(0.2f, 0.1f);
	glVertex2f(-0.1f, 0.2f);
	glVertex2f(0.1f, 0.2f);
	glVertex2f(0.05f, 0.0f);
	glVertex2f(-0.05f, 0.0f);
	glEnd();
	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(80, 80);
	glutInitWindowSize(400, 300);
	glutCreateWindow("<3");
	glutDisplayFunc(display);
	glutMainLoop();
}