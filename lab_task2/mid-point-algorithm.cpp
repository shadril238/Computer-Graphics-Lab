/*
    Shadril Hassan Shifat [20-42451-1]
    Computer Graphics [I]
    Lab Task-2 [Mid-Point Algorithm]
*/
#include<bits/stdc++.h>
#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

using namespace std;

int startX, startY, endX, endY;

void myDisplay(void){
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3ub (128, 128, 128);
    glBegin(GL_POINTS);
    glPointSize(10.0);

    int dx = endX-startX;
    int dy = endY - startY;
    float slope = (float) (1.0* dy/dx);
    if(slope<1){
        float pk=(2.0*(float)dy)-(float)dx;
        int y=startY,tempY=startY,x=startX;
        glVertex2i(x,y);
        x++;
        for( ; x<=endX; x++){
            tempY=y;
            if(pk>=0)y++;
            glVertex2i(x,y);
            //cout<<x<<" "<<y<<endl;
            pk=pk+(float)2.0*(float)dy-(float)2.0*(float)dx*((float)y-(float)tempY);
        }
        cout<<"Yaay! You drew the line"<<endl;
    }
    else cout<<"Opps Sorry! This algorithm works iff Slope < 1 :)"<<endl;

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

    cout<<"Enter the start point: ";
    cin>>startX>>startY;
    cout<<"Enter the end point: ";
    cin>>endX>>endY;

    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (640, 480);
    glutInitWindowPosition (650,300);
    glutCreateWindow ("[20-42451-1] Mid-Point Algorithm");
    glutDisplayFunc(myDisplay);
    myInit();
    glutMainLoop();
}
