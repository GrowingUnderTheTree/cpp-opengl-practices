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

void displayA() {
	glPointSize(5.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.1f, 0.0f);
	glVertex2f(-0.1f, 0.0f);
	glVertex2f(0.05f, 0.1f);
	glVertex2f(-0.05f, 0.1f);
	glVertex2f(0.0f, 0.2f);
	glVertex2f(0.15f, -0.05f);
	glVertex2f(-0.15f, -0.05f);
	glVertex2f(0.15f, -0.15f);
	glVertex2f(-0.15f, -0.15f);
	glEnd();
	glFlush();
}

void displayE() {
	glPointSize(5.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.1f, 0.0f);
	glVertex2f(-0.1f, 0.0f);
	glVertex2f(-0.1f, 0.1f);
	glVertex2f(-0.1f, 0.2f);
	glVertex2f(-0.1f, -0.1f);
	glVertex2f(-0.1f, -0.2f);
	glVertex2f(0.0f, 0.2f);
	glVertex2f(0.0f, -0.2f);
	glVertex2f(0.1f, 0.2f);
	glVertex2f(0.1f, -0.2f);
	glEnd();
	glFlush();
}

void displayI() {
	glPointSize(5.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
	glVertex2f(0.0f, -0.2f);
	glVertex2f(0.0f, -0.1f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.0f, 0.1f);
	glVertex2f(0.0f, 0.2f);
	glEnd();
	glFlush();
}

void displayJ() {
	glPointSize(5.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
	glVertex2f(-0.1f, 0.2f);
	glVertex2f(0.0f, 0.2f);
	glVertex2f(0.1f, 0.2f);
	glVertex2f(0.0f, 0.1f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.0f, -0.1f);
	glVertex2f(-0.05f, -0.15f);
	glVertex2f(-0.1f, -0.15f);
	glEnd();
	glFlush();
}

void displayU() {
	glPointSize(5.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
	glVertex2f(-0.1f, 0.2f);
	glVertex2f(-0.1f, 0.1f);
	glVertex2f(-0.1f, 0.0f);
	glVertex2f(-0.1f, -0.1f);
	glVertex2f(-0.1f, -0.1f);
	glVertex2f(0.0f, -0.1f);
	glVertex2f(0.1f, -0.1f);
	glVertex2f(0.1f, -0.1f);
	glVertex2f(0.1f, 0.0f);
	glVertex2f(0.1f, 0.1f);
	glVertex2f(0.1f, 0.2f);
	glEnd();
	glFlush();
}

void displayW() {
	glPointSize(5.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
	glVertex2f(-0.2f, 0.1f);
	glVertex2f(0.0f, 0.1f);
	glVertex2f(0.2f, 0.1f);
	glVertex2f(-0.2f, 0.0f);
	glVertex2f(-0.05f, 0.0f);
	glVertex2f(0.05f, 0.0f);
	glVertex2f(0.2f, 0.0f);
	glVertex2f(-0.15f, -0.1f);
	glVertex2f(0.15f, -0.1f);
	glEnd();
	glFlush();
}

void displayG() {
	glPointSize(5.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
	glVertex2f(-0.1f, 0.2f);
	glVertex2f(0.0f, 0.2f);
	glVertex2f(0.1f, 0.2f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.1f, 0.0f);
	glVertex2f(0.1f, -0.1f);
	glVertex2f(-0.1f, -0.2f);
	glVertex2f(0.0f, -0.2f);
	glVertex2f(0.1f, -0.2f);
	glVertex2f(-0.2f, 0.1f);
	glVertex2f(-0.2f, 0.0f);
	glVertex2f(-0.2f, -0.1f);
	glEnd();
	glFlush();
}

void displayN() {
	glPointSize(5.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
	glVertex2f(-0.2f, 0.2f);//
	glVertex2f(0.0f, 0.0f);//
	glVertex2f(0.1f, 0.0f);//
	glVertex2f(0.1f, -0.1f);//
	glVertex2f(-0.2f, 0.1f);//
	glVertex2f(0.1f, 0.2f);//
	glVertex2f(0.1f, 0.1f);//
	glVertex2f(-0.1f, 0.1f);//
	glVertex2f(-0.2f, 0.0f);//
	glVertex2f(-0.2f, -0.1f);//
	glEnd();
	glFlush();
}

void showA() {
	glutInitWindowPosition(80, 80);
	glutInitWindowSize(300, 200);
	glutCreateWindow("A");
	glutDisplayFunc(displayA);
}

void showE() {
	glutInitWindowPosition(80, 80);
	glutInitWindowSize(300, 200);
	glutCreateWindow("E");
	glutDisplayFunc(displayE);
}

void showJ() {
	glutInitWindowPosition(80, 80);
	glutInitWindowSize(300, 200);
	glutCreateWindow("J");
	glutDisplayFunc(displayJ);
}

void showI() {
	glutInitWindowPosition(80, 80);
	glutInitWindowSize(300, 200);
	glutCreateWindow("I");
	glutDisplayFunc(displayI);
}

void showW() {
	glutInitWindowPosition(80, 80);
	glutInitWindowSize(300, 200);
	glutCreateWindow("W");
	glutDisplayFunc(displayW);
}

void showG() {
	glutInitWindowPosition(80, 80);
	glutInitWindowSize(300, 200);
	glutCreateWindow("G");
	glutDisplayFunc(displayG);
}

void showN() {
	glutInitWindowPosition(80, 80);
	glutInitWindowSize(300, 200);
	glutCreateWindow("N");
	glutDisplayFunc(displayN);
}

void showl() {
	glutInitWindowPosition(80, 80);
	glutInitWindowSize(300, 200);
	glutCreateWindow("<3");
	glutDisplayFunc(display);
}

void showU() {
	glutInitWindowPosition(80, 80);
	glutInitWindowSize(300, 200);
	glutCreateWindow("U");
	glutDisplayFunc(displayU);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	showA();
	showE();
	showG();
	showJ();
	showN();
	showW();
	showU();
	showl();
	showI();
	glutMainLoop();
}