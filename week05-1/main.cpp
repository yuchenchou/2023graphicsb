#include <GL/glut.h>
float angle=0;
void display(){
     glClear( GL_COLOR_BUFFER_BIT |GL_DEPTH_BUFFER_BIT);

     glColor3f(1,0,0);
     glPushMatrix();
    glRotatef(angle,0,0,1);///改成X軸
    glTranslatef(0.8,0,0);
    glutSolidTeapot(0.3);///畫出實心的茶盒
    glPopMatrix();

    glColor3f(0,1,0);
     glPushMatrix();
    glTranslatef(0.8,0,0);
    glRotatef(angle*1.5,0,0,1);///改成y軸
    glutSolidTeapot(0.3);///畫出實心的茶盒

    glPopMatrix();
    glutSwapBuffers();///交換顯示出來
    angle++;
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);///要開始GLUT的功能
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///設定GLUT的顯示模式
    glutCreateWindow("week04");///建一個窗字
    glutDisplayFunc(display);///要顯示的函式
    glutIdleFunc(display);
    glutMainLoop();///主要迴圈卡最後面
}
