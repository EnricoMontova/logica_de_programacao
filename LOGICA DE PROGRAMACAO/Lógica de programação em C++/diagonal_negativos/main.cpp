#include <iostream>

using namespace std;

int main()
{
    int N, negativos;
    cout << "ORDEM DA MATRIZ: ";
    cin >> N;

    cout << endl;

    int mat[N][N];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << "Elemento[" << i << "][" << j << "]: ";
            cin >> mat[i][j];
        }
    }

    negativos = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(mat[i][j] < 0){
                negativos++;
            }
        }
    }
    cout << "\nNUMEROS NEGATIVOS DA MATRIZ: " << negativos << endl;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(mat[i][j] < 0){
                cout << mat[i][j] << endl;
            }
        }
    }

    return 0;
}
