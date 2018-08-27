#include <stdlib.h>
#include <stdio.h>

int main() {
    int qtd;
    scanf("%d", &qtd);
    int num[qtd], p=0, i=0;
    while (i<qtd)
    {
        scanf("%i", &num[i]);
        if(num[i]==0 || num[i]==5)
        {
            p=1;
        }
        i++;
    }
    if(p==0)
    {
        printf("-1");
        exit(0);
    }
    if(num[qtd-1] < 5)
    {
        for (register int i = 0; i < qtd-1; i++)
        {
            if(num[i] == 0)
            {
                num[i] = num[qtd-1];
                num[qtd-1] = 0;
                for(register int d = 0; d < qtd; d++)
                    printf("%d", num[d]);

                exit(0);
            }
        }
        for (register int i = qtd-1; i > 0; i--)
        {
            if(num[i] == 5)
            {
                int aux = num[i];
                num[i] = num[qtd-1];
                num[qtd-1] = aux;
                for(register int d = 0; d < qtd; d++)
                    printf("%d", num[d]);

                exit(0);
            }
        }
    }
    for (register int i = 0; i < qtd-1; i++)
        {
            if(num[i] == 0 || num[i] == 5)
            {
                int aux = num[i];
                num[i] = num[qtd-1];
                num[qtd-1] = aux;
                for(register int d = 0; d < qtd; d++)
                    printf("%d", num[d]);

                exit(0);
            }
        }


}
