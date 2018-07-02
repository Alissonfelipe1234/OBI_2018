#include <stdio.h>
#define zera 0
int main ()
{
    int total,numCarimbadas, numCompradas;
    int contador = zera, encontradas = zera;
    scanf("%d %d %d", &total, &numCarimbadas, &numCompradas);
    int carimbadas[numCarimbadas];
    while (contador < numCarimbadas)
    {
        scanf("%i", &carimbadas[contador]);
        contador++;
    }

    contador = zera;
    int compradas[numCompradas];
    while (contador < numCompradas)
    {
        scanf("%i", &compradas[contador]);
        contador++;
    }
    contador = zera;
    while (encontradas!=numCarimbadas && contador < numCompradas)
    {
        if(existeAi(carimbadas[contador], &compradas, numCompradas))
        {
            encontradas++;
        }
        contador++;
    }
    contador = numCarimbadas - encontradas;
    printf("%i\n", contador);

    return 0;
}
int existeAi (int procurada, int* possiveis, int limite)
{
    int i = zera;
    while (i < limite)
    {
        if(procurada == possiveis[i])
            return 1;
        i++;
    }
    return zera;
}
