//School data management with Nested Structs in C.

#include<stdio.h>
#include<string.h>

//Defining the Structs:

struct Discipline {
    char name[30];
    char professor[50];
    int workload;
};

struct Student{
    char nameS[50];
    int age;
    int registration;
    struct Discipline disciplines[3];    //Array of Structs to store 3 disciplines.
};

//Discipline registration function:

void registerDiscipline(struct Discipline *Discipline, const char *name, const char *professor, int workload){
    strcpy(Discipline->name, name);
    strcpy(Discipline->professor, professor);
    Discipline->workload = workload;     
};

//Student registration function:

void registerStudent(struct Student *student, const char *nameS, int age, int registration){
    strcpy(student->nameS, nameS);
    student->age = age;
    student->registration = registration;

    registerDiscipline(&student->disciplines[0], "Math", "John Dean", 60);
    registerDiscipline(&student->disciplines[1], "Physics", "Jane Souza", 60);
    registerDiscipline(&student->disciplines[2], "Chemistry", "Alice Costa", 60);
};

//Show registered students function:

void showStudent(struct Student *student){
    int i;

    printf("Student Name: %s\n", student->nameS);
    printf("Age: %d\n", student->age);
    printf("Registration: %d\n", student->registration);

    printf("Disciplines:\n");
    for (i = 0; i < 3; i++){
        printf(" Discipline: %d\n", i + 1);
        printf("Name: %s\n", student->disciplines[i].name);
        printf("Professor: %s\n",student->disciplines[i].professor);
        printf("workload: %d hours\n", student->disciplines[i].workload);
    };
};

int main(){
    struct Student student1;
    registerStudent(&student1,"Eduarda M",24, 1);
   showStudent(&student1);
   return 0;
}
