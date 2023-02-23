#include <GL/glut.h>
void display()
{
    glColor3f(233/255.0,141/255.0,128/255.0);
    glBegin(GL_POLYGON);
    glVertex2f((129-100)/100.0,-(21-100)/100.0);
    glVertex2f((55-100)/100.0,-(195-100)/100.0);
    glVertex2f((86-100)/100.0,-(156-100)/100.0);
    glVertex2f((62-100)/100.0,-(174-100)/100.0);
    glVertex2f((61-100)/100.0,-(255-100)/100.0);
    glVertex2f((61-100)/100.0,-(227-100)/100.0);
    glVertex2f((59-100)/100.0,-(227-100)/100.0);
    glVertex2f((61-100)/100.0,-(244-100)/100.0);
    glVertex2f((490-100)/100.0,-(253-100)/100.0);
    glVertex2f((490-100)/100.0,-(234-100)/100.0);
    glVertex2f((481-100)/100.0,-(234-100)/100.0);
    glVertex2f((481-100)/100.0,-(158-100)/100.0);
    glVertex2f((370-100)/100.0,-(80-100)/100.0);
    glEnd();

    glutSwapBuffers();
}
int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("week02");
	glutDisplayFunc(display);
	glutMainLoop();
}
