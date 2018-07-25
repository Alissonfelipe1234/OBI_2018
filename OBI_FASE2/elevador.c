#include <stdio.h>
#include <stdlib.h>

int comparar(const void * x, const void * y) {
   return ( *(int*)x - *(int*)y );
}

int main ()
{
    int n, x;
    scanf("%d", &n);
    n++;
    int pesos[n];
    pesos[0] = 0;
    for (x = 1; x < n; x++)
        scanf("%d", &pesos[x]);

    qsort(pesos, n, sizeof (int), comparar);
    register int possivel = 1;
    for (x = 0; x < n - 1; x++)
    {
        if(pesos[x + 1] - pesos[x] > 8)
        {
            possivel = 0;
            printf("N\n");
            break;
        }
    }

    if (possivel)
        printf("S\n");

    return 0;
}