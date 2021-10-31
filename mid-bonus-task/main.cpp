/*
    Shadril Hassan Shifat [20-42451-1]
    Computer Graphics [I]
    Bonus Task
*/

#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void){
    glClear (GL_COLOR_BUFFER_BIT);
    //glPointSize(50.0);

    ///Red Part
    glColor3ub(255,0,0);
    glBegin(GL_QUADS);
    glVertex2d(466.734, 134.412);
    glVertex2d(589.103, 115.915);
    glVertex2d(618.342, 199.769);
    glVertex2d(489.558, 200.002);

    glVertex2d(286.971, 129.48);
    glVertex2d(390.599, 140.645);
    glVertex2d(364.941, 193.137);
    glVertex2d(308.629, 181.272);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2d(214.416, 120.848);
    glVertex2d(201.421, 157.842);
    glVertex2d(20.5753, 71.5222);
    glEnd();
    ///black W
    glColor3ub(0,0,0);
    glBegin(GL_TRIANGLES);
    glVertex2d(244.738, 25.896);
    glVertex2d(249.069, 173.873);
    glVertex2d(51.9797, 611.638);

    glVertex2d(434.247, 25.896);
    glVertex2d(619.425, 611.638);
    glVertex2d(428.832, 173.873);

    glVertex2d(245.821, 284.855);
    glVertex2d(245.821, 404.47);
    glVertex2d(105.042, 601.773);

    glVertex2d(427.75, 284.855);
    glVertex2d(566.362, 601.773);
    glVertex2d(426.667, 404.47);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2d(244.2, 25.896);
    glVertex2d(340.034, 255.26);
    glVertex2d(336.785, 397.071);
    glVertex2d(248.235, 170.173);

    glVertex2d(434.247, 25.896);
    glVertex2d(428.75, 176.339);
    glVertex2d(336.785, 397.071);
    glVertex2d(340.034, 255.26);

    glVertex2d(245.821, 286.089);
    glVertex2d(334.619, 517.919);
    glVertex2d(334.619, 604.239);
    glVertex2d(245.821, 403.237);

    glVertex2d(427.75, 286.089);
    glVertex2d(426.667, 403.237);
    glVertex2d(334.619, 604.239);
    glVertex2d(334.619, 517.919);

    glEnd();
    glFlush ();
}

void myInit (void){
    glClearColor(255.0, 255.0, 255.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 640.0);
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (640, 640);
    glutInitWindowPosition (450,100);
    glutCreateWindow ("[20-42451-1] Bonus Task");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
}
