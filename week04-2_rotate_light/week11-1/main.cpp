#include <GL/glut.h>

void display()
{

    glClear( GL_COLOR_BUFFER_BIT |GL_DEPTH_BUFFER_BIT);
    glutSolidTeapot(0.3);
    glutSwapBuffers();///�洫��ܥX��
}
void keyboard (unsigned char key,int x,int y)
{
    if (key==27)exit(1234);
}
int main(int argc, char* argv[])
{

    glutInit(&argc, argv);///�n�}�lGLUT���\��
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///�]�wGLUT����ܼҦ�
    glutCreateWindow("week11");///�ؤ@�ӵ��r

    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);

    glutMainLoop();
}
