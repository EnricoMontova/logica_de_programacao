#include <bits/stdc++.h>

using namespace std;

int main()
{
    double base, altura, area, perimetro, diagonal;

    cout << "Informe a base: ";
    cin >> base;

    cout << "BASE = " << base << endl;

    cout << "\nInforme a altura do retangulo: ";
    cin >> altura;

    cout << "ALTURA = " << altura << endl;

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));

    cout << fixed << setprecision(4);
    cout << "\nAREA = BASE * ALTURA = " << area << endl;
    cout << "PERIMETRO = 2 * (BASE + ALTURA) = " << perimetro << endl;
    cout << "DIAGONAL = SQRT(BASE ** 2 + ALTURA ** 2) = " << diagonal << endl;


    return 0;
}
