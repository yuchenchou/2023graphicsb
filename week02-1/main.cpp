#include <GL/glut.h>

void display(){
    glColor3f(2,2,0);///��m
    glutSolidTeapot(0.5);///�e�X��ߪ��j����

    glColor3f(0,2,2);///��m
    glutSolidTeapot(0.3);///�e�X��ߪ��p����

    glutSwapBuffers();///�洫��ܥX��
}
int main(int argc, char *argv[]){///�F�`��main()�禡
    glutInit(&argc, argv);///�n�}�lGLUT���\��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///�]�wGLUT����ܼҦ�
    glutCreateWindow("week02");///�ؤ@�ӵ��r
    glutDisplayFunc(display);///�n��ܪ��禡
    glutMainLoop();///�D�n�j��d�̫᭱
}
