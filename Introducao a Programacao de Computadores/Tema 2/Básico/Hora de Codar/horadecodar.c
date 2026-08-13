#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite seu nome: ");
    scanf(" %49s", nome); // Limita a entrada a 49 caracteres para evitar overflow
    printf("Digite sua idade: ");
    scanf(" %d", &idade);
    printf("Digite sua altura: ");
    scanf(" %f", &altura);
    printf("Digite sua matrícula: ");
    scanf(" %d", &matricula);

    printf("Nome do Aluno: %s - Matrícula: %d \n", nome, matricula);
    printf("Idade: %d - Altura: %.2f \n", idade, altura);
    return 0;
}