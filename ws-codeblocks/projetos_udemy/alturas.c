#include <stdio.h>

int main(){

int N, media, porcentagem, i, menores;
char menor;
int nome[N];
int idade[N];
int alt[N];

printf("Quantas pessoas irao ser digitadas : ");
scanf("%d", &N);

for(i=0;i<N;;i++){
    printf("Digite um nome : ");
    scanf("%d\n", &nome[i] );
    printf("Digite a idade : ");
    scanf("%d\n", &idade[i]);
    printf("Digite a altura : ");
    scanf("%d\n", &alt[i]);
}

if( idade[i] < 16){
    menores = menores + 1;
}

media = alt[i] / N;
porcentagem = menores / N;

if(idade[i] < 16 ){
    menor = nome[i];
}

do{
    printf("Pessoas com menos de 16 anos : ");
    printf("%d", porcentagem);
    printf("%c", menor);
}

return 0;
}
