#include <stdio.h>

int main(){
    int base, altura, area, perimetro, diagonal, lado1, lado2, lado3;

    printf("Digite a base do triangulo : ");
    scanf("%d", &base);

    printf("Digite a altura do triangulo : ");
    scanf("%d", &altura);

    printf("Digite os lados do triangulo : ");
    scanf("%d", &lado1);
    scanf("%d", &lado2);
    scanf("%d", &lado3);

    area = base * altura;
    perimetro = lado1 + lado2 + lado3;
    diagonal = base;

    printf("A area do triangulo é : ");
    printf("%d\n", area);

    printf("O perimetro do triangulo é : ");
    printf("%d\n", perimetro);

    printf("A diagonal do triangulo é : ");
    printf("%d\n", diagonal);



return 0;
}
