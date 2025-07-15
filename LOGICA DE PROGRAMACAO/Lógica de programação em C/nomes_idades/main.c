#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome1[50], nome2[50];
    int idade1, idade2;
    double media;

    printf("Dados pessoa 1\n");
    printf("Nome: \n");
    gets(nome1);
    printf("Idade: \n");
    scanf("%d", &idade1);

    printf("Dados pessoa 2\n");
    printf("Nome: \n");
    fseek(stdin, 0, SEEK_END);
    gets(nome2);
    printf("Idade: \n");
    scanf("%d", &idade2);

    media = (idade1 + idade2) / 2;

    printf("A idade media de %s e %s e de %.1lf", nome1, nome2, media);

    return 0;
}
