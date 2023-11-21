#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    int n, m;
    printf("Ingeres el numero de filas:\n");
    scanf("%d", &n);
    printf("Ingeres el numero de columnas:\n");
    scanf("%d", &m);
    int Matrix[n][m];
    printf("La matriz es: \n");
    for (int i = 0; i < n; i++)
    {

        printf("\n");
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                Matrix[i][j] = 1;
            }
            else
            {
                Matrix[i][j] = 0;
            }
            printf("%d\t", Matrix[i][j]);
        }
    }

    return 0;
}