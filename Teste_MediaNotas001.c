//Calculando a média de um aluno em C

// fluxograma:
//Iniciar o programa --> Coletar as notas (mensagem para coletar a primeira nota) --> Receber a primeira nota -->
//Mensagem para coletar a segunda nota --> (coletar a segunda nota) --> 
//Calcular a média das duas notas ( pegar os dados e dividir pela quantidade de notas) -->
//Exibir o resultado da média.

#include<stdio.h>

int main() {

    float nota1, nota2, nota3;
    float media;

    printf("Digite a primeira nota: \n");
    scanf(" %f", &nota1);

    printf("Digite a segunda nota: \n");
    scanf(" %f", &nota2);

    printf("Digite a terceira nota: \n");
    scanf(" %f", &nota3);

    media = (nota1 + nota2 + nota3)/3;

    printf("A média do aluno foi: %.2f", media);

    return 0;
}