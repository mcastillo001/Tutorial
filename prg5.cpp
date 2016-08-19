#include <iostream>

using namespace std;

/*
    Ingresar la nota del alumo y escribir la observacion
    1-59 Reprobado
    60-80 Bueno
    81-89 Muy bueno
    91-100 sobresaliente
    */
int nota;
int main()
{
    cout << "Ingrese la nota del alumno";
    cin >> nota;
    if ((nota>=1) and (nota <=59))
        cout << "Reprovado :V \n";
    else if ((nota>=60) and (nota <=80))
        cout << "Aprovado por los pelos ;c \n";
    else if ( (nota>=81) and (nota <=90) )
        cout << "Good Job \n";
    else if ( (nota>=91) and (nota <=100) )
        cout << "Sobresaliente \n";
    else
        cout <<"Nota incorrecta \n";

}
