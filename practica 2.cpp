#include <iostream>

using namespace std;

int num,sum,contar,prom;
char conti;
int main()
{
    do{
        do{
        cout<<"Ingrese numero divisble entre 5 y mayores a 100...; ";
        cin >>num;
        }while(!(num%5==0 and num>100));
        sum+=num;
        do{
        cout<<"Desea continuar <Si = s> o <No = n>";
        cin >>conti;
        }while (conti!='s' && conti!='n');
        contar++;
    }while (conti!='n');
    prom=sum/contar;
    cout<<"\n\n\n";
    cout<<"La suma de los "<<contar<<" numeritos ingresados es de "<<sum<<"\n";
    cout<<"El promedio de los numeritos es "<<prom<<"\n";
}

