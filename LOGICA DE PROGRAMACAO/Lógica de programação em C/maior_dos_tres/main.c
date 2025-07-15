#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, menor;

    printf("Primeiro numero: ");
    scanf("%d", &a);
    printf("Segundo numero: ");
    scanf("%d", &b);
    printf("Terceiro numero: ");
    scanf("%d", &c);

    if(a < b && a < c){
        menor = a;
    } else if(b < a && b < c) {
        menor = b;
    } else {
        menor = c;
    }

    printf("O menor valor dos 3 numeros digitados: %d", menor);

    return 0;
}
