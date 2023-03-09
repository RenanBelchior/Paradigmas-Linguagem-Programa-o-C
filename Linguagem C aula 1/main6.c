//Alocação de Memória = malloc exemplo 2

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *v;
    int n = 10;
    v = malloc (n * sizeof (int));
    for(int i = 0; i < n; i++)
    scanf("%d", &v[i]);
    free(v);
    return 0; 
}