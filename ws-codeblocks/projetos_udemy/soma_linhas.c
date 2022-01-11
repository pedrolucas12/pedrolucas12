#include <stdio.h>

int main(){

int M, N, j, i;
int matL[i];
int matC[i];
int soma[i][j];

printf("Qual é a quantidade de linhas da matriz ? ");
scanf("%d", &M);

printf("Qual é a quantidade de colunas da matriz ? ");
scanf("%d", &N);

for(i=0;i<M;i++){
    printf("Digite os elementos da %d linha> ", i);
    scanf("%d", &matL[i]);
    for(j=0; j<N; j++){
        printf("Digite os elementos da %d coluna> ", j);
        scanf("%d", &matC[j]);
    }
}
for(i=0;i<M;i++){
    for(j=0;j<N;j++){
        soma[i][j] = matL[i] + matC[j];
    }
}

printf("VETOR GERADO ");
printf("%d", soma[i][j]);

return 0;
}
