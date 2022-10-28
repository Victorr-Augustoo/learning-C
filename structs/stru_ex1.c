/*
Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme solicitado abaixo:
* Horário: composto de hora, minutos e segundos.
* Data: composto de dia, mês e ano.
* Compromisso: composto de uma data, horário e texto que descreve o compromisso.
*/
// not working properly
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct horario {
    int hora;
    int minuto;
    int segundo;
};

struct data{
    int dia;
    int mes;
    int ano;
};

struct compromisso{
    struct data d;
    struct horario h;
    char texto[30];
};

int main(){
    struct compromisso comp;

    printf("horario do compromisso hh:mm:ss \n");
    setbuf(stdin, NULL);
    scanf( " %i %i %i ", &comp.h.hora, &comp.h.minuto, &comp.h.segundo );

    printf("data do compromisso dd/mm/aa \n");
    setbuf(stdin, NULL);
    scanf( " %i %i %i ", &comp.d.dia, &comp.d.mes, &comp.d.ano);

    printf("descreva o compromisso:\n");
    setbuf(stdin, NULL);
    gets(comp.texto);

    printf("informacoes:\nHora: %i:%i:%i\n", comp.h.hora, comp.h.minuto, comp.h.segundo);
    printf("Dia: %i/%i/%i\n", comp.d.dia, comp.d.mes, comp.d.ano);
    printf("%s\n", comp.texto);


    system("pause");
    return 0;
}