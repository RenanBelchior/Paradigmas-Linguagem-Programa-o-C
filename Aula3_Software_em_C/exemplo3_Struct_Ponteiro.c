//Recapitulando Structs EXEMPLO 3.
//Structs por ponteiros!

#include <stdio.h>
typedef struct {
    int matricula;
    char *nome;
    float nota;
} Aluno;
int main()
{
    Aluno aluno;
    Aluno *ptr = &aluno;
    ptr->matricula = 123456;
    ptr->nome = "joao";
    ptr->nota = 9.5;
    printf("..Dados do Aluno.. \n");
    printf("Matricula...: %d\n", ptr->matricula);
    printf("Nome...: %s\n", ptr->nome);
    printf("Nota...: %f\n", ptr->nota);
    return 0;
}
