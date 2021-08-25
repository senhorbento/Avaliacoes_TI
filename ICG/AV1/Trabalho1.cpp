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

void janelaPassageiros(){
    int vetAux[2];
    
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(_ESPESSURA_); // so funciona antes do Begin

    glBegin(GL_LINES);
    
    
    for(int i=2;i<12;i++){
        vetAux[0]=140+(50*i);
        vetAux[1]=630;
        
        glVertex2iv(vetAux);
        vetAux[0]=160+(50*i);
        glVertex2iv(vetAux);
        
        glVertex2iv(vetAux);
        vetAux[1]=610;
        glVertex2iv(vetAux);
        
        glVertex2iv(vetAux);
        vetAux[0]=140+(50*i);
        glVertex2iv(vetAux);
        
        glVertex2iv(vetAux);
        vetAux[1]=630;
        glVertex2iv(vetAux);
    }
    
    glEnd();
}

void tremPouso(int pos){
     int haste[2]={pos,500};
     
     glColor3f(0.0, 0.0, 0.0);
     glLineWidth(_ESPESSURA_); // so funciona antes do Begin
     
     glBegin(GL_LINES);
     
     glVertex2iv(haste);
     haste[1]-=25;
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
    
    /*Pontos estabilizador
    glColor3f(1.0, 1.0, 1.0);
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2iv(estabilizadorVerticalBaseCauda);
    glVertex2iv(estabilizadorVerticalBaseFuselagem);
    glVertex2iv(estabilizadorVerticalTopoTrazeiro);
    glVertex2iv(estabilizadorVerticalTopoFrente);
    glEnd();*/
    
    /*Pontos bico
    glColor3f(1.0, 1.0, 1.0);
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2iv(bico);
    glVertex2iv(centroBico);
    glEnd();*/
    
    /*Pontos relevantes
    //baixo, branco
    glColor3f(1.0, 1.0, 1.0);
    glPointSize(5);
    glBegin(GL_POINTS);
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
    }
    glEnd();*/

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
    
    //desenhar linhas com variavel
    glLineWidth(_ESPESSURA_); // so funciona antes do Begin
    glBegin(GL_LINES);
    
    //Estabilizador vertical
    glVertex2iv(estabilizadorVerticalBaseFuselagem);
    glVertex2iv(estabilizadorVerticalTopoFrente);
    
    glVertex2iv(estabilizadorVerticalTopoFrente);
    glVertex2iv(estabilizadorVerticalTopoTrazeiro);
    
    glVertex2iv(estabilizadorVerticalTopoTrazeiro);
    glVertex2iv(estabilizadorVerticalBaseCauda);
    
    glEnd();
    
    janelaPassageiros();
    
    tremPouso(200);
    circulo(200, 460);
    tremPouso(600);
    circulo(600, 460);
    tremPouso(650);
    circulo(650, 460);   

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
