/*
    Shadril Hassan Shifat [20-42451-1]
    Computer Graphics [I]
    Lab Task-1
*/

#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void outerSide(){
    glColor3ub(24,1,1);
    glBegin(GL_QUADS);

    glVertex2i(152,38);
    glVertex2i(475,38);
    glVertex2i(475,57);
    glVertex2i(152,57);

    glVertex2i(475,57);
    glVertex2i(494,57);
    glVertex2i(494,76);
    glVertex2i(475,76);

    glVertex2i(494,76);
    glVertex2i(513,76);
    glVertex2i(513,95);
    glVertex2i(494,95);

    glVertex2i(513,95);
    glVertex2i(532,95);
    glVertex2i(532,114);
    glVertex2i(513,114);

    glVertex2i(532,114);
    glVertex2i(551,114);
    glVertex2i(551,133);
    glVertex2i(532,133);

    glVertex2i(551,133);
    glVertex2i(570,133);
    glVertex2i(570,152);
    glVertex2i(551,152);

    glVertex2i(570,152);
    glVertex2i(589,152);
    glVertex2i(589,171);
    glVertex2i(570,171);

    glVertex2i(589,171);
    glVertex2i(608,171);
    glVertex2i(608,304);
    glVertex2i(589,304);

    glVertex2i(570,304);
    glVertex2i(589,304);
    glVertex2i(589,323);
    glVertex2i(570,323);

    glVertex2i(551,323);
    glVertex2i(570,323);
    glVertex2i(570,342);
    glVertex2i(551,342);

    glVertex2i(532,342);
    glVertex2i(551,342);
    glVertex2i(551,361);
    glVertex2i(532,361);

    glVertex2i(513,361);
    glVertex2i(532,361);
    glVertex2i(532,380);
    glVertex2i(513,380);

    glVertex2i(494,380);
    glVertex2i(513,380);
    glVertex2i(513,399);
    glVertex2i(494,399);

    glVertex2i(475,399);
    glVertex2i(494,399);
    glVertex2i(494,418);
    glVertex2i(475,418);

    glVertex2i(152,418);
    glVertex2i(475,418);
    glVertex2i(475,437);
    glVertex2i(152,437);

    glVertex2i(133,399);
    glVertex2i(152,399);
    glVertex2i(152,418);
    glVertex2i(133,418);

    glVertex2i(114,380);
    glVertex2i(133,380);
    glVertex2i(133,399);
    glVertex2i(114,399);

    glVertex2i(95,361);
    glVertex2i(114,361);
    glVertex2i(114,380);
    glVertex2i(95,380);

    glVertex2i(76,342);
    glVertex2i(95,342);
    glVertex2i(95,361);
    glVertex2i(76,361);

    glVertex2i(57,323);
    glVertex2i(76,323);
    glVertex2i(76,342);
    glVertex2i(57,342);

    glVertex2i(38,304);
    glVertex2i(57,304);
    glVertex2i(57,323);
    glVertex2i(38,323);

    glVertex2i(19,171);
    glVertex2i(38,171);
    glVertex2i(38,304);
    glVertex2i(19,304);

    glVertex2i(38,152);
    glVertex2i(57,152);
    glVertex2i(57,171);
    glVertex2i(38,171);

    glVertex2i(57,133);
    glVertex2i(76,133);
    glVertex2i(76,152);
    glVertex2i(57,152);

    glVertex2i(76,114);
    glVertex2i(95,114);
    glVertex2i(95,133);
    glVertex2i(76,133);

    glVertex2i(95,95);
    glVertex2i(114,95);
    glVertex2i(114,114);
    glVertex2i(95,114);

    glVertex2i(114,76);
    glVertex2i(133,76);
    glVertex2i(133,95);
    glVertex2i(114,95);

    glVertex2i(133,57);
    glVertex2i(152,57);
    glVertex2i(152,76);
    glVertex2i(133,76);

    glEnd();
}

