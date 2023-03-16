//Recapitulando Structs EXEMPLO 4.
//Structs por Alocação Dinâmica!

#include <stdio.h>
#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

int main()
{
    Data *data;
    
    data = malloc(sizeof(Data));
    data->dia = 02;
    data->mes = 10;
    data->ano = 2020;
    
    printf("\nExecutado Corretamente!");
    return 0;
}