#include <GL/glut.h>
#include<stdio.h>
float X=0,Y=0,Z=0;
void display(){
    glClear( GL_COLOR_BUFFER_BIT |GL_DEPTH_BUFFER_BIT);
    glVertex2f(-0.30,-0.25);
glVertex2f(-0.37,-0.23);
glVertex2f(-0.43,-0.21);
glVertex2f(-0.45,-0.14);
glVertex2f(-0.45,-0.01);
glVertex2f(-0.42,0.07);
glVertex2f(-0.33,0.13);
glVertex2f(-0.27,0.15);
glVertex2f(-0.19,0.16);
glVertex2f(-0.14,0.16);
glVertex2f(-0.07,0.15);
glVertex2f(-0.01,0.13);
glVertex2f(0.01,0.11);
glVertex2f(0.05,0.05);
glVertex2f(0.06,-0.04);
glVertex2f(0.06,-0.07);
glVertex2f(0.03,-0.27);
glVertex2f(0.03,-0.27);
glVertex2f(-0.04,-0.28);
glVertex2f(-0.11,-0.29);
glVertex2f(-0.15,-0.29);
glVertex2f(-0.17,-0.29);
    glutSwapBuffers();///交換顯示出來
}
void mouse( int button,int state,int x,int y)
{
    X=(x-150)/150.0;
    Y=-(y-150)/150.0;
    if (state==GLUT_DOWN) printf( "glVertex2f(%.2f,%.2f);\n",X,Y);
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);///要開始GLUT的功能
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///設定GLUT的顯示模式
    glutCreateWindow("week03");///建一個窗字

    glutMouseFunc(mouse);
    glutDisplayFunc(display);///要顯示的函式
    glutMainLoop();///主要迴圈卡最後面
}
