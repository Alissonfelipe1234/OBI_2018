#include <stdlib.h>
#include <stdio.h>

int com (int* a, int* b)
{
    return (*(int*)a - *(int*)b);
}
int main()
{
    int participantes, maior, menor;

    scanf("%d %d %d", &participantes, &menor, &maior);
    int numeros[participantes], pontos[participantes];
    for (register int i = 0; i < participantes; i++)
    {
        scanf("%d", &numeros[i]);
    }
    register int melhorPess = 0;
    for (register int i = menor; i <= maior; i++)
    {
        register int d = 6666, s;
        for (register int j = 0; j < participantes; j++)
        {
            s =  i - numeros[j];
            if (s < 0)
                s *= -1;
            if(s < d)
                d=s;
        }
        if (d > melhorPess)
            melhorPess = d;
    }
    printf("%d", melhorPess);
}
