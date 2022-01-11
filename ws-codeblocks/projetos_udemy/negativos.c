#include <stdio.h>

int main(){

int N, i, numero;
int vet[N];

printf("Digite quantos numeros irao ser digitados : \n");
scanf("%d", &N);

for(i=0; i<N; i++){
    printf("Digite um numero : ");
    scanf("%d", &vet[i]);
}

do{
    printf("NUMEROS NEGATIVOS !! ");
    printf("%d", vet[i]);
}while(vet[i] < 0);


return 0;
}
