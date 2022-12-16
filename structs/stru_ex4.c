/*Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.

(a) Permita ao usuário entrar com os dados de 5 alunos.
(b) Encontre o aluno com maior nota da primeira prova.
(c) Encontre o aluno com maior média geral.
(d) Encontre o aluno com menor média geral.
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação.
*/

#include <stdio.h>
#include <stdlib.h>

struct aluno{
    int matricula;
    char nome[20];
    int p1;
    int p2;
    int p3;
};

typedef struct aluno Aluno;

int main(){
    Aluno aluno[5];
    int maior_nota = 0;
    int maior_nota_index = 0;
    float media[5] = {0}; 
    int soma = 0;
    float menor_media = 0, maior_media = 0;
    int menor_media_index = 0, maior_media_index = 0;

    printf("lendo os dados dos 5 alunos:\n");
    for (int i = 0; i < 5; i++){
        printf("digite o nome do %iº aluno:\n", i+1);
        scanf(" %s", aluno[i].nome);

        printf("digite o numero de matricula do %iº aluno:\n", i+1);
        scanf("%i", &aluno[i].matricula);

        printf("digite as notas da p1, p2 e p3 do %iº aluno:\n", i+1);
        scanf("%i", &aluno[i].p1);
        scanf("%i", &aluno[i].p2);
        scanf("%i", &aluno[i].p3);

    }

    for (int i = 0; i < 5; i++){
        if (i == 0){
            maior_nota = aluno[0].p1;
            maior_nota_index = 0;
        }
        else if (aluno[i].p1 > maior_nota){
            maior_nota = aluno[i].p1;
            maior_nota_index = i;
        }
    }
    printf("o aluno com maior nota na p1 eh: %s com a nota %i\n", aluno[maior_nota_index].nome, maior_nota);

    // medias
    for (int i = 0; i < 5; i++){
        
        soma = aluno[i].p1 + aluno[i].p2 + aluno[i].p3;
        media[i] = (float) soma/3;

        if (i == 0){
            menor_media = media[i];
            menor_media_index = i;
            maior_media = media[i];
            maior_media_index = i; 
        }
        else{
            if (media[i] < menor_media){
                menor_media = media[i];
                menor_media_index = i;
            }
            if (media[i] > maior_media){
                maior_media = media[i];
                maior_media_index = i;
            }
        }
    }    

    printf("%s eh o aluno com maior media: %.2f\n", aluno[maior_media_index].nome, maior_media);
    printf("%s eh o aluno com menor media: %.2f\n", aluno[menor_media_index].nome, menor_media);

    for (int i = 0; i < 5; i++){
        if (media[i] < 6){
            printf("o aluno %s ficou com media %.2f e esta REPROVADO!\n", aluno[i].nome, media[i]);
        }
        else{
            printf("o aluno %s ficou com media %.2f e esta APROVADO!\n", aluno[i].nome, media[i]);
        }
    }

    printf("\n");
    system("pause");
    return 0;
}