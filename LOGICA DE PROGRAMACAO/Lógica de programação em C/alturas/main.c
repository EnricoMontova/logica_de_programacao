#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, nmenores;
    double soma, media, porcent_menores;

    printf("Quantas pessoas serao cadastradas: ");
    scanf("%d", &N);

    char nome[N][50];
    int idade[N];
    double altura[N];


    for(int i = 0; i < N; i++){
        printf("\nDADOS DA PESSOA %d: \n", i + 1);

        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(nome[i]);

        printf("Idade: ");
        scanf("%d", &idade[i]);

        printf("Altura: ");
        scanf("%lf", &altura[i]);

        printf("Nome: %s, Idade: %d, Altura: %.2lf\n", nome[i], idade[i], altura[i]);
    }

    soma = 0;
    for(int i = 0; i < N; i++){
        soma = soma + altura[i];
    }
    media = soma / N;

    printf("\nMEDIA DAS ALTURAS: %.2lf", media);

    nmenores = 0;
    for(int i =0; i < N; i++){
        if(idade[i] < 18){
            nmenores++;
        }
    }

    porcent_menores = nmenores * 100 / N;

    printf("\nNUMERO DE MENORES: %d", nmenores);
    printf("\nPORCENTAGEM DE MENORES: %.2lf", porcent_menores);
    printf("\nNOME DOS MENORES:\n");
    for(int i =0; i < N; i++){
        if(idade[i] < 18){
            printf("%s\n", nome[i]);
        }
    }

    return 0;
}
