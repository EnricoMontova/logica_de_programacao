#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, qtd_negativos;

    printf("Qual a ordem da matriz: ");
    scanf("%d", &N);

    int matriz[N][N];

    for(int linha = 0; linha < N; linha++){
        for(int coluna = 0; coluna < N; coluna++){
            printf("\nElemento[%d][%d]: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    printf("\nDIAGONAL PRINCIPAL:\n");
    for(int i = 0; i < N; i++){
        printf("%d, ", matriz[i][i]);
    }

    qtd_negativos = 0;
    printf("\nELEMENTOS NEGATIVOS:\n");
    for(int linha = 0; linha < N; linha++){
        for(int coluna = 0; coluna < N; coluna++){
                if(matriz[linha][coluna] < 0){
                    printf("%d ", matriz[linha][coluna]);
                    qtd_negativos++;
                }
        }
    }

    if(qtd_negativos == 0){
        printf("NAO CONSTA NA MATRIZ\n");
    } else {
        printf("\nQUANTIDADE DE NUMEROS NEGATIVOS: %d\n", qtd_negativos);
    }

    return 0;
}
