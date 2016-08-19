#include <iostream>

using namespace std;

int num,mayor,menor,troll;
char conti;
int main()
{
    do{
        do{
            cout<<"Ingresar numero mayor a 50 ";
            cin>>num;
        }while(num<50);
        if (c==0)
        {
            mayor=num;
            menor=num;
        }
        c++;
        if (num>mayor)
            mayor=num;
        if(num<menor)
            menor=num;
        do{
            cout<<"Desea continuar";
            cin>>conti;
            conti=toupper(conti);//Para pasar a mayuscula;
        }
    }while (conti!='N')

    cout<<"El numero mayor es "<<mayor<<"\n";
    cout<<"El numero menor es "<<menor<<"\n";

}
