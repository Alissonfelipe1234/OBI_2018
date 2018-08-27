#include <stdio.h>
#include <stdlib.h>

//usando macros de C

int main ()
{
    printf("\nLinha de compilação: %d",  __LINE__);
    printf("\nNome do arquivo: %s", __FILE__);
    printf("\nHora: %s", __TIME__);
    printf("\nData: %s",  __DATE__);
    printf("\nMacro 1 : %s",  __STDC__);
}

