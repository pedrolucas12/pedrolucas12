#include <stdio.h>

int main(){

int nota1, nota2, notaf;

printf("Digite a primeira nota : ");
scanf("%d", &nota1);

printf("Digite a segunda nota : ");
scanf("%d", &nota2);

notaf = ((nota1 + nota2) / 2);

printf("Nota final é >>>>");
printf("%d", notaf);

return 0;
}
