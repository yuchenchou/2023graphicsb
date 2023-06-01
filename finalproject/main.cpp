#include <stdio.h>
#include <GL/glut.h>
#include "glm.h"

GLMmodel * head = NULL;
GLMmodel * body = NULL;
GLMmodel * uparm = NULL;
GLMmodel * downarm = NULL;
GLMmodel * cap = NULL;
GLMmodel * eye = NULL;
GLMmodel * nose = NULL;
GLMmodel * downleg = NULL;
GLMmodel * upleg = NULL;

int show[7] = {1,1,1,1,1,1,1};
int ID = 6;
float teapotX =0, teapotY = 0;
float angle[20] = {};
FILE * fout = NULL;
FILE * fin = NULL;
void keyboard(unsigned char key, int x,int y) {
    if(key=='0') ID = 0;
    if(key=='1') ID = 1;
    if(key=='2') ID = 2;
    if(key=='3') ID = 3;
    if(key=='4') ID = 4;
    if(key=='5') ID = 5;
    if(key=='6') ID = 6;
    if(key=='7') ID = 7;
    if(key=='8') ID = 8;
    glutPostRedisplay();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    if(head==NULL){
        head = glmReadOBJ("model/head.obj");
        body = glmReadOBJ("model/body.obj");
        uparm = glmReadOBJ("model/uparm.obj");
        downarm = glmReadOBJ("model/downarm.obj");
        cap = glmReadOBJ("model/cap.obj");
        eye = glmReadOBJ("model/eye.obj");
        nose = glmReadOBJ("model/nose.obj");
    }
glPushMatrix();
    glScalef(0.2, 0.2, 0.2);

    glPushMatrix();
        ///glTranslatef(teapotX, teapotY, 0);

        glColor3f(1, 1, 1);
        if (show[0]) glmDraw(head, GLM_MATERIAL);
    glPopMatrix();

    if (ID == 1) glColor3f(1, 0, 0);
    else glColor3f(1, 1, 1);
    if (show[1]) glmDraw(body, GLM_MATERIAL);

    glPushMatrix();
        glTranslatef(-1.360000, +0.360000, 0);
        glRotatef(angle[2], 0, 0, 1);
        glTranslatef(1.360000, -0.360000, 0);

        if (ID == 2) glColor3f(1, 0, 0);
        else glColor3f(1, 1, 1);
        if (show[2]) glmDraw(uparm, GLM_MATERIAL);
    glPopMatrix();


    glPushMatrix();

        glTranslatef(teapotX, teapotY, 0);


        if (ID == 3) glColor3f(1, 0, 0);
        else glColor3f(1, 1, 1);
        if (show[3]) glmDraw(downarm, GLM_MATERIAL);
    glPopMatrix();



    glPushMatrix();
        if (ID == 4) glColor3f(1, 0, 0);
        else glColor3f(1, 0, 0);
        if (show[4]) glmDraw(cap, GLM_MATERIAL);
    glPopMatrix();

    glPushMatrix();
        if (ID == 5) glColor3f(0, 0, 0);
        else glColor3f(0, 0, 0);
        if (show[5]) glmDraw(eye, GLM_MATERIAL);
    glPopMatrix();

    glPushMatrix();
        if (ID == 6) glColor3f(0, 0, 1);
        else glColor3f(0, 0, 1);
        if (show[6]) glmDraw(nose, GLM_MATERIAL);
    glPopMatrix();

glPopMatrix();


    glPopMatrix();
    glColor3f(0,1,0);
    glutSolidTeapot( 0.02 );
    glutSwapBuffers();
}
int oldX=0, oldY=0;
void mouse(int button, int state, int x, int y)
{
    if(state==GLUT_DOWN){
        oldX = x;
        oldY = y;
    }
}
void motion(int x, int y){
    teapotX = (x-oldX)/150.0;
    teapotY = (y-oldY)/150.0;
    angle+=x-oldX;
    angle+=x-oldX;
    printf("glTranslatef(%f, %f, 0);\n", teapotX, teapotY);
    angle[ID] += x-oldX;
    oldX = x;
    oldY = y;
    glutPostRedisplay();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week14");

    glutMotionFunc(motion);
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);

    glutMainLoop();

}
