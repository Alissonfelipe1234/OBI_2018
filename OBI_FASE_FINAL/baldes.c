#include  <stdio.h>
#include <stdlib.h>
int main()
{
    int qBaldes, operacoes;

    scanf("%d %d", &qBaldes, &operacoes);
    int baldes[qBaldes][operacoes];
    int quantasBolas[qBaldes];
    int i, oper, x, y;
    for (i = 0; i < qBaldes; i++)
    {
        scanf("%d", &baldes[i][0]);
        quantasBolas[i] = 1;
    }
    for (i = 0; i < operacoes; i++)
    {
        scanf("%d %d %d", &oper, x, y);        
        if(oper == 1)
        {
            y--;
            baldes[y][quantasBolas[y]] = x;
            quantasBolas[y]++;
        }
        else
        {
            if(x < y)
            {
                x--;
                register menor = baldes[x][0], maior = baldes[x][0], menorIndex[2] = {x,0}, maiorIndex[2] = {x,0};
                for (register int g = x; g<y; i++)
                {
                    for(register int f = 0; f < quantasBolas[g]; f++)
                    {
                        if (menor > baldes[g][f])
                        {
                            menor = baldes[g][f];
                            menorIndex[0] = g;
                            menorIndex[1] = f;
                        }
                        if (maior < baldes[g][f])
                        {
                            menor = baldes[g][f];
                            menorIndex[0] = g;
                            menorIndex[1] = f;
                        }
                    }
                }
                printf("%i\n", maior - menor);                
            }
        }
    }
}
