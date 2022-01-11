#include <stdio.h>

int main(){

int valor1, valor2, valor3, menor;

printf("Digite o primeiro valor: ");
scanf("%d", &valor1);

printf("Digite o segundo valor : ");
scanf("%d", &valor2);

printf("Digite o terceiro valor : ");
scanf("%d", &valor3);

if ((valor1< valor2) && (valor1 < valor3)){
    valor1 = &menor;
    }else if((valor2 < valor1) && (valor2 < valor3)){
        valor2 = &menor;
        }else{
            valor3 = &menor;
        }

printf("O menor dos tres valores é %d", menor);

return 0;
}
