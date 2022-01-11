#include <stdio.h>

int main(){

int N, valores, soma, media, i;
int vet[N];

printf("Quantos numeros voce vai digitar? ");
scanf("%d", &N);

for(i = 0; i < N; i++){
    printf("Digite um numero: ");
    scanf("%d", &vet[N]);
}

soma = vet[N] * N;
media = (vet[N] / N);

printf("VALORES > \n ");
printf("%d", vet[N]);

printf("SOMA > \n ");
printf("%d", soma);

printf("MEDIA > \n");
printf("%d", media);

return 0;
}
