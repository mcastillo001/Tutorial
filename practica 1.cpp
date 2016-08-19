#include <iostream>

using namespace std;

int i,num;
int main()
{
        for (i=0;i<5;i++)
        {
            do{
                cout <<"Ingresar un numero 50-100   ";
                cin >>num;
            }while (!(num>=50 && num<=100));
            cout<<"Numero ingresado correcto!!!!\n";
        }
}
