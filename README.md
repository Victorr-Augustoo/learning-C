
# [Exercícios](https://www.facom.ufu.br/~backes/material_comp.php)

<details>
<summary><h3>Vetores e Matrizes</h3></summary>

:white_check_mark: 18. Faça um programa que leia um vetor de 10 números. Leia um número $x$. Conte os múltiplos de um número inteiro $x$ num vetor e mostre-os na tela.

:white_check_mark: 17. Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que possuírem valores negativos.

:white_check_mark: 16. Faça um programa que leia um vetor de 5 posições para números reais e, depois, um código inteiro. Se o código for zero, finalize o programa; se for 1, mostre o vetor na ordem direta; se for 2, mostre o vetor na ordem inversa. Caso, o codigo for diferente de 1 e 2 escreva uma mensagem informando que o código e inválido.

:white_check_mark: 15. Leia um vetor com 20 números inteiros. Escreva os elementos do vetor eliminando elementos repetidos.


</details>
<details>
<summary><h3>Strings</h3></summary>

:white_check_mark: 5. Digite um nome, calcule e retorne quantas letras tem esse nome.

:white_check_mark: 4. Faça um programa que leia um nome e imprima as 4 primeiras letras do nome.

:white_check_mark: 3. Entre com um nome e imprima o nome somente se a primeira letra do nome for 'a' (maiúscula ou minúscula).

:white_check_mark: 2. Crie um programa que calcula o comprimento de uma string (não use a função strlen).

:white_check_mark: 1. Faça um programa que então leia uma string e a imprima.
</details>

<details>
<summary><h3>Structs</h3></summary>

:x: 3. Construa uma estrutura aluno com nome, número de matrícula e curso. Leia do usuário a informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.

:x: 2. Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma estrutura.

:question question: 1. Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme solicitado abaixo:
* Horário: composto de hora, minutos e segundos.
* Data: composto de dia, mês e ano.
* Compromisso: composto de uma data, horário e texto que descreve o compromisso.
</details>

<details>
<summary><h3>Funções</h3></summary>

:x: 3. Faça uma função para verificar se um número é positivo ou negativo. Sendo que o valor de retorno será 1 se positivo, -1 se negativo e 0 se for igual a 0.

:x: 2. Faça uma função que receba a data atual (dia, mês e ano em inteiro) e exiba-a na tela no formato textual por extenso. Exemplo: Data: 01/01/2000, imprimir: 1 de janeiro de 2000.

:x: 1. Crie uma função que recebe como parâmetro um número inteiro e devolve o seu dobro.
</details>

<details>
  <summary><h3>Recursão</h3></summary>

:x: 15. A função fatorial duplo é definida como o produto de todos os números naturais ímpares de 1 até algum número natural ímpar N. Assim, o fatorial duplo de 5 é $$5!! = 1 \cdot 3 \cdot 5 = 15$$ Faça uma função recursiva que receba um número inteiro positivo ímpar N e retorne o fatorial duplo desse número.

:x: 14. Faça uma função recursiva que receba um número inteiro positivo par N e imprima todos os números pares de 0 até N em ordem decrescente.

:x: 13. Faça uma função recursiva que receba um número inteiro positivo par N e imprima todos os números pares de 0 até N em ordem crescente.

:white_check_mark: 12. Faça uma função recursiva que receba um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente.

:white_check_mark: 11. Faça uma função recursiva que receba um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente.

:white_check_mark: 10. A multiplicação de dois números inteiros pode ser feita através de somas sucessivas. Proponha um algoritmo recursivo Multip_Rec(n1,n2) que calcule a multiplicação de dois inteiros.

:white_check_mark: 9. Escreva uma função recursiva que determine quantas vezes um dígito K ocorre em um número natural N. Por exemplo, o dígito 2 ocorre 3 vezes em 762021192.

:white_check_mark: 8. O máximo divisor comum dos inteiros x e y é o maior inteiro que é divisível por x e y. Escreva uma função recursiva mdc em C, que retorna o máximo divisor comum de x e y. O mdc de x e y é definido como segue: se y é igual a 0, então mdc(x,y) é x; caso contrário, mdc(x,y) é mdc (y, x % y), onde % é o operador resto.

:white_check_mark: 7. Crie um programa em C que receba um vetor de números reais com 100 elementos. Escreva uma função recursiva que inverta ordem dos elementos presentes no vetor

:white_check_mark: 6. Crie um programa em C, que contenha uma função recursiva que receba dois inteiros positivos $k$ e $n$ e calcule $k^n$. Utilize apenas multiplicações. O programa principal
deve solicitar ao usuário os valores de $k$ e $n$ e imprimir o resultado da chamada da função.

:white_check_mark: 5. Crie uma função recursiva que receba um número inteiro N e calcule o somatório dos números de 1 a N.

:white_check_mark: 4. Faça uma função recursiva que permita somar os elementos de um vetor de inteiros.

:white_check_mark: 3. Faça uma função recursiva que permita inverter um número inteiro N. Ex: 123 - 321.

:white_check_mark: 2. Faça uma função recursiva que calcule e retorne o N-ésimo termo da sequência Fibonacci. Alguns números desta sequência são: 0, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...

:white_check_mark: 1. Faça uma função recursiva que calcule e retorne o fatorial de um número inteiro N.
  
  </details>
  
  
  <details>
<summary><h3>Ponteiros</h3></summary>

:x: 3. Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.

:x: 2. Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.

:x: 1. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.
  </details>

<details>
<summary><h3>Alocação Dinâmica</h3></summary>

:x: 3. Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação dinâmica de memória. Em seguida, leia do usuário seus valores e mostre quantos dos números são pares e quantos são ímpares.

:x: 2. Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação dinâmica de memória. Em seguida, leia do usuário seus valores e imprima o vetor lido.

:x: 1. Crie um programa que:
* (a) Aloque dinamicamente um array de 5 números inteiros,
* (b) Peça para o usuário digitar os 5 números no espaço alocado,
* (c) Mostre na tela os 5 números,
* (d) Libere a memória alocada.
</details>

<details>
<summary><h3>Arquivos</h3></summary>

:x: 3. Faça um programa que receba do usuário um arquivo texto e mostre na tela quantas letras são vogais.

:x: 2. Faça um programa que receba do usuário um arquivo texto e mostre na tela quantas linhas esse arquivo possui.

:x: 1. Escreva um programa que:
* (a) Crie/abra um arquivo texto de nome "arq.txt"
* (b) Permita que o usuário grave diversos caracteres nesse arquivo, até que o usuário entre com o caractere '0'
* (c) Feche o arquivo
Agora, abra e leia o arquivo, caractere por caractere, e escreva na tela todos os caracteres armazenados.
</details>
