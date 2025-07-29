#include <stdio.h>
#include <stdlib.h>

int main() {
    char EstadoC1, EstadoC2;
    char CodigoC1[3], CodigoC2[3];
    char NomeC1[20], NomeC2[20];
    int PopulacaoC1, PopulacaoC2;
    float AreaC1, AreaC2;
    float PibC1, PibC2;
    int PTuristicoC1, PTuristicoC2;

    printf("Insira os dados da carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &EstadoC1);
    printf("Código: ");
    scanf(" %s", CodigoC1);
    printf("Nome: ");
    scanf(" %s", NomeC1); 
    printf("População: ");
    scanf(" %d", &PopulacaoC1);
    printf("Área: ");
    scanf(" %f", &AreaC1);
    printf("PIB: ");
    scanf(" %f", &PibC1);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &PTuristicoC1);

    printf("Insira os dados da carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &EstadoC2);
    printf("Código: ");
    scanf(" %s", CodigoC2);
    printf("Nome: ");
    scanf(" %s", NomeC2);
    printf("População: ");
    scanf(" %d", &PopulacaoC2);
    printf("Área: ");
    scanf(" %f", &AreaC2);
    printf("PIB: ");
    scanf(" %f", &PibC2);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &PTuristicoC2);

    printf("\nDados da Carta 1:\n");
    printf("Estado: %c\n", EstadoC1);
    printf("Código: %s\n", CodigoC1);
    printf("Nome: %s\n", NomeC1);
    printf("População: %d\n", PopulacaoC1);
    printf("Área: %.2f\n", AreaC1);
    printf("PIB: %.2f\n", PibC1);
    printf("Número de Pontos Turísticos: %d\n", PTuristicoC1);

    printf("\nDados da Carta 2:\n");
    printf("Estado: %c\n", EstadoC2);
    printf("Código: %s\n", CodigoC2);
    printf("Nome: %s\n", NomeC2);
    printf("População: %d\n", PopulacaoC2);
    printf("Área: %.2f\n", AreaC2);
    printf("PIB: %.2f\n", PibC2);
    printf("Número de Pontos Turísticos: %d\n", PTuristicoC2);
    
    return 0;
}