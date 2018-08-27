#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[8], repetidos=0;
    for (int i=0; i < 8; i++)
        scanf("%d", &numeros[i]);
    for (int q=0; q < 8; q++)
    {
        repetidos=0;
        for (int u=0; u<8; u++)
            if (numeros[q] == numeros[u])
                repetidos++;
        if(repetidos>4)
        {
            printf("N");
            exit(0);
        }
    }
    printf("S");
}
