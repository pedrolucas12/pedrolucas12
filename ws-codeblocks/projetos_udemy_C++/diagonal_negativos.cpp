#include <bits/stdc++.h>

using namespace std;

int main()
{

int M, N, i, j, negativos, cont;

cout << ("Digite quantas linhas vai ter a matriz : ");
cin >> (M);
cout << ("Digite quantas colunas vai ter a matriz : ");
cin >> (N);

int mat[M][N];

for(i=0; i<M; i++){
    for(j=0; j<N; j++){
        cout << "Elemento : [ " << i << " , " << j << " ] : " ;
        cin >> mat[i][j];
    }
}

cout << "Diagonal principal : ";
for(int i = 0; i < N; i++){
   cout << mat[i][i] << " ";
}

for(i=0; i<M; i++){
    for(j=0; j<N; j++){
            if (mat[i][j] < 0){
                cont = cont + 1;
            }
    }
}

cout << "\n";
cout << "Quantidade de negativos : " << cont << "\n";

return 0;
}
