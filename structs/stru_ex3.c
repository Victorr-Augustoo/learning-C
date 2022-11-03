/* Construa uma estrutura aluno com nome, número de matrícula e curso. Leia do usuário a informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.*/

#include <stdio.h>
#include <stdlib.h>

struct aluno{
    char nome[30];
    int matricula;
    char curso[30];
};

int main(){
    struct aluno a[5];

    // entrada
    for (int i = 0; i < 5; i++){
        printf("nome %iº aluno:\n", i+1);
        setbuf(stdin, NULL); //limpando buffer
        scanf("%s", a[i].nome);
        printf("numero de matricula %iº aluno:\n", i+1);
        scanf("%i", &a[i].matricula);
        printf("curso do %iº aluno:\n", i+1);
        setbuf(stdin, NULL);
        fgets(a[i].curso, 30, stdin);
    }
    
    printf("\n");

    // saída:
    for (int i = 0; i < 5; i++){
        printf("dados do %iº aluno:\n", i+1);
        printf("Nome: %s\n", a[i].nome);
        printf("Matricula: %i\n", a[i].matricula);
        printf("Curso: %s\n", a[i].curso);
    }

    system("pause");
    return 0;
}