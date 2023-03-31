#include <stdio.h>
#include <string.h>
#include "menu.h"

void concatenar();
void copiar();
void comparar();
void compQtde();
void tamanho();

int main(){
    
    //Menu de escolhas
    printf("::::::::::::Menu de Opçao::::::::::::\n");
    printf("1- Concatenar\n");
    printf("2- Copiar\n");
    printf("3- Comparar\n");
    printf("4- Comparar quantidade\n");
    printf("5- Tamanho\n\n");
    
    //Local de estrutura de decisão
    printf("::Escolha e digite uma opção pelo número::\n");
    scanf("%d");
    
    
    //Local de execução a após decisão
    printf("Digite uma PALAVRA:\n");
    scanf("%c");
    
    return 0;
}