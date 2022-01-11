#include <stdio.h>

int main(){

int N, media;
int idades[N];

printf("Digite quantas idades voce vai digitar : ");
scanf("%d", &N);

for(i = 0; i < N; i++){
    printf("Digite a idade : ");
    scanf("%d", &idades[N]);
}

media = (idades[N] / N );

printf("A media é : ");
printf("%d", media);

return 0;
}
