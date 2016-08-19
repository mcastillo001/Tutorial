#include <iostream>

using namespace std;

int numero;
int main()
{
    cout << "Ingrese un numero:.. ";
    cin >> numero;
    if (numero > 0)
    {
        cout << "El numero es positivo\n";
    }

    else if (numero < 0)
    {
        cout << "El numero es negativo \n";
    }
    else if (numero == 0)
    {
        cout << "El numero es cero (0) \n";
    }
    else
    {
        cout << "Segui instruccioes maje \n";
    }
}
