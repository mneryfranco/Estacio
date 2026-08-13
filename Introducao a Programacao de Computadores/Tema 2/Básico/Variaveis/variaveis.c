#include <stdio.h>
#include <stdlib.h>

/*
%d: Imprime um inteiro no formato decimal.

%i: Equivalente a %d.

%f: Imprime um número de ponto flutuante no formato padrão.

%e: Imprime um número de ponto flutuante na notação científica.

%c: Imprime um único caractere.

%s: Imprime uma cadeia (string) de caracteres.

*/

int main()
{
    int idade = 25;
    float altura = 1.75;
    char opcao = 'S';
    char nome[20] = "João";

    printf("Digite sua idade: ");
    scanf(" %d", &idade);
    printf("Digite seu nome: ");
    scanf(" %19s", nome); // Limita a entrada a 19 caracteres para evitar overflow

    printf("%s possui %d anos e altura de %.2f metros \n", nome, idade, altura);

    return 0;
}