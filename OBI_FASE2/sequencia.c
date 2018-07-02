#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int comparar(const void * x, const void * y) {
   return ( *(int*)x - *(int*)y );
}

int main () {
    int teste,y,z;
    scanf("%d %d %d", &teste, &y, &z);
    int elem[teste];
    int marc[teste];
    int soma = 0;
    int q = 0;
    while (q < teste)
    {
        scanf("%d", &elem[q]);
        q++;
    }q = 0;
    while (q < teste)
    {
        scanf("%d", &marc[q]);
        if (marc[q] == 1)
            soma++;
        q++;
    }
    int novo[soma];
    q = 0;
    while (q < teste)
    {
        if (marc[q] == 1)
            novo[q] = elem[q];
        q++;
    }
    qsort(novo, soma, sizeof (int), comparar);
    int maior = INT_MIN;
    int simulado = 0, naoAchou = 1;
    q = y;
    while (q < z)
    {
        int i = soma - 1;
        int d = soma - q;
        while (i > d)
            simulado += novo[i];

        if(simulado < maior)
        {
            naoAchou = 0;
            printf("%d\n", maior);
            break;
        }
        maior = simulado;
        simulado = 0;
        q++;
    }
    if (naoAchou)
        printf("%d\n", maior);
    return(0);
}

