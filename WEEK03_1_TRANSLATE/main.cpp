#include <GL/glut.h>

void display(){
    glPushMatrix();
        glTranslatef(0.5,0.5,0);///�e�X��ߪ�����
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();///�洫��ܥX��
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);///�n�}�lGLUT���\��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///�]�wGLUT����ܼҦ�
    glutCreateWindow("week02");///�ؤ@�ӵ��r
    glutDisplayFunc(display);///�n��ܪ��禡
    glutMainLoop();///�D�n�j��d�̫᭱
}
