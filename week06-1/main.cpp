#include <GL/glut.h>
float angle=0;
void myCube(){

     glPushMatrix();
    glScalef(0.5,0.2,0.2);
     glutSolidCube(1);
     glPopMatrix();
}
void display()
{
    glClear( GL_COLOR_BUFFER_BIT |GL_DEPTH_BUFFER_BIT);
    glutSolidSphere(0.01,30,30);
    glPushMatrix();
        glTranslatef(0.5,0.5,0);
        glRotatef(angle,0,0,1);
        glTranslatef(0.45,0,0);
        glutSolidTeapot(0.3);
    glPopMatrix();

    glutSwapBuffers();///交換顯示出來
    angle++;
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);///要開始GLUT的功能
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///設定GLUT的顯示模式
    glutCreateWindow("week06");///建一個窗字
    glutDisplayFunc(display);///要顯示的函式
    glutIdleFunc(display);
    glutMainLoop();///主要迴圈卡最後面
}
