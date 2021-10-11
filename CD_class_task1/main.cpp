/*
    CD_Task1
    20-42451-1]
    Computer Graphics[I]
*/

#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void firstQuadrant(){
    glBegin(GL_LINES);
    glVertex2i(0,240);
    glVertex2i(640,240);
    glVertex2i(320, 0);
    glVertex2i(320, 480);
    glColor3ub (0,0,255);
    glVertex2i(160, 50);
    glVertex2i(160, 190);
    glVertex2i(130, 50);
    glVertex2i(190, 50);
    glVertex2i(130, 190);
    glVertex2i(190, 190);
    glEnd();
}

void secondQuadrant(){
    glBegin(GL_TRIANGLES);
    glVertex2i(480, 120);
    glVertex2i(560, 200);
    glVertex2i(400, 200);

    glVertex2i(400, 40);
    glVertex2i(560, 40);
    glVertex2i(480, 120);

    glEnd();
}

void thirdQuadrant(){
    glBegin(GL_LINES);
    glVertex2i(380, 300);
    glVertex2i(380, 420);
    glVertex2i(580, 300);
    glVertex2i(580, 420);
    glVertex2i(380, 360);
    glVertex2i(580, 360);
    glEnd();
}

void fourthQuadrant(){

    glBegin(GL_QUADS);
    glVertex2i(60, 380);
    glVertex2i(160, 380);
    glVertex2i(160, 450);
    glVertex2i(60, 450);

    glVertex2i(100, 340);
    glVertex2i(200, 340);
    glVertex2i(200, 410);
    glVertex2i(100, 410);
    glEnd();

}

void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3ub (255,0,0);
    //glPointSize(50.0);

    firstQuadrant();
    secondQuadrant();
    thirdQuadrant();
    fourthQuadrant();

    glFlush ();
}

void myInit (void)
{
    glClearColor(255.0, 255.0, 255.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (640, 480);
    glutInitWindowPosition (650,300);
    glutCreateWindow ("[20-42451-1] Class Task - 1");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
}
