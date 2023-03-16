//Recapitulando Structs EXEMPLO 5.
//Structs para Datas!

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int dia, mes, ano;
} Data;

void criaData(Data data){
    srand(time(NULL));
    data.mes = 1 + (rand() % 12);
    data.ano = 1950 + (rand() % 73);
    data.dia = 1 + (rand() % 30);
    
    printf("Mês: %d\n", data.mes);
    printf("Dia: %d\n", data.dia);
    printf("Ano: %d\n", data.ano);
}

int main()
{
    Data data;
    criaData(data);
}