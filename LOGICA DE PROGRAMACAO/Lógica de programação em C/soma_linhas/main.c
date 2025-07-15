#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    printf("Quantidade de linhas da matriz: ");
    scanf("%d", &x);

    printf("\nQuantidade de colunas da matriz: ");
    scanf("%d", &y);

    double mat[x][y];
    double vet[x];

    for(int i = 0; i < x; i++){
        printf("\nDigite os elementos da %da linha:\n", i + 1);
        for(int j = 0; j < y; j++){
            scanf("%lf", &mat[i][j]);
        }
    }

    printf("\nMATRIZ GERADA:\n");
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            printf("mat[%d][%d]: %.1lf\n", i, j, mat[i][j]);
        }
    }


    for(int i = 0; i < x; i++){
        vet[i] = 0;
        for(int j = 0; j < y; j++){
            vet[i] = vet[i] + mat[i][j];
        }
    }

    printf("\nGerando vetor de soma das linhas...");
    printf("\nVETOR GERADO:\n");
    for(int i = 0; i < x; i++){
        printf("vet[%d]: %.1lf\n", i, vet[i]);
    }
    return 0;
}