void middleSide(){
    glColor3ub(255,255,0);
    glBegin(GL_QUADS);

    glVertex2i(38,171);
    glVertex2i(57,171);
    glVertex2i(57,304);
    glVertex2i(38,304);

    glVertex2i(570,171);
    glVertex2i(589,171);
    glVertex2i(589,304);
    glVertex2i(570,304);

    glVertex2i(57,285);
    glVertex2i(76,285);
    glVertex2i(76,323);
    glVertex2i(57,323);

    glVertex2i(551,285);
    glVertex2i(570,285);
    glVertex2i(570,323);
    glVertex2i(551,323);

    glVertex2i(76,304);
    glVertex2i(95,304);
    glVertex2i(95,342);
    glVertex2i(76,342);

    glVertex2i(532,304);
    glVertex2i(551,304);
    glVertex2i(551,342);
    glVertex2i(532,342);

    glVertex2i(95,323);
    glVertex2i(114,323);
    glVertex2i(114,361);
    glVertex2i(95,361);

    glVertex2i(513,323);
    glVertex2i(532,323);
    glVertex2i(532,361);
    glVertex2i(513,361);

    glVertex2i(114,342);
    glVertex2i(133,342);
    glVertex2i(133,380);
    glVertex2i(114,380);

    glVertex2i(494,342);
    glVertex2i(513,342);
    glVertex2i(513,380);
    glVertex2i(494,380);

    glVertex2i(133,361);
    glVertex2i(152,361);
    glVertex2i(152,399);
    glVertex2i(133,399);

    glVertex2i(475,361);
    glVertex2i(494,361);
    glVertex2i(494,399);
    glVertex2i(475,399);

    glVertex2i(152,380);
    glVertex2i(171,380);
    glVertex2i(171,418);
    glVertex2i(152,418);

    glVertex2i(456,380);
    glVertex2i(475,380);
    glVertex2i(475,418);
    glVertex2i(456,418);

    glVertex2i(171,399);
    glVertex2i(456,399);
    glVertex2i(456,418);
    glVertex2i(171,418);

    glVertex2i(171,57);
    glVertex2i(456,57);
    glVertex2i(456,76);
    glVertex2i(171,76);

    glVertex2i(152,57);
    glVertex2i(171,57);
    glVertex2i(171,95);
    glVertex2i(152,95);

    glVertex2i(456,57);
    glVertex2i(475,57);
    glVertex2i(475,95);
    glVertex2i(456,95);

    glVertex2i(133,76);
    glVertex2i(152,76);
    glVertex2i(152,114);
    glVertex2i(133,114);

    glVertex2i(475,76);
    glVertex2i(494,76);
    glVertex2i(494,114);
    glVertex2i(475,114);

    glVertex2i(114,95);
    glVertex2i(133,95);
    glVertex2i(133,133);
    glVertex2i(114,133);

    glVertex2i(494,95);
    glVertex2i(513,95);
    glVertex2i(513,133);
    glVertex2i(494,133);

    glVertex2i(95,114);
    glVertex2i(114,114);
    glVertex2i(114,152);
    glVertex2i(95,152);

    glVertex2i(513,114);
    glVertex2i(532,114);
    glVertex2i(532,152);
    glVertex2i(513,152);

    glVertex2i(76,133);
    glVertex2i(95,133);
    glVertex2i(95,171);
    glVertex2i(76,171);

    glVertex2i(532,133);
    glVertex2i(551,133);
    glVertex2i(551,171);
    glVertex2i(532,171);

    glVertex2i(55,152);
    glVertex2i(76,152);
    glVertex2i(76,190);
    glVertex2i(55,190);

    glVertex2i(551,152);
    glVertex2i(570,152);
    glVertex2i(570,190);
    glVertex2i(551,190);

    glVertex2i(171,76);
    glVertex2i(190,76);
    glVertex2i(190,95);
    glVertex2i(171,95);

    glVertex2i(437,76);
    glVertex2i(456,76);
    glVertex2i(456,95);
    glVertex2i(437,95);

    glVertex2i(209,76);
    glVertex2i(304,76);
    glVertex2i(304,95);
    glVertex2i(209,95);

    glVertex2i(323,76);
    glVertex2i(418,76);
    glVertex2i(418,95);
    glVertex2i(323,95);

    glVertex2i(209,95);
    glVertex2i(285,95);
    glVertex2i(285,114);
    glVertex2i(209,114);

    glVertex2i(342,95);
    glVertex2i(418,95);
    glVertex2i(418,114);
    glVertex2i(342,114);

    glVertex2i(228,114);
    glVertex2i(285,114);
    glVertex2i(285,133);
    glVertex2i(228,133);

    glVertex2i(342,114);
    glVertex2i(399,114);
    glVertex2i(399,133);
    glVertex2i(342,133);

    glVertex2i(247,133);
    glVertex2i(266,133);
    glVertex2i(266,152);
    glVertex2i(247,152);

    glVertex2i(361,133);
    glVertex2i(380,133);
    glVertex2i(380,152);
    glVertex2i(361,152);

    glVertex2i(171,380);
    glVertex2i(266,380);
    glVertex2i(266,399);
    glVertex2i(171,399);

    glVertex2i(285,380);
    glVertex2i(342,380);
    glVertex2i(342,399);
    glVertex2i(285,399);

    glVertex2i(361,380);
    glVertex2i(456,380);
    glVertex2i(456,399);
    glVertex2i(361,399);

    glVertex2i(209,361);
    glVertex2i(266,361);
    glVertex2i(266,380);
    glVertex2i(209,380);

    glVertex2i(361,361);
    glVertex2i(418,361);
    glVertex2i(418,380);
    glVertex2i(361,380);

    glVertex2i(190,304);
    glVertex2i(266,304);
    glVertex2i(266,361);
    glVertex2i(190,361);

    glVertex2i(361,304);
    glVertex2i(437,304);
    glVertex2i(437,361);
    glVertex2i(361,361);

    glVertex2i(209,285);
    glVertex2i(247,285);
    glVertex2i(247,304);
    glVertex2i(209,304);

    glVertex2i(380,285);
    glVertex2i(418,285);
    glVertex2i(418,304);
    glVertex2i(380,304);

    glEnd();

}

void innerSide(){
    glColor3ub(24,1,1);
    glBegin(GL_POLYGON);

    glVertex2i(171,76);
    glVertex2i(456,76);
    glVertex2i(570,190);
    glVertex2i(570,285);
    glVertex2i(551,304);
    glVertex2i(456,399);
    glVertex2i(171,399);
    glVertex2i(57,285);
    glVertex2i(57,190);

    glEnd();
}
void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    //glPointSize(50.0);
    outerSide();
    innerSide();
    middleSide();
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
    glutCreateWindow ("[20-42451-1] CD Lab Task - 1");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
}
