#include <GL/glut.h>

GLfloat angulo, aspecto, slices = 16, stacks = 16;

int z = 10;
int x = -50; 
int c = 200; 
int a = 0;
int s = 0;
int d = 0;
int q = 0;
int e = 0;
int w = 1;

void inicializar() {
    GLclampf r, g, b, o;
    r = 0.3; g = 0.8; b = 1.0; o = 1.0;
    glClearColor(r, g, b, o); //cor de fundo
    angulo = 45;
    gluOrtho2D(-100, 100, -100, 100);
}

void desenhar() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.5, 1, 0.7);

    glPushMatrix();
        glTranslated(-24, 12, -60);
        glRotated(60, 1, 0, 0);
        glRotated(angulo, 0, 0, 1);
        glutWireSphere(10, slices, stacks); //Bola
    glPopMatrix();

    glColor3f(0, 0, 0);

    glPushMatrix();
        glTranslated(-24, 12, -60);
        glRotated(60, 1, 0, 0);
        glRotated(angulo, 0, 0, 1);
        glutWireCube(100);
    glPopMatrix();

    glutSwapBuffers();
}

void ConfigurarVisualizacao() {
    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();

    gluPerspective(angulo, aspecto, 0.1, 500);

    glMatrixMode(GL_MODELVIEW);

    glLoadIdentity();

    gluLookAt(z, x, c, a, s, d, q, w, e);

}

void TeclaPressionada(unsigned char tecla, int x, int y) {
    switch (tecla) {
    case 'z':
        z += 10;
        break;
    case 'x':
        x += 10;
        break;
    case 'c':
        c += 10;
        break;
    case 'a':
        z += 10;
        break;
    case 's':
        s += 10;
        break;
    case 'd':
        d += 10;
        break;
    case 'q':
        q += 10;
        break;
    case 'w':
        w += 10;
        break;
    case 'e':
        e += 10;
        break;
    case 'b':
        z -= 10;
        break;
    case 'n':
        x -= 10;
        break;
    case 'm':
        c -= 10;
        break;
    case 'g':
        z -= 10;
        break;
    case 'h':
        s -= 10;
        break;
    case 'j':
        d -= 10;
        break;
    case 't':
        q -= 10;
        break;
    case 'y':
        w -= 10;
        break;
    case 'u':
        e -= 10;
        break;
    }
    ConfigurarVisualizacao();
    glutPostRedisplay();
}

void AlterarTamanhoJanela(GLsizei w, GLsizei h){
    if (h == 0) h = 1;

    glViewport(0, 0, w, h);

    aspecto = (GLfloat) w / (GLfloat)h;

    ConfigurarVisualizacao();
}

void EventoMouse(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON)
        if (state == GLUT_DOWN) {
            if (angulo >= 10) angulo -= 5;
        }

    if (button == GLUT_RIGHT_BUTTON)
        if (state == GLUT_DOWN) {
            if (angulo <= 130) angulo += 5;
        }

    ConfigurarVisualizacao();
    glutPostRedisplay();

}

int main(int argc, char* argv[]) {

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(10, 10);
    glutCreateWindow("3D");
    glutDisplayFunc(desenhar);
    glutReshapeFunc(AlterarTamanhoJanela);
    glutKeyboardFunc(TeclaPressionada);
    glutMouseFunc(EventoMouse);
    inicializar();

    glutMainLoop();

    return 0;
}
