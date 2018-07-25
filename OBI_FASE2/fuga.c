#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int entradaX, entradaY;
    scanf("%d %d", &entradaX, &entradaY);
    int saidaX, saidaY;
    scanf("%d %d", &saidaX, &saidaY);

    register int possiveis = n * m - ((n-1) * (m/2));
    register int t;
    if((entradaX == 1 && entradaY == n) || (entradaX == m && entradaY == 1)) && ((entradaX == 1 && entradaY == n) || (entradaX == m && entradaY == 1)) &&
        ((saidaX == 1 && saidaY == n) || (saidaX == m && saidaY == 1)) && ((saidaX == 1 && saidaY == n) || (saidaX == m && saidaY == 1))
        t = 0;
    else
        t = (entradaX - saidaX);

    if (t < 0)
        t *= -1;
    possiveis -= t;
    printf("%d\n", possiveis);

    return (0);
}

