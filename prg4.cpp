#include <iostream>

using namespace std;

//Ingresar un numero y determinar el numer de cifras
/*
    1 cifra
    2 cifras
    3 cifras
    4 cifras o mas
*/


int num,a1;
int main()
{
    cout << "Ingrese un numero:.." ;
    cin >> num;

    if (num < 0)
        num*= -1;

    if ((num >= 1) && (num <=9))
        cout << "El numero tiene 1 cifra \n";
    else if ((num >= 10) && (num <=99))
        cout << "El numero tiene 2 cifra \n";
    else if ((num >= 100) && (num <=999))
        cout << "El numero tiene 3 cifra \n";
    else
        cout << "El numero tiene 4 cifras o mas \n";



}
