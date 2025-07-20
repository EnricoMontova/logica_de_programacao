#include <iostream>
#include <iomanip>
#include <climits>

using namespace std;

int main()
{
    int N, menor;
    double soma, media, porcentagem;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;

    string nome[N];
    int idade[N];
    double altura[N];

    for(int i = 0; i < N; i++){
        cout << "\nDados da " << i + 1 << "a pessoa: " << endl;

        cout << "\nNome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nome[i]);
        cout << "Idade: ";

        cin >> idade[i];
        cout << "Altura: ";
        cin >> altura[i];

        cout << "\nNOME " << i + 1 << "a PESSOA: " << nome[i];
        cout << "\nIDADE " << i + 1 << "a PESSOA: " << idade[i];
        cout << "\nALTURA " << i + 1 << "a PESSOA: " << altura[i];
        cout << endl;
    }

    soma = 0;
    for(int i = 0; i < N; i++){
        soma = altura[i] + soma;
    }
    media = soma / N;

    cout << "\nSOMA DAS ALTURAS: " << soma << endl;

    cout << fixed << setprecision(2);
    cout << "\nMEDIA DAS ALTURAS: " << media << endl;

    menor = 0;
    for(int i = 0; i < N; i++){
        if(idade[i] < 18){
            menor++;
        }
    }

    cout << "\nMENORES DE IDADE: " << menor << endl;
    for(int i = 0; i < N; i++){
        if(idade[i] < 18){
            cout << nome[i] << endl;
        }
    }

    return 0;
}
