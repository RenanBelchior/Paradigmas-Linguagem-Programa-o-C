//Recapitulando Structs EXEMPLO 2.
//Structs por parâmetros!

#include <stdio.h>
typedef struct {
    int pecas;
    float preco;
} Venda;
void imprimteTotal(Venda v1, Venda v2){
    Venda total = {0, 0.0};
    total.pecas = v1.pecas + v2.pecas;
    total.preco = v1.preco + v2.preco;
    printf("Qtde peças....: %d\n", total.pecas);
    printf("Preço total....: %.2f\n", total.preco);
}
int main()
{
    Venda V1 = {11, 20}, V2 = {3, 10};
    imprimteTotal(V1, V2);
}