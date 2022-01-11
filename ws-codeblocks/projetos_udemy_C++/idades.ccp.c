#include <bits/stdc++.h>

using namespace std;

int main(){

int pessoa1, pessoa2, idade1, idade2, media;

cout << "Dados da primeira pessoa : ";
cout << "Nome : ";
cin >> pessoa1;

cout << "Idade : ";
cin >> idade1;

cout << "\n";

cout << "Dados da segunda pessoa : ";
cout << "Nome : ";
cin >> pessoa2;

cout << "Idade : ";
cin >> idade2;

media = ((idade1 + idade2) / 2);

cout << "Idade media é : " << media;

return 0;
}
