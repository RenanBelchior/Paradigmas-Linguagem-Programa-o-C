//Recapitulando Structs EXEMPLO 1.

#include <stdio.h>
typedef struct {
    int pecas;
    float preco;
} Venda;

int main()
{
    Venda A = {10, 55.0};
    Venda B = {15, 124.00};
    Venda total;
    total.pecas = A.pecas + B.pecas;
    total.preco = A.preco + B.preco;
    printf("\n Total Preços......: %d\n", total.pecas);
    printf("\n Total Preços......: %2.2f\n", total.preco);
}
