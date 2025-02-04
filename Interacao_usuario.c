// Utilizando printf e scanf

// Sintaxe: scanf("formato1" "formato2", &variavel1, &variavel2,...)

#include<stdio.h>

int main(){
    int idade;
    float altura;
    char opcao[2];

// Idade e Altura
    printf("Informe sua Idade e sua Altura:\n");
    scanf(" %d %f", &idade, &altura);
    printf("Sua Idade é: %d\n", idade);
    printf("Sua Altura é: %f\n", altura);

//Opção
    printf("Escolha (s) para sim ou (n) para não:\n");
    scanf(" %s", &opcao);
    printf("A opção escolhida foi %s\n", opcao);
}