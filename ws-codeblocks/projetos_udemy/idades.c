#include <stdio.h>

int main(){

    int nome1, nome2, idade1, idade2, media;

    printf("Nome da primeira pessoa : ");
    scanf("%d", &nome1);

    printf("Digite a sua idade: ");
    scanf("%d", &idade1);

    printf("Nome da segunda pessoa : ");
    scanf("%d", &nome2);

    printf("Digite a sua idade: ");
    scanf("%d", &idade2);

    printf("Dados da primeira pessoa: ");
    printf("Nome > \n", nome1);
    printf("Idade > \n", idade1);
    printf("Dados da segunda pessoa: ");
    printf("Nome > \n", nome2);
    printf("Idade > \n", idade2);

    media = ((idade1 + idade2) / 2);

    printf("A idade media de %d e de %d é > %d", nome1, nome2, media);



return 0;
}
