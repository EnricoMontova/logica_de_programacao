#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, quantidade, soma;
    double media;

    printf("Digite as idades:\n");
    scanf("%d", &idade);

    soma = 0;
    quantidade = 0;

    while(idade >= 0){
        soma = soma + idade;
        quantidade = quantidade + 1;
        scanf("%d", &idade);
    }

    if(quantidade == 0){
        printf("Impossivel calcular");
    } else {
        media = (double)soma / quantidade;

        printf("MEDIA DE IDADES: %.2lf", media);
    }

    return 0;
}
