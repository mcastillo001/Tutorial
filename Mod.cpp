#include <iostream>

using namespace std;
int num;
int main()
{
    cout << "Ingresar un numero .. >";
    cin >> num;

    if ((num % 2) == 0)
        cout <<"Numero Par";
    else
        cout << "Numero Impar";
    cout<<"\n";
}
