#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nota1, nota2, notaFinal;

    printf("Nota 1: \n");
    scanf("%lf", &nota1);
    printf("Nota 2: \n");
    scanf("%lf", &nota2);

    notaFinal = nota1 + nota2;
    printf("NOTA FINAL: %.1lf\n", notaFinal);

    if(notaFinal < 6.0) {
        printf("RESULTADO: REPROVADO\n");
    } else {
        printf("RESULTADO: APROVADO\n");
    }

    return 0;
}
