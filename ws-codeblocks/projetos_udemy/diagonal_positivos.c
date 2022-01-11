#include <stdio.h>

int main(){

int mat[M][N];
int i, j, M, N, neg;

printf("Qual é a ordem da matriz : ");
scanf("%d", &mat[M][N]);

for(i=0;i<M;i++){
    for(j=0;j<N;j++){
        printf("ELEMENTO [ %d, %d ] : ", i, j);
        scanf("%d", &mat[i][j]);
    }
}

printf("Diagonal Principal : ");
if(i==0 & j==0){
    printf("%d", mat[i][j]);
}

if(mat[i][j] < 0){
    neg = neg + 1;
}
printf("Negativos : %d", neg);

return 0;
}
