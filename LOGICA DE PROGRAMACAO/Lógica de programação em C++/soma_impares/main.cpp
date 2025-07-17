#include <iostream>

using namespace std;

int main()
{
    int x, y, troca, soma;

    cout << "Digite dois numeros: " << endl;
    cin >> x >> y;

    if(x > y){
        x = troca;
        x = y;
        y = troca;
    }

    soma = 0;
    for(int i = x + 1; i < y; i++){
        if(i % 2 != 0){
            soma = soma + i;
        }
    }

    cout << "A soma de todos os numeros impares entre " <<
         x << " e " << y << " eh de " << soma << endl;

    return 0;
}
