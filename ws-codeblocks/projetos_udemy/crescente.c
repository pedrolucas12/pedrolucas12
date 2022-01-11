#include <stdio.h>

int main(){

int numero1, numero2;

printf("Digite dois numeros : ");
scanf("%d", &numero1);
scanf("%d", &numero2);

if (numero1 < numero2){
    printf("CRESCENTE !!! ");}
    else    {
        printf("DECRESCENTE!!!");}
}
