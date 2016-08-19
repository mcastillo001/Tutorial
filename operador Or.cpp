#include <iostream>

using namespace std;

/*
Igresar el turno de trabajo y las ventas y calcular la comision del empleado de acuerdo al turno
Turno     %comis
1,3          5%
4,2          2%
,otros       3%
*/

float ventas,comision;
int turno;
int main()
{
    cout << "Ingresar las ventas del mes..>";
    cin >> ventas;
    cout << "Turno de trabajo..>";
    cin >> turno;

    switch (turno)
    {
        case 1:
        case 3:
            comision = ventas * 0.05;
        break;
        case 4:
        case 2:
            comision = ventas * 0.04;
        break;
        default :
            comision = ventas * 0.03;
        break;
    }
    cout << "Comision es "<<comision ;
}
