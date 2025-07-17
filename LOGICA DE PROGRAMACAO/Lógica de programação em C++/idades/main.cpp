#include <iostream>
#include <climits>

using namespace std;

int main()
{
    string nome1, nome2;
    int idade1, idade2;
    float media;

    cout << "Informe o nome da 1a pessoa: ";
    getline(cin, nome1);

    cout << "Informe a idade da 1a pessoa: ";
    cin >> idade1;

    cout << "Informe o nome da 2a pessoa: ";
    cin.ignore(INT_MAX, '\n');
    getline(cin, nome2);

    cout << "Informe a idade da 2a pessoa: ";
    cin >> idade2;

    media = (float)idade1 + idade2 / 2;

    cout << "\nA media de idades entre " << nome1 << " e "
        << nome2 << " eh de " << media << endl;

    return 0;
}
