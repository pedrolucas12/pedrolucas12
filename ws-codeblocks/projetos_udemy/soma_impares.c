#include <stdio.h>

int main(){

int numero1, numero2, soma, impar, impar2;

printf("Digite dois numeros : \n");
scanf("%d", &numero1);
scanf("%d", &numero2);

if ((numero1 % 2 != 0) && (numero2 % 2 != 0)) {
    impar = numero1;
    impar2 = numero2;
    soma = impar + impar2;
}

printf("Soma dos impares : \n %d", soma);

return 0;
}
