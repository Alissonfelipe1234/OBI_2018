#include <stdio.h>
#include <stdlib.h>

int comparar(const void * x, const void * y) {
    return ( *(int*)x - *(int*)y );
}

int main ()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int grafo[n][n];
    for (int limpa = 0; limpa < n; limpa++)
        for (int campo = 0; campo < n; campo++)
            grafo[limpa][campo] = 0;

    for(int i = 0; i < m; i++) {
        int u, v, c;
        scanf("%d %d %d", &u, &v, &c);
        u--, v--;
        grafo[u][v] = c;
    }
    int s; scanf("%d", &s); s--;
}

