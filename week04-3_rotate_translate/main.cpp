
#include <GL/glut.h>
float angle=0;
void display(){
     glClear( GL_COLOR_BUFFER_BIT |GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
    glTranslated(0.5,0,0);///移到右邊
    glRotatef(angle,0,1,0);
    glColor3f(0,0,1);///藍色茶壺
    glutSolidTeapot(0.3);///畫出實心的茶盒
    glPopMatrix();

    glPushMatrix();
    glTranslated(0,0.5,0);///移到右邊
    glRotatef(angle,0,1,0);
    glColor3f(1,1,0);///黃色茶壺
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
