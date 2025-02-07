//Cadastrando Alunos com Structs e Arrays em C.

#include<stdio.h>
#include<string.h>

struct Aluno{
    char nome[50];
    int idade;
    int matricula;
    char curso[30];
};

int main(){
    int i;
    struct Aluno alunos[3]; //Array de Structs para armazenar 3 alunos.

    // cadastrando os dados:

    strcpy(alunos[0].nome, "Eduarda Meneguelo");
    alunos[0].idade = 24;
    alunos[0].matricula = 000001;
    strcpy(alunos[0].curso, "Ciências da Computação");

    strcpy(alunos[1].nome, "Vítor Garcia");
    alunos[1].idade = 29;
    alunos[1].matricula = 000002;
    strcpy(alunos[1].curso, "Segurança Cibernética");

    strcpy(alunos[2].nome, "Giulia Tavares");
    alunos[2].idade = 27;
    alunos[2].matricula = 000003;
    strcpy(alunos[2].curso, "Moda");

    //Exibindo os dados:

    printf("Dados dos alunos cadastrados \n");
    for (i = 0; i < 3; i++){
        printf("Aluno %d: \n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Curso: %s\n\n", alunos[i].curso);
}

        return 0;
}