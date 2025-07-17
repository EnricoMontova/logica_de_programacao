#include <iostream>

using namespace std;

int main()
{

    int x, y, z, menor;

    cout << "Digite o numero 1: " << endl;
    cin >> x;

    cout << "Digite o numero 2: " << endl;
    cin >> y;

    cout << "Digite o numero 3: " << endl;
    cin >> z;

    cout << "Os numeros escolhidos fora: " << x
         << ", " << y << " e " << z << endl;

    if(x < y && x < z)
    {
        menor = x;
    }
    else if(y < z)
    {
        menor = y;
    }
    else
    {
        menor = z;
    }

    cout << "O menor numero dos tres numeros eh o " << menor
         << endl;

    return 0;
}
