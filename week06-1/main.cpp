#include <GL/glut.h>
float angle=0;
void myCube(){

     glPushMatrix();
    glScalef(0.5,0.2,0.2);
     glutSolidCube(1);
     glPopMatrix();
}
void display()
{
    glClear( GL_COLOR_BUFFER_BIT |GL_DEPTH_BUFFER_BIT);
    glutSolidSphere(0.01,30,30);
    glPushMatrix();
        glTranslatef(0.5,0.5,0);
        glRotatef(angle,0,0,1);
        glTranslatef(0.45,0,0);
        glutSolidTeapot(0.3);
    glPopMatrix();

    glutSwapBuffers();///�洫��ܥX��
    angle++;
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);///�n�}�lGLUT���\��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///�]�wGLUT����ܼҦ�
    glutCreateWindow("week06");///�ؤ@�ӵ��r
    glutDisplayFunc(display);///�n��ܪ��禡
    glutIdleFunc(display);
    glutMainLoop();///�D�n�j��d�̫᭱
}
