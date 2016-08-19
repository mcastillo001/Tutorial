#include <iostream>

using namespace std;

int num, cont=1,numa;
int main()
{
    cout << "Ingresar un numero .. >";
    cin >> num;
   while (num >= 10)
   {
       numa = (numa*10) +(num%10);
       num = num / 10;
       cont++;
   }
   numa= (numa*10)+num;
    cout << "Numero de cifras es "<< cont<<" y al revez es "<< numa;
}
