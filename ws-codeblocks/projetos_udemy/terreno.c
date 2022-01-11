#include <stdio.h>

int main(){

int largura, comprimento, valor, area, preco ;

printf("Digite a largura do terreno: ");
scanf("%d", &largura);

printf("Digite o comprimento do terreno: ");
scanf("%d", &comprimento);

printf("Digite o valor do metro quadrado: : ");
scanf("%d", &valor);

area = largura * comprimento;
preco = area * valor;

printf("Area do terreno : ");
printf("%d \n", area);

printf("Preco do terreno : ");
printf("%d \n", preco);

return 0;
}
