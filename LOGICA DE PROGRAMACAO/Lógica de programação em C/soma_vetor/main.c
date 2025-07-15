#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, soma;
    double media;

    printf("Quantos numeros voce vai digitar: \n");
    scanf("%d", &N);

    int vet[N];

    for(int i = 0; i < N; i++){
        printf("Digite um numero: \n");
        scanf("%d", &vet[i]);
    }

    printf("NUMEROS NO VETOR: ");
    for(int i = 0; i < N; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    soma = 0;
    for(int i = 0; i < N; i++){
        soma = soma + vet[i];
    }

    media = (double)soma / N;

    printf("SOMA: %d\n", soma);
    printf("MEDIA: %.2lf", media);

    return 0;
}
