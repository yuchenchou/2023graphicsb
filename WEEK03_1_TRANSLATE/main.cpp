#include <GL/glut.h>

void display(){
    glPushMatrix();
        glTranslatef(0.5,0.5,0);///畫出實心的茶盒
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();///交換顯示出來
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);///要開始GLUT的功能
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///設定GLUT的顯示模式
    glutCreateWindow("week02");///建一個窗字
    glutDisplayFunc(display);///要顯示的函式
    glutMainLoop();///主要迴圈卡最後面
}
