#include <stdio.h>
#define mult 2
#define menos 1
int main ()
{
    int l,c,tipo1,tipo2;
    scanf("%d %d", &l, &c);
    tipo1 = (l * c) + ((l-menos)*(c-menos));
    tipo2 = ((l-menos)*mult) + ((c-menos) *mult);
    printf("%i\n%i\n", tipo1, tipo2);
    return 0;
}
