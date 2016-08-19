#include <iostream>

using namespace std;

//Ingresar 2 numeros y determinar el numero mayor;
int n1,n2,mayor;

int main()
{
    cout <<"Ingresar numero #1..>";
    cin >> n1;

    cout << "Ingresar numero #2..>";
    cin >> n2;

    if (n1 > n2)
    {
        mayor = n1;
    }

    else
    {
        mayor = n2;
    }

    if (n1==n2)

    {
        cout <<"Los numeros son iguales \n";
    }
    else

    {
        cout <<"Numero mayor es "<<mayor<<"\n";
    }

}
