#include <stdio.h>

struct
{
        int a;
        int b;
        int ping;
}typedef cabo;

int main ()
{
    int qtdIlhas, qtdOticas, contador = 0, plano;
    scanf("%d %d", &qtdIlhas, &qtdOticas);
    int caminhos[qtdIlhas];
    cabo cabos[qtdOticas];
    for (;contador<qtdOticas; contador++)
    {
        scanf("%i %i %i", &cabos[contador].a, &cabos[contador].b, &cabos[contador].ping);
    }
    scanf("%i", &plano);
    for(contador = 0; contador<qtdIlhas-1; contador++)
    {
        if(contador != plano)
            caminhos[contador] = menorCaminho(plano, contador, &cabos, qtdOticas);
    }
    int menor = caminhos[0];
    int maior = caminhos[0];
    for (int x; x < qtdIlhas; x++)
    {
        if(x != plano)
        {
            if(caminhos[x]<menor)
                menor = caminhos[x];
            if(caminhos[x]>maior)
                maior = caminhos[x];
        }
    }
    printf("%i\n", maior - menor);
    return 0;
}
int menorCaminho(int desejo, int procurado, cabo* bd, int todos)
{
    int menor, encontrado;
    for (int r=0; r < todos; r++)
    {
        if (bd[r].a == procurado)
        {
            if(bd[r].b == desejo)
                return bd[r].ping;
            else
            {
                if(bd[r].ping < menor)
                {
                    menor = bd[r].ping;
                    encontrado = r;
                }
            }
        }
        if (bd[r].b == procurado)
        {
            if(bd[r].a == desejo)
                return bd[r].ping;
            else
            {
                if(bd[r].ping < menor)
                {
                    menor = bd[r].ping;
                    encontrado = r;
                }
            }
        }
    }
    menor += menorCaminho(encontrado, procurado, &bd, todos);
    return menor;
}
