#include <GL/glut.h>
float X=0,Y=0,Z=0;
void display(){
    glClear( GL_COLOR_BUFFER_BIT |GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glTranslatef(X,Y,Z);///�e�X��ߪ�����
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();///�洫��ܥX��
}
void mouse( int button,int state,int x,int y)
{
    X=(x-150)/150.0;
    Y=-(y-150)/150.0;
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);///�n�}�lGLUT���\��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///�]�wGLUT����ܼҦ�
    glutCreateWindow("week03");///�ؤ@�ӵ��r

    glutMouseFunc(mouse);
    glutDisplayFunc(display);///�n��ܪ��禡
    glutMainLoop();///�D�n�j��d�̫᭱
}
