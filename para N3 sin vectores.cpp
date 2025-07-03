#include <iostream>
using namespace std;

const int N=3;

void warshall(int A[N][N]) {
    for (int k=0; k<N;k++){
        for (int i=0; i<N; i++){
            for (int j=0; j<N; j++){
                if (A[i][j]==0){
                	A[i][j] =A[i][k] && A[k][j];
				}       
            }
        }
    }
}

void imprimirMatriz(int A[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }
}

int main() {
    int A[N][N] = {
        {0, 1, 0},
        {0, 0, 1},
        {0, 0, 0}
    };
    cout<<"Matriz ANTES del algoritmo WARSHALL:\n";
	imprimirMatriz(A);
    warshall(A);
    cout<<"\nMatriz DESPUES del algoritmo WARSHALL:\n";
    imprimirMatriz(A);

    return 0;
}
