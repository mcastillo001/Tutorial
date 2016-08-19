#include <iostream>

using namespace std;

int num = 0, cont = 0, var= 0;
float prom = 0;
int mayor,menor;
int main()
{
  while ( cont != 10)
  {
    cout << "Ingrese un numero \n";
    cin >> num;

        if  ( (num % 5)== 0 )
        {
            var ++;
            prom = prom + num;
        }
    if (cont == 0)
    {
        menor = num;
        mayor = num;
    }
    cont++;
    if( num > mayor)
        mayor = num;
    if (num < menor)
        menor = num;

  }
    prom = prom / var;
    if (var == 0)
        prom = 0;

    cout <<"Se encontraron " << var<<" divisibles entre 5 y su promedio es "<<prom;
    cout <<"\n El numero mayor encontrado es " <<mayor<<" el menor es "<<menor;
}
