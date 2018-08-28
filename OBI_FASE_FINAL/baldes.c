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
                register menor = baldes[x][0], maior = baldes[x][0], menorIndex[2] = {x,0}, maiorIndex[2] = {x,0},  menoranterior[2] = {x,0}, maioranterior[2] = {x,0};
                for (register int g = x; g<y; i++)
                {
                    for(register int f = 0; f < quantasBolas[g]; f++)
                    {
                        if (menor > baldes[g][f])
                        {
                            menoranterior[0] = menorIndex[0];
                            menoranterior[1] = menorIndex[1];
                            menor = baldes[g][f];
                            menorIndex[0] = g;
                            menorIndex[1] = f;
                        }
                        if (baldes[menoranterior[0]][menoranterior[1]] > baldes[g][f])
                        {
                            menoranterior[0] = g;
                            menoranterior[1] = f;
                        }
                        if (maior < baldes[g][f])
                        {
                            maioranterior[0] = maiorIndex[0];
                            maioranterior[1] = maiorIndex[1];
                            menor = baldes[g][f];
                            menorIndex[0] = g;
                            menorIndex[1] = f;
                        }                        
                        if (baldes[maioranterior[0]][maioranterior[1]] < baldes[g][f])
                        {
                            menoranterior[0] = g;
                            menoranterior[1] = f;
                        }
                    }
                }
                if (maiorIndex[0] != menorIndex[0])
                    printf("%i\n", maior - menor);                
                else
                {
                    if((menor - baldes[maioranterior[0]][maioranterior[1]]) > baldes[menoranterior[0]][menoranterior[1]] - maior)
                        printf("%i\n", menor - baldes[maioranterior[0]][maioranterior[1]]);
                    else
                        printf("%i\n", baldes[menoranterior[0]][menoranterior[1]] - maior);
                }
            }
        }
    }
}
