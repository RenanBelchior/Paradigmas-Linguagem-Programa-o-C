//BILBIOTECAS E API - TIME.H

// EXEMPLO: long int clock()

#include <stdio.h>
#include <time.h>

int main() {
    printf("Pulsos de clock: %ld\n", clock());
    printf("\n");
    printf("Mais um teste de quantidade de pulsos de clock: %ld\n",  clock());

    return 0;
}

------------------------------------------------------------------

//EXEMPLO: STRING ASCTIME(CONST STRUCT TM *TP)

#include <stdio.h>
#include <time.h>

int main () {
    struct tm tempo;
    tempo.tm_sec = 55;
    tempo.tm_min = 59;
    tempo.tm_hour = 23;
    tempo.tm_mday = 25;
    tempo.tm_mon = 12;
    tempo.tm_year = 2023 - 1990;
    tempo.tm_wday = 3;
    
    printf("%s", asctime(&tempo));
    
    return 0;
}

------------------------------------------------------------------
//EXEMPLO: STRING CTIME(CONST TIME * TEMPO)

#include <stdio.h>
#include <time.h>

int main() {
    time_t tempo;
    time(&tempo);
    
    printf("%s",ctime(&tempo));
    
    return 0;
}
------------------------------------------------------------------
//EXEMPLO: STRUCT TIME GMTIME(CONST TIME_T * TEMPO)

#include <stdio.h>
#include <time.h>

/* definindo o UTC/GMT
do brasil e do Japão */
#define BRT -3
#define JAP 9

int main(){
    time_t tempo;
    time(&tempo);
    
    struct tm *tempoT = gmtime(&tempo);
    printf("Horário no Japão: %02d:%02d:%02d\n"
           "Horário no Brasil: %02d:%02d:%02d\n",
            tempoT->tm_hour + JAP, tempoT->tm_min,
            tempoT->tm_sec, tempoT->tm_hour + BRT,
            tempo->tm_min, tempoT->tm_sec);
            
    return 0;
    
}

------------------------------------------------------------------
//EXEMPO: STRING.H
//funções: char* strcat

#include <stdio.h>
#include <string.h>

int main(){
    char resultado[50] = "AULA ";
    printf("%s\n", resultado);
    
    strcat(resultado, "DE SOFTWARE ");
    printf("%s\n, resultado");
    
    char curso[10] = " EM C";
    strcat(resultado, curso);
    printf("%s", resultado);
    
    return 0;
}
------------------------------------------------------------------
//STRING.H funções
//char* strcpy

#include <stdio.h>
#include <string.h>

int main() {
    char fonte[15] = "Curso_Java";
    char destino[50] = "Curso_C ";
    printf("String fonte: %s\n", fonte);
    printf("String destino: %s\n", destino);
    
    strcpy(destino, fonte);
    printf("Após a cópia ser realizada: %s \n", destino);
    
    return 0;
}
------------------------------------------------------------------
//STRING.H EXEMPLO:
//FUNÇÕES: int strcmp

#include <stdio.h>
#include <string.h>

int main(){
    char stringA[12] = "Computacao";
    char stringB[12] = "Computador";
    printf("String A: %s\n", stringA);
    printf("String B: %s\n", stringB);
    printf("Valor 1ª comparação: %d\n\n", strcmp(stringA, stringB));

    char stringC[12] = "ABB";
    char stringD[12] = "ABB";
    printf("String C: %s\n", stringC);
    printf("String D: %s\n", stringD);
    printf("Valor 2ª comparação: %d\n\n", strcmp(stringC, stringD));

    return 0;
}
------------------------------------------------------------------
//EXEMPLO 1: FUNÇÕES

#include <stdio.h>
#include <string.h>

int main(){
    size_t num = 5;
    char stringA[20] = "Computacao";
    char stringB[20] = "Computador";
    printf("String A: %s\n", stringA);
    printf("String B: %s\n", stringB);
    printf("Valor 1ª comparação: %d\n\n", strncmp(stringA, stringB, num));

    return 0;
}
------------------------------------------------------------------
//EXEMPLO 2: INT strncmp
#include <stdio.h>
#include <string.h>

int main(){
    char listaNomes[][20] = {"Maria", "Joao", "Marcia", "Nadia"};
    char comparacao[] = "Ma";
    printf("Imprimindo nomes que começam com %s:\n", comparacao);
    
    for(int i = 0; i < 4; i++){
        if(strncmp(listaNomes[i], comparacao, 2) ==0){
            printf("%s\n", listaNmomes[i]);
        }
    }
    return 0;
}
------------------------------------------------------------------
//EXEMPLO: FUNÇÕES
//size_t strlen

#include <stdio.h>
#include <string.h>

int main(){
    char stringA[] = "PROGRAMACAO C";
    char stringB[] = "COMPUTAÇÃO EM NUVEM";
    printf("String A: %s\n", stringA);
    printf("Tamanho da string A: %lu\n\n", strlen(stringA));
    printf("String B: %s\n", stringB);
    printf("Tamanho da string B: %lu\n\n", strlen(stringB));
    
    return 0;
}










