#include <GL/glut.h>
#include <cmath>

#define M_PI       3.14159265358979323846
#define _ESPESSURA_ 2

float escalaX, escalaY, angulo, posX, posY;

void inicializar() {
    GLclampf r, g, b, o;
    r = 0.3; g = 0.8; b = 1.0; o = 1.0;
    glClearColor(r, g, b, o); //cor de fundo
    gluOrtho2D(-1000, 1000, -1000, 1000);
}

void Fuselagem() {
    int       bico[2] = { 125,575 };
    int centroBico[2] = { 200,575 };

    int caudaSuperior[2] = { 900,625 };
    int caudaInferior[2] = { 900,590 };

    int inicioFuselagemSuperior[2] = { 200,650 };
    int  finalFuselagemSuperior[2] = { 800,650 };

    int inicioFuselagemInferior[2] = { 200,500 };
    int  finalFuselagemInferior[2] = { 775,500 };
    //curva bico
    GLfloat x, y, ang;
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(_ESPESSURA_);

    glBegin(GL_LINE_LOOP);

        for (int i = 270; i > 89; i--) {
            ang = (i * M_PI) / 180;
            x = centroBico[0] + (cos(ang) * 75);
            y = centroBico[1] + (sin(ang) * 75);
            glVertex2f(x, y);
        }
        //fim curva bico

        //fuselagem
        glVertex2iv(inicioFuselagemSuperior);
        glVertex2iv(finalFuselagemSuperior);

        //cauda
        glVertex2iv(finalFuselagemSuperior);
        glVertex2iv(caudaSuperior);

        glVertex2iv(caudaSuperior);
        glVertex2iv(caudaInferior);

        glVertex2iv(caudaInferior);
        glVertex2iv(finalFuselagemInferior);

        glVertex2iv(finalFuselagemInferior);
        glVertex2iv(inicioFuselagemInferior);

    glEnd();
}

void janelaPiloto() {
    int   janelaGrandeRaioSuperior[2] = { 150,630 };
    int janelaGrandeCentroSuperior[2] = { 200,630 };
    int   janelaGrandeRaioInferior[2] = { 130,600 };
    int janelaGrandeCentroInferior[2] = { 200,600 };

    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(_ESPESSURA_); // so funciona antes do Begin
    glBegin(GL_LINES);

        glVertex2iv(janelaGrandeRaioSuperior);
        glVertex2iv(janelaGrandeCentroSuperior);

        glVertex2iv(janelaGrandeCentroSuperior);
        glVertex2iv(janelaGrandeCentroInferior);

        glVertex2iv(janelaGrandeCentroInferior);
        glVertex2iv(janelaGrandeRaioInferior);

    glEnd();
}

void Asa() {
    int SuperiorInicio[2] = { 400, 575 };
    int  SuperiorFinal[2] = { 600, 575 };
    int InferiorInicio[2] = { 400, 555 };
    int  InferiorFinal[2] = { 600, 555 };

    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(_ESPESSURA_); // so funciona antes do Begin
    glBegin(GL_LINES);

        glVertex2iv(SuperiorInicio);
        glVertex2iv(SuperiorFinal);

        glVertex2iv(SuperiorFinal);
        glVertex2iv(InferiorFinal);

        glVertex2iv(InferiorFinal);
        glVertex2iv(InferiorInicio);

        glVertex2iv(InferiorInicio);
        glVertex2iv(SuperiorInicio);

    glEnd();
}

void EstabilizadorVertical() {
    int estabilizadorVerticalBaseFuselagem[2] = { 750,650 };
    int     estabilizadorVerticalBaseCauda[2] = { 870,631 };
    int    estabilizadorVerticalTopoFrente[2] = { 840,831 };
    int  estabilizadorVerticalTopoTraseiro[2] = { 870,831 };

    glLineWidth(_ESPESSURA_); // so funciona antes do Begin
    glBegin(GL_LINES);

        //Estabilizador vertical
        glVertex2iv(estabilizadorVerticalBaseFuselagem);
        glVertex2iv(estabilizadorVerticalTopoFrente);

        glVertex2iv(estabilizadorVerticalTopoFrente);
        glVertex2iv(estabilizadorVerticalTopoTraseiro);

        glVertex2iv(estabilizadorVerticalTopoTraseiro);
        glVertex2iv(estabilizadorVerticalBaseCauda);

    glEnd();
}

void EstabilizadorHorizontal() {
    int SuperiorInicio[2] = { 750, 610 };
    int  SuperiorFinal[2] = { 870, 610 };
    int InferiorInicio[2] = { 750, 600 };
    int  InferiorFinal[2] = { 870, 600 };

    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(_ESPESSURA_); // so funciona antes do Begin
    glBegin(GL_LINES);

        glVertex2iv(SuperiorInicio);
        glVertex2iv(SuperiorFinal);

        glVertex2iv(SuperiorFinal);
        glVertex2iv(InferiorFinal);

        glVertex2iv(InferiorFinal);
        glVertex2iv(InferiorInicio);

        glVertex2iv(InferiorInicio);
        glVertex2iv(SuperiorInicio);

    glEnd();

}

void tremPouso(int pos) {
    int haste[2] = { pos,500 };

    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(_ESPESSURA_); // so funciona antes do Begin

    glBegin(GL_LINES);

        glVertex2iv(haste);
        haste[1] -= 15;
        glVertex2iv(haste);

    glEnd();

}

void circulo(int cx, int cy) {
    GLfloat x, y, ang;
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(_ESPESSURA_);

    glBegin(GL_LINE_LOOP);

        for (int i = 0; i < 360; i++) {
            ang = (i * M_PI) / 180;
            x = cx + (cos(ang) * 15);
            y = cy + (sin(ang) * 15);
            glVertex2f(x, y);
        }

    glEnd();
}

void desenhar() {
    //horizontal, vertical
    glPushMatrix();
    glClear(GL_COLOR_BUFFER_BIT);
    glScalef(escalaX,escalaY,1.0);
    glRotatef(angulo, 0, 0, 1);
    glTranslatef(posX, posY, 1);

    Fuselagem();

    janelaPiloto();

    Asa();
    EstabilizadorVertical();
    EstabilizadorHorizontal();

    tremPouso(200);
    circulo(200, 470);
    tremPouso(620);
    circulo(620, 470);
    tremPouso(660);
    circulo(660, 470);
    tremPouso(700);
    circulo(700, 470);
    for(int i =2; i < 12; i++)
        circulo(140 + (50 * i), 615);
    glPopMatrix();
    glFlush();
}

void TeclaPressionada(unsigned char tecla, int x, int y) {
    switch (tecla) {
    case 'a': //<-
        posX -= 10;
        break;
    case 'w': //cima
        posY += 10;
        break;
    case 'd': //->
        posX += 10;
        break;
    case 's': //baixo
        posY -= 10;
        break;
    case '+'://+
        escalaX += 0.1;
        escalaY += 0.1;
        break;
    case '-'://-
        escalaX -= 0.1;
        escalaY -= 0.1;
        break;
    case 'z': 
        angulo += 10;
        break;
    case 'x': 
        angulo -= 10;
        break;
    case 27://ESC
        exit(0);
        break;
    } 
    glutPostRedisplay();
}

int main(int argc, char* argv[]) {
    escalaX = 1.0;
    escalaY = 1.0;

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800,600);
    glutInitWindowPosition(10, 10);
    glutCreateWindow("Aviao");
    glutKeyboardFunc(TeclaPressionada);
    glutDisplayFunc(desenhar);
    inicializar();

    glutMainLoop();

    return 0;
}
