#include <GL/glut.h>
float X=0,Y=0,Z=0;
void display(){
    glClear( GL_COLOR_BUFFER_BIT |GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glTranslatef(X,Y,Z);///畫出實心的茶盒
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();///交換顯示出來
}
void mouse( int button,int state,int x,int y)
{
    X=(x-150)/150.0;
    Y=-(y-150)/150.0;
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
