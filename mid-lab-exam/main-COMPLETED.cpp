/*
    Mid Lab Exam
    Shadril Hassan Shifat [20-42451-1]
    Computer Graphics[I]
*/

#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3ub (0,0,0);
    //glPointSize(50.0);
    glBegin(GL_TRIANGLES);
    ///Star
    glVertex2d(123.5,227.027);
    glVertex2d(320,116.757);
    glVertex2d(275.088,229.189);
    glVertex2d(171.228,116.757);
    glVertex2d(364.912, 227.027);
    glVertex2d(213.33, 227.027);
    glVertex2d(210.526, 227.027);
    glVertex2d(272.281, 227.027);
    glVertex2d(244.211, 296.216);
    glEnd();

    glBegin(GL_QUADS);

    glVertex2d(120.702,6.49);
    glVertex2d(320,116.757);
    glVertex2d(280.702, 142.703);
    glVertex2d(143.158, 68.3514);

    glVertex2d(72.9825, 255.135);
    glVertex2d(232.982, 255.135);
    glVertex2d(244.211, 296.216);
    glVertex2d(2.9, 296.378);

    glVertex2d(519.298, 3.16216);
    glVertex2d(449.123, 181.622);
    glVertex2d(353.684, 182.622);
    glVertex2d(392.982, 75.6757);

    glVertex2d(318, 257.135);
    glVertex2d(404.211, 297.216);
    glVertex2d(322.807, 479.676);
    glVertex2d(275.088, 373.892);

    glVertex2d(465.965, 252.973);
    glVertex2d(635.193, 294.054);
    glVertex2d(403.018, 302.054);
    glVertex2d(313.807, 258.135);

    glVertex2d(446.316, 170.784);
    glVertex2d(634.386, 294.054);
    glVertex2d(463.158, 253);
    glVertex2d(350.877, 183.784);
    glEnd();

    glFlush ();
}

void myInit (void){
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
    glutCreateWindow ("[20-42451-1] Mid Term Lab Exam");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
}
