
#include <GL/glut.h>
float angle=0;
void display(){
     glClear( GL_COLOR_BUFFER_BIT |GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
    glTranslated(0.5,0,0);///����k��
    glRotatef(angle,0,1,0);
    glColor3f(0,0,1);///�Ŧ����
    glutSolidTeapot(0.3);///�e�X��ߪ�����
    glPopMatrix();

    glPushMatrix();
    glTranslated(0,0.5,0);///����k��
    glRotatef(angle,0,1,0);
    glColor3f(1,1,0);///�������
    glutSolidTeapot(0.3);///�e�X��ߪ�����
    glPopMatrix();
    glutSwapBuffers();///�洫��ܥX��
    angle++;
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);///�n�}�lGLUT���\��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///�]�wGLUT����ܼҦ�
    glutCreateWindow("week04");///�ؤ@�ӵ��r
    glutDisplayFunc(display);///�n��ܪ��禡
    glutIdleFunc(display);
    glutMainLoop();///�D�n�j��d�̫᭱
}
