#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Digite dois valores: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    while(a != b){

        if(a < b){
            printf("CRESCENTE\n");
        } else {
            printf("DECRESCENTE\n");
        }

        printf("Digite outros dois valores: \n");
        scanf("%d", &a);
        scanf("%d", &b);
    }

    return 0;
}
