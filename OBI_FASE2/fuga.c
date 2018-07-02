#include <stdio.h>
#include <stdlib.h>

int comparar(const void * x, const void * y) {
   return ( *(int*)x - *(int*)y );
}

int main ()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int entradaX, entradaY;
    scanf("%d %d", &entradaX, &entradaY);
    int saidaX, saidaY;
    scanf("%d %d", &saidaX, &saidaY);

    int possiveis = n * m - ((n-1) * (m/2));
    int t = (entradaX - saidaX);
    if (t < 0)
        t *= -1;
    possiveis -= t;
    printf("%d\n", possiveis);

    return (0);
}

