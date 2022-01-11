#include <bits/stdc++.h>

using namespace std;

int main()
{

int numeroum, numerodois, impar, impardois, soma;

cout("Digite o primeiro numero: ");
cin(numeroum);

cout("Digite o segundo numero : ");
cin(numerodois);

if (numeroum % 2 != 0){
    impar = numeroum;
}

if (numerodois % 2 != 0){
    impardois = numerodois;
}

soma = impar + impardois;

cout("SOMA DOS IMPARES \n" <<soma);





return 0;
}
