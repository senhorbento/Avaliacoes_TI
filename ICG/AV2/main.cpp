#include <GL/glut.h>
#include <cstdio>
#include <cmath>

//constantes
#define M_PI 3.14159265358979323846
#define _MAX_SIZE_ 20
#define _VELOCIDADE_ 0.5
#define _TAMANHO_BOLINHA_ _MAX_SIZE_ / 10

//variaveis referentes a bolinha
GLfloat aspecto, angulo;
GLint slices = 16, stacks = 16;

//variaveis manipulacao camera
int eyex =     10;
int eyey =     50;
int eyez =     -200;
int centerx =  0;
int centery =  0;
int centerz =  0;
int upx =      1;
int upy =      0;
int upz =      0;

//variaveis movimento/sentido da bolinha
double movz = -18;
double movx = 0;
double movy = 0;
char sentido = 'A';

void inicializar() {
    GLclampf r, g, b, o;
    r = 0.3; g = 0.8; b = 1.0; o = 1.0;
    glClearColor(r, g, b, o); //cor de fundo
    angulo = 40;
    gluOrtho2D(-50, 50, -50, 50);
}

void quadrado(float v1[], float v2[], float v3[], float v4[]) {
    glBegin(GL_LINE_LOOP);

        glVertex3fv(v1);
        glVertex3fv(v2);
        glVertex3fv(v3);
        glVertex3fv(v4);

    glEnd();
}

void cubo(float d) {
    float v1[3] = { -d,  d,  d };
    float v2[3] = { -d, -d,  d };
    float v3[3] = {  d, -d,  d };
    float v4[3] = {  d,  d,  d };

    float v5[3] = {  d,  d, -d };
    float v6[3] = {  d, -d, -d };
    float v7[3] = { -d, -d, -d };
    float v8[3] = { -d,  d, -d };

    // frontal
    quadrado(v1, v2, v3, v4);

    // lateral direita
    quadrado(v4, v3, v6, v5);

    // traseiro
    quadrado(v5, v8, v7, v6);

    //lateral esquerda
    quadrado(v1, v8, v7, v2);

    //topo
    quadrado(v1, v4, v5, v8);

    //base
    quadrado(v2, v7, v6, v3);
}

void bolinha(double r) {
    glPushMatrix();
        glEnable(GL_DEPTH_TEST);
        glEnable(GL_LIGHTING);
        glEnable(GL_LIGHT0);
        glShadeModel(GL_SMOOTH);
            glTranslated(movz, movy, movx);
            glutSolidSphere(r, slices, stacks);
        glDisable(GL_DEPTH_TEST);
        glDisable(GL_LIGHTING);
        glDisable(GL_LIGHT0);
    glPopMatrix();    
}
    

void desenhar() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(0, 0, 0);
        cubo(_MAX_SIZE_);
        bolinha(_TAMANHO_BOLINHA_);

    glutSwapBuffers();
}

void colisao() {
    if (sentido == 'A') {    
        if (movz == (_MAX_SIZE_ * -1) - _TAMANHO_BOLINHA_) {
            sentido = 'B';
            movz+= _VELOCIDADE_;
        }
        else movz-= _VELOCIDADE_;
    }
    else if (sentido == 'B') {
        if (movz == _MAX_SIZE_- _TAMANHO_BOLINHA_) sentido = 'C';
        else movz+= _VELOCIDADE_;
    }
    else if (sentido == 'C') {
        if (movx != _MAX_SIZE_ - _TAMANHO_BOLINHA_) {
            movz-= _VELOCIDADE_;
            movx+= _VELOCIDADE_;
        }
        else sentido = 'D';
    }
    else if (sentido == 'D') {
        if (movx == (_MAX_SIZE_ * -1) + _TAMANHO_BOLINHA_) sentido = 'E';
        else movx-= _VELOCIDADE_;
    }
    else if (sentido == 'E') {
        if (movz != (_MAX_SIZE_*-1) + _TAMANHO_BOLINHA_) {
            movz -= _VELOCIDADE_;
            movx += _VELOCIDADE_;
        }
        else sentido = 'H';
    }
    else if (sentido == 'H') {
        if (movy != (_MAX_SIZE_ * -1) + _TAMANHO_BOLINHA_) {
            movy -= _VELOCIDADE_;
            movz += _VELOCIDADE_;
        }
        else sentido = 'I';
    }
    else if (sentido == 'I') {
        if (movz != _MAX_SIZE_ - _TAMANHO_BOLINHA_) {
            movy += _VELOCIDADE_;
            movz += _VELOCIDADE_;
        }
        else sentido = 'J';
    }
    else if (sentido == 'J') {
        if (movy != _MAX_SIZE_ - _TAMANHO_BOLINHA_) {
            movy += _VELOCIDADE_;
            movz -= _VELOCIDADE_;
        }
        else sentido = 'K';
    }
    else if (sentido == 'K') {
        if (movz != (_MAX_SIZE_ * -1) + _TAMANHO_BOLINHA_) {
            movy -= _VELOCIDADE_;
            movz -= _VELOCIDADE_;
        }
        else sentido = 'B';
    }
    //mostra a posição da bolinha no console
    printf("%.2lf %.2lf %.2lf\n",movz,movy,movx);
}

void ConfigurarVisualizacao() {
    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();

    gluPerspective(angulo, aspecto, 0.1, 500);

    glMatrixMode(GL_MODELVIEW);

    glLoadIdentity();

    gluLookAt(eyex,eyey,eyez,centerx,centery,centerz,upx,upy,upz);

}

void TeclaPressionada(unsigned char tecla, int x, int y) {
    switch (tecla) {
    case 'w':
        centerx +=10;
        break;
    case 's':
        centerx -=10;
        break;
    case 'q':
        centery +=10;
        break;
    case 'a':
        centery -=10;
        break;
    case 'e':
        centerz+=10;
        break;
    case 'd':
        centerz-=10;
        break;
    case 'r':
        eyex += 10;
        break;
    case 'f':
        eyex -= 10;
        break;
    case 't':
        eyey += 10;
        break;
    case 'g':
        eyey -= 10;
        break;
    case 'y':
        eyez += 10;
        break;
    case 'h':
        eyez -= 10;
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
    //write code here
    ConfigurarVisualizacao();
    glutPostRedisplay();

}

void Timer(int value) {
    colisao();
    glutPostRedisplay();
    glutTimerFunc(15, Timer, 1);
}

int main(int argc, char* argv[]) {

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(10, 10);
    glutCreateWindow("3D");
    glutDisplayFunc(desenhar);
    glutTimerFunc(30, Timer, 1);
    glutReshapeFunc(AlterarTamanhoJanela);
    glutKeyboardFunc(TeclaPressionada);
    glutMouseFunc(EventoMouse);
    inicializar();

    glutMainLoop();

    return 0;
}
