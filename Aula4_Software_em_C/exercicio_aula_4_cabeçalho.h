#include <string.h>


//CONCATENAR
void concatenar(){
    char resultado[50] = "AULA ";
    printf("%s\n", resultado);
    
    strcat(resultado, "DE SOFTWARE ");
    printf("%s\n, resultado");
    
    char curso[10] = " EM C";
    strcat(resultado, curso);
    printf("%s", resultado);
}



//COPIAR
void copiar() {
    char fonte[15] = "Curso_Java";
    char destino[50] = "Curso_C ";
    printf("String fonte: %s\n", fonte);
    printf("String destino: %s\n", destino);
    
    strcpy(destino, fonte);
    printf("Após a cópia ser realizada: %s \n", destino);
}



//COMPARAR
void comparar() {
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
}



//COMPARAR QUANTIDADE
void compQtde() {
    size_t num = 5;
    char stringA[20] = "Computacao";
    char stringB[20] = "Computador";
    printf("String A: %s\n", stringA);
    printf("String B: %s\n", stringB);
    printf("Valor 1ª comparação: %d\n\n", strncmp(stringA, stringB, num));
}



//TAMANHO
void tamanho() {
    char stringA[] = "PROGRAMACAO C";
    char stringB[] = "COMPUTAÇÃO EM NUVEM";
    printf("String A: %s\n", stringA);
    printf("Tamanho da string A: %lu\n\n", strlen(stringA));
    printf("String B: %s\n", stringB);
    printf("Tamanho da string B: %lu\n\n", strlen(stringB));
}