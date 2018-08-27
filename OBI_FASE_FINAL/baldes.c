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
        y--;
        if(oper == 1)
        {

        }
    }
}
