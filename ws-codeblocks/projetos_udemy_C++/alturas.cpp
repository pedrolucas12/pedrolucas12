#include <bits/stdc++.h>

using namespace std;

int main()
{

int N, i, menor, menores, media, porcentagem;
char pessoa[i];
int idade[i];
int altura[i];
char nome[i];

cout("Quantos numeros serao digitados ? ");
cin(N);

for(i=0; i<N; i++){
    cout("Digite o nome da pessoa : ");
    cin(pessoa[i]);
    cout("Digite a idade da pessoa : ");
    cin(idade[i]);
    cout("Digite a altura da pessoa : ");
    cin(altura[i]);
}

for(i=0; i<N; i++){
    cout("Dados da pessoa : ");
    cout("Pessoa \n", <<pessoa[i]);
    cout("Idade \n", <<idade[i]);
    cout("Altura \n", <<altura[i]);
}

if(idade[i] < 16){
    menor = menor + 1;
    nome[i] = menores;
}

char pessoa[i];
int idade[i];
int altura[i];
char nome[i];

media = altura[i] / N;
porcentagem = menor / N;

cout("Altura media : ", <<media);
cout("Pesssoas com menos de 16 anos : ", << porcentagem, menor);







return 0;
}
