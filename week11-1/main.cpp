#include <GL/glut.h>

void display()
{

    glClear( GL_COLOR_BUFFER_BIT |GL_DEPTH_BUFFER_BIT);
    glutSolidTeapot(0.3);
    glutSwapBuffers();///交換顯示出來
}
void keyboard (unsigned char key,int x,int y)
{
    if (key==27)exit(1234);
}
int main(int argc, char* argv[])
{

    glutInit(&argc, argv);///要開始GLUT的功能
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///設定GLUT的顯示模式
    glutCreateWindow("week11");///建一個窗字

    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);

    glutMainLoop();
}
