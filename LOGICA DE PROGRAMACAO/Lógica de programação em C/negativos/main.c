#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;

    printf("Quantos numeros voce vai digitar? \n");
    scanf("%d", &N);

    int vetor[N];

    for(int i = 0; i < N; i++){
        printf("Digite um número: \n");
        scanf("%d", &vetor[i]);
    }

    printf("\nNUMEROS NEGATIVOS\n");

    for(int i = 0; i < N; i++){
        if(vetor[i] < 0){
            printf("%d\n", vetor[i]);
        }
    }

    return 0;
}
