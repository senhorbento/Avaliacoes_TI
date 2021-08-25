#include <GL/glut.h>
#include <cmath>

#define M_PI       3.14159265358979323846
#define _ESPESSURA_ 2

void inicializar() {
    GLclampf r, g, b, o;
    r = 0.3; g = 0.8; b = 1.0; o = 1.0;
    glClearColor(r, g, b, o); //cor de fundo
    gluOrtho2D(0, 1000, 0, 1000);
}

void circulo(int cx, int cy) {
    GLfloat x, y, ang;
    glColor3f(0.0, 0.0, 1.0); //azul
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
    int  tremFrontalBase[2]={ 200,500 };
    int tremFrontalFinal[2]={ 200,450 };

    int  tremTraseiro1Base[2]={ 650,500 };
    int tremTraseiro1Final[2]={ 650,450 };

    int  tremTraseiro2Base[2]={ 600,500 };
    int tremTraseiro2Final[2]={ 600,450 };

    int bico[2]={ 125,575 };
    int centroBico[2]={ 200,575 };

    int caudaSuperior[2]={ 900,625 };
    int caudaInferior[2]={ 900,590 };
    
    int inicioFuselagemSuperior[2]={ 200,650 };
    int  finalFuselagemSuperior[2]={ 800,650 };

    int inicioFuselagemInferior[2]={ 200,500 };
    int  finalFuselagemInferior[2]={ 775,500 };
    
    int estabilizadorVerticalBaseFuselagem[2]={750,650};
    int     estabilizadorVerticalBaseCauda[2]={870,631};
    int    estabilizadorVerticalTopoFrente[2]={840,831};
    int  estabilizadorVerticalTopoTrazeiro[2]={870,831};
    
    glClear(GL_COLOR_BUFFER_BIT);
    /*glColor3f(1.0, 1.0, 1.0);
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2iv(estabilizadorVerticalBaseCauda);
    glVertex2iv(estabilizadorVerticalBaseFuselagem);
    glVertex2iv(estabilizadorVerticalTopoTrazeiro);
    glVertex2iv(estabilizadorVerticalTopoFrente);
    glEnd();*/
    //baixo, branco
    /*Pontos relevantes 
    glColor3f(1.0, 1.0, 1.0);
    glPointSize(5);
    glBegin(GL_POINTS);
    //baixo, branco
    int vetAux[2];
    glColor3f(1.0, 1.0, 1.0);
    vetAux[1] = 500;
    for (int i = 200; i < 800; i += 50) {
        vetAux[0] = i;
        glVertex2iv(vetAux);
    }
    //cima, vermelho
    glColor3f(1.0, 0.0, 0.0);
    vetAux[1] = 650;
    for (int i = 200; i < 800; i += 50) {
        vetAux[0] = i;
        glVertex2iv(vetAux);
    //bico
    glVertex2iv(bico);
    glVertex2iv(centroBico);
    glEnd();
    }*/
    
    //curva bico
    GLfloat x, y, ang;
    glColor3f(0.0, 0.0, 1.0); //azul
    glLineWidth(_ESPESSURA_);
    glBegin(GL_LINE_LOOP);
    for (int i = 270; i > 89; i--) {
        ang = (i * M_PI) / 180;
        x = centroBico[0] + (cos(ang) * 75);
        y = centroBico[1] + (sin(ang) * 75);
        glVertex2f(x, y);
    }
    glEnd();
    
    //desenhar linhas com variavel
    glLineWidth(_ESPESSURA_); // so funciona antes do Begin
    glBegin(GL_LINES);

    //cauda
    glVertex2iv(caudaSuperior);
    glVertex2iv(caudaInferior);
    
    //estabilizar vertical
    glVertex2iv(estabilizadorVerticalBaseCauda);
    glVertex2iv(estabilizadorVerticalTopoTrazeiro);
    
    glVertex2iv(estabilizadorVerticalTopoFrente);
    glVertex2iv(estabilizadorVerticalTopoTrazeiro);
    
    glVertex2iv(estabilizadorVerticalBaseFuselagem);
    glVertex2iv(estabilizadorVerticalTopoFrente);    

    //trem frontal haste
    glVertex2iv(tremFrontalBase);
    glVertex2iv(tremFrontalFinal);

    //Trem traseiro haste 1
    glVertex2iv(tremTraseiro1Base);
    glVertex2iv(tremTraseiro1Final);

    //Trem traseiro haste 2
    glVertex2iv(tremTraseiro2Base);
    glVertex2iv(tremTraseiro2Final);

    //cauda
    glVertex2iv(caudaSuperior);
    glVertex2iv(caudaInferior);

    glVertex2iv(caudaInferior);
    glVertex2iv(finalFuselagemInferior);

    glVertex2iv(caudaSuperior);
    glVertex2iv(finalFuselagemSuperior);

    //fuselagem
    glVertex2iv(finalFuselagemSuperior);
    glVertex2iv(inicioFuselagemSuperior);

    glVertex2iv(finalFuselagemInferior);
    glVertex2iv(inicioFuselagemInferior);
    
    glEnd();

    circulo(200, 435);
    circulo(600, 435);
    circulo(650, 435);   

    glFlush();
}

int main(int argc, char *argv[]){

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(10, 10);
    glutCreateWindow("Aviao");

    glutDisplayFunc(desenhar);
    inicializar();

    glutMainLoop();

    return 0;
}
