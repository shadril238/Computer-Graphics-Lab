/*
    Shadril Hassan Shifat [20-42451-1]
    Computer Graphics [I]
    Final Lab Task-2
*/

#include<bits/stdc++.h>
#include<GL/gl.h>
#include<GL/glut.h>

using namespace std;

GLfloat position = 0.0f, position1 = 0.0f, position2=0.0f, posRocket=0.0f,ammoPos=0.0f;
GLfloat speed = 0.1f, speed1=0.17f, speed2=0.13f, speedRocket=0.2f, speedAmmo=0.2f;
GLint gamePoint=0, flag=1;

bool gameOver(){
    if((posRocket>=0.6 && posRocket<=1 && position1<-1.8) || (posRocket>= -1 && posRocket<=-0.5 && position<=-1.8 ) || (posRocket>=-0.3 && posRocket<=0.3 && position2<=-1.8))return 1;
    return 0;
}
void gameScore(){
    if(posRocket>=0.6 && posRocket<=1 && ammoPos-1.7>=position1  && ammoPos!=0){
       cout<<"Enemy killed! Point - "<<++gamePoint<<endl;
        ammoPos=0.0f;
        position1=1.2f;
    }
    else if(posRocket>= -1 && posRocket<=-0.5 && ammoPos-1.7>=position && ammoPos!=0 ){
        cout<<"Enemy killed! Point - "<<++gamePoint<<endl;
        ammoPos=0.0f;
        position=1.2f;
    }
    else if(posRocket>=-0.3 && posRocket<=0.3 && ammoPos-1.7>=position2 && ammoPos!=0){
        cout<<"Enemy killed! Point - "<<++gamePoint<<endl;
        ammoPos=0.0f;
        position2=1.2f;
    }

}

void update(int value) {

    if(position < -1.8)
        position = 1.2f;
    position -= speed;
    if(position1 < -1.8)
        position1 = 1.2f;
    position1 -= speed1;
    if(position2 < -1.8)
        position2 = 1.2f;
    position2 -= speed2;
    if(ammoPos> 0.0)
        ammoPos+=speedAmmo;
    if(ammoPos> 2.00)
        ammoPos= 0.00f;
    if(gameOver() && flag){
        cout<<"Game Over!"<<endl;
        cout<<"Total Score - "<<gamePoint<<endl;
        flag=0;
    }
    gameScore(); ///Score Calculation
	glutPostRedisplay();
    ///Game Over
	if(flag) glutTimerFunc(100, update, 0);
}

void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON){
		if (state == GLUT_DOWN){
			speed += 0.1f;
			printf("clicked at (%d, %d)\n", x, y);
		}
	}
	glutPostRedisplay();
}

void handleKeypress(unsigned char key, int x, int y) {

	switch (key){
        case 'l':
            if(posRocket > -0.8)posRocket -= speedRocket;
            else posRocket=-0.8;
            break;
        case 'r':
            if(posRocket < 0.8)posRocket += speedRocket;
            else posRocket=0.8;
            break;
        case 'f':
            ammoPos+=speedAmmo;
            break;
        glutPostRedisplay();
	}
}


void display() {
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();

   ///Enemy 1
glPushMatrix();
glTranslatef(0,position, 0.0f);
   glBegin(GL_TRIANGLES);
   glColor3f(0.0f, 0.0f, 1.0f);
   glVertex2f(-0.8f,0.7f);
   glVertex2f(-0.6f, 0.9f);
   glVertex2f(-1.0f, 0.9f);
   glEnd();
glPopMatrix();
    ///Enemy 2
glPushMatrix();
glTranslatef(0,position1, 0.0f);

   glBegin(GL_TRIANGLES);
   glColor3f(1.0f, 0.0f, 1.0f);
   glVertex2f(0.8f,0.7f);
   glVertex2f(1.0f, 0.9f);
   glVertex2f(0.6f, 0.9f);
   glEnd();
glPopMatrix();
    ///Rocket
glPushMatrix();
glTranslatef(posRocket,0.0, 0.0f);
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.2f, -1.0f);
      glVertex2f( 0.2f, -1.0f);
      glVertex2f( 0.2f,  -0.8f);
      glVertex2f(-0.2f,  -0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f( -0.15f,  -0.8f);
      glVertex2f(0.15f, -0.8f);
      glVertex2f( 0.0f, -0.7f);
    glEnd();
    ///ammo
    glTranslatef(0,ammoPos, 0.0f);
    glBegin(GL_QUADS);
       glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(-0.03f,-0.8f);
       glVertex2f(0.03f,-0.8f);
       glVertex2f(0.03f,-0.73f);
       glVertex2f(-0.03f,-0.73f);
   glEnd();
glPopMatrix();
    ///Enemy 3
glPushMatrix();
glTranslatef(0,position2, 0.0f);
   glBegin(GL_TRIANGLES);
       glColor3f(0.0f, 1.0f, 0.0f);
       glVertex2f(0.0f,0.7f);
       glVertex2f(0.2f, 0.9f);
       glVertex2f(-0.2f, 0.9f);
   glEnd();
glPopMatrix();

   glFlush();
}

int main(int argc, char** argv) {
   cout<<"Left -> L | Right -> R | Fire -> F"<<endl;
   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Basic Animation- Rocket Game");
   glutDisplayFunc(display);
   init();
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);
   glutTimerFunc(1000, update, 0);
   glutMainLoop();
   return 0;
}
