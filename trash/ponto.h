//arquivo ponto.h
typedef struct ponto Ponto;
//Cria um novo ponto
Ponto* pto_cria(float x, float y); // <- tipo fopen
//libera um ponto
void pto_libera(Ponto *p); // <- tipo fclose
//acessa os valores "x" e "y" de um ponto
void pto_acessa(Ponto *p, float *x, float *y);
//atribui os valores "x" e "y" a um ponto
void pto_atribui(Ponto *p, float x, float y);
//calcula a distância entre dois pontos
float pto_distancia(Ponto *p1, Ponto *p2);