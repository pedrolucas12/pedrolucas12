#include <bits/stdc++.h>

using namespace std;

int main()
{

    int base, altura, area, perimetro, diagonal;

    cout << "Digite a base do retangulo : \n";
    cin >> base;

    cout << "Digite a altura do retangulo : \n";
    cin >> altura;

    area = base * altura;

    perimetro = ((2 * base) + (2 * altura));

    diagonal = ( 2 * (altura ^1/2));

    cout << "\n";
    cout << "Area > " << area;
    cout << "\n";
    cout << "Perimetro > " <<perimetro;
    cout << "\n";
    cout << "Diagonal > " << diagonal;
    cout << "\n";

    return 0;
}
