#include<GL/glut.h>
#include<stdio.h>

void lineDrawing()
{

    glBegin(GL_LINES);
        glColor3f(0.0,1.0,0.0);
        glVertex2i(0,0);
        glVertex2i(150,150);

    glEnd();
    glFlush();
}


void initParameter()
{
    glClearColor(1.0,0.5,0.5,0);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0,400,0.0,300);
}

int main(int argc, char * argv[])
{

glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutCreateWindow("Test Line Drawing");
glutInitWindowPosition(200,300);
glutInitWindowSize(400,300);

initParameter();
glutDisplayFunc(lineDrawing);

glutMainLoop();

return 0;
}
