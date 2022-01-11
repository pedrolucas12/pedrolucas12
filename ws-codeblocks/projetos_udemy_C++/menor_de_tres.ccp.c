#include <bits/stdc++.h>

using namespace std;

int main()
{

    int valora, valorb, valorc, menor;

    cout << "Digite o primeiro valor : ";
    cin >> valora;

    cout << "Digite o segundo valor : ";
    cin >> valorb;

    cout << "Digite o terceiro valor : ";
    cin >> valorc;

    if (valora < valorb) && (valora < valorc)
    {
        valora = menor;
        else if (valorb < valora) && (valorb < valorc)
        {
            valorb = menor;
            else
            {
                valorc = menor;
            }
        }
    }

    cout << "O menor valor é : " << menor;

    return 0;
}
