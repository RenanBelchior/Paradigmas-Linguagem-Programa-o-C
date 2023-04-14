//Exercicio 1:
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void vetor_random(int *vetor, int tam){
    //for(int i = 0; i < tam; i++){
        //vetor[i] = rand() % 50;
        //printf("%d |", vetor[i]);
    //}
//}

// main(){
    //int *vetor, n;
    //printf("Tamanho do vetor: ");
    //scanf("%d", &n);
    
    //vetor = malloc(n * sizeof(int));
    //vetor_random(vetor, n);
    
    //return 0;
//}



//Exercicio 2:
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>

//int main() {
  //time_t tempo;
    //time(&tempo);
    //printf("%s",ctime(&tempo));
    
    //return 0;
//}



//Exercício 3:
//#include <stdio.h>
//#include <time.h>
//int main(){
  //time_t t = time(NULL);
  //struct tm tm = *localtime(&t);
  //int segundos;
  //printf("Digite os segundos: ");
  //scanf("%d", &segundos);
  //t += segundos;
  //tm = *localtime(&t);
  
  //printf("Data e hora daqui a %d segundos: \n", segundos);
  //printf("Data: %d /%d /%d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
  //printf("Hora: %d : %d : %d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);
  
  //return 0;
//}



//Exercício 4:
//#include <stdio.h>
//#include <string.h>

//int main(){
    //char stringA[50];
    
    //printf("Digite uma palavra...................: ");
    //scanf("%s", stringA);
    
    //printf("A palavra que escreveu...............: %s\n", stringA);
    //printf("Quantidade de letras da palavra......: %lu\n\n", strlen(stringA));
    
    //return 0;
//}



//Exercício 5:
//#include <stdio.h>
//#include <stdlib.h>

//int main(void){
    //FILE *pont_file;
    
    //Abrindo o arquivo
    //pont_file = fopen("arquivo.txt", "a");
    
    //fechando arquivo
    //fclose(pont_file);
    
    //printf("O Arquivo foi criado com sucesso!");
    
    //system("pause");
    //return (0);
//}



//Exercício 6:
//#include <stdio.h>
//#include <stdlib.h>

//int main(){
    //FILE *arquivo1, *arquivo2;
    //char ch;
    //arquivo1 = fopen("arquivo1.txt", "r");
    //arquivo2 = fopen("arquivo2.txt", "w");
    //if(arquivo1 == NULL || arquivo2 == NULL){
       //printf("Error not found");
        //return 1;
    //}
    //while((ch = fgetc(arquivo1)) != EOF){
        //fputc(ch, arquivo2);
    //}
    //fclose(arquivo1);
    //fclose(arquivo2);
    //return 0;
//}



//Exercicio 7:
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

//int main(){
    //char string[100], antigo, novo;
    //printf("Digite a string:\n");
    //scanf("%s", string);
    //printf("Digite o caractere a ser trocado: ");
    //scanf("%c", &antigo);
    //printf("Digite o caractere novo: ");
    //scanf("%c", &novo);
    
    //for(int i = 0; i < strlen (string); i++){
        //if (string[i] == antigo){
            //string[i] = novo;
        //}
    //}
    //printf("A nova string é %s", string);
    //return 0;
//}















