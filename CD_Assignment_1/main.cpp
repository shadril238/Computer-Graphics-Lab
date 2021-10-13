/*
    Shadril Hassan Shifat [20-42451-1]
    Computer Graphics [I]
    Assignment-1
*/

#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void){
    glClear (GL_COLOR_BUFFER_BIT);
    //glPointSize(50.0);
    glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    double x=3,y=3;
    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            if((i%2==1 && j%2==0) || (i%2==0 && j%2==1)){
                glVertex2d(x+((double)(i-1)*79.25),y+((double)(j-1)*59.25));
                glVertex2d(x+((double)i*79.25),y+((double)(j-1)*59.25));
                glVertex2d(x+((double)i*79.25),y+((double)j*59.25));
                glVertex2d(x+((double)(i-1)*79.25),y+((double)j*59.25));
            }
        }
    }
    glEnd();
    glFlush ();
}

void myInit (void){
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (640, 480);
    glutInitWindowPosition (650,300);
    glutCreateWindow ("[20-42451-1] Assignment-1");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
}
