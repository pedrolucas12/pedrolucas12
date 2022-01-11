int main(){
    int a, b , c , x1, x2, bhaskara;

    printf("Digite o coeficiente 'A' : ");
    scanf("%d", &a);

    printf("Digite o coeficiente 'B' : ");
    scanf("%d", &b);

    printf("Digite o coeficiente 'C' : ");
    scanf("%d", &c);

    bhaskara = (((b)*(b))-(4)*(a)*(c));
    x1 = (((-b)+bhaskara)/2 * a);
    x2 = (((-b)-bhaskara)/2 * a);

    printf("Bhaskara : %d ", bhaskara);

        if (bhaskara > 0) {
            printf("Valor de X1 :  %d ", x1);
            printf("Valor de X2 : %d ", x2);
        }
        else if (bhaskara = 0) {
            printf("Valor de X : %d ", x1);
        }
        else{
            printf("Nao existem valores reais para X");
        }

return 0;
}


