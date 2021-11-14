/*
    Shadril Hassan Shifat [20-42451-1]
    Computer Graphics [I]
    Final Assignment-1
*/

#include <bits/stdc++.h>
#include<GL/gl.h>
#include <GL/glut.h>
using namespace std;


float X1,X2, X3, Y1, Y2, Y3, tx, ty, sx, sy, degree;
int choose,option;

void Translation(void){
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3ub (128, 128, 128);

    glBegin(GL_TRIANGLES);
    glVertex2i(X1, Y1);
    glVertex2i(X2, Y2);
    glVertex2i(X3, Y3);

    glEnd();

    glColor3ub (255, 0, 0);

    glBegin(GL_TRIANGLES);
    glVertex2i(X1+tx, Y1+ty);
    glVertex2i(X2+tx, Y2+ty);
    glVertex2i(X3+tx, Y3+ty);

    glEnd();
    glFlush();
}

void Scaling(void){
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3ub (128, 128, 128);
    glBegin(GL_TRIANGLES);

    glVertex2i(X1, Y1);
    glVertex2i(X2, Y2);
    glVertex2i(X3, Y3);

    glEnd();

    glColor3ub (255, 0, 0);
    glBegin(GL_TRIANGLES);

    glVertex2i(X1*sx, Y1*sy);
    glVertex2i(X2*sx, Y2*sy);
    glVertex2i(X3*sx, Y3*sy);

    glEnd();
    glFlush ();
}
void Rotation(void){
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3ub (128, 128, 128);
    glBegin(GL_TRIANGLES);

    glVertex2i(X1, Y1);
    glVertex2i(X2, Y2);
    glVertex2i(X3, Y3);

    glEnd();
    float newX2, newY2, newX3, newY3;
    degree=(degree*3.1416)/180;

    if(option==1){
        newX2=((X2-X1)*cos(degree)) - ((Y2-Y1)*sin(degree));
        newY2=((X2-X1)*sin(degree)) + ((Y2-Y1)*cos(degree));
        newX3=((X3-X1)*cos(degree)) - ((Y3-Y1)*sin(degree));
        newY3=((X3-X1)*sin(degree)) + ((Y3-Y1)*cos(degree));
    }
    else{
        newX2=((X2-X1)*cos(degree)) + ((Y2-Y1)*sin(degree));
        newY2=((Y2-Y1)*cos(degree)) - ((X2-X1)*sin(degree));
        newX3=((X3-X1)*cos(degree)) + ((Y3-Y1)*sin(degree));
        newY3=((Y3-Y1)*cos(degree)) - ((X3-X1)*sin(degree));
    }
    //cout<<newX2<<" "<<newY2<<endl<<newX3<<" "<<newY3<<endl;

    glColor3ub (255, 0, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(X1,Y1);
    glVertex2i(newX2+X1,newY2+Y1);
    glVertex2i(newX3+X1,newY3+Y1);
    glEnd();

    glFlush ();
}
void myDisplay(void){
    if(choose == 1)Translation();
    else if(choose==2) Scaling();
    else Rotation();
}

void myInit (void){
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

int main(int argc, char** argv){
    cout<<"Enter 3 points: "<<endl;
    cin>>X1>>Y1;
    cin>>X2>>Y2;
    cin>>X3>>Y3;
    cout<<"What do you want to do? \n\t 1. Translation \n\t 2. Scaling \n\t 3. Rotation"<<endl;
    cout<<"Enter the choice: ";
    cin>>choose;
    if(choose == 1){
        cout<<"Enter the translation factor: ";
        cin>>tx>>ty;
    }
    else if(choose==2){
        cout<<"Enter the Scaling factor: ";
        cin>>sx>>sy;
    }
    else{
        cout<<"How do you rotate? \n\t 1. Anti-Clockwise \n\t 2. Clockwise"<<endl;
        cout<<"Enter the choice: ";
        cin>>option;
        cout<<"Enter the degree of rotation: ";
        cin>>degree;
    }
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (640, 480);
    glutInitWindowPosition (100, 150);
    glutCreateWindow ("[20-42451-1] Translation-Scaling-Rotation");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
}
