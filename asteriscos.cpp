#include <iostream>

using namespace std;

int n,i;
int main()
{
    cout <<"Ingrese cuantos asteriscos quiere..> ";
    cin >> i;
    for (i;i>0;i--)
    {

        for(n=i; n > 0 ; n--)
        {
            cout<< "*";
        }
        cout<< "\n";
    }
}
