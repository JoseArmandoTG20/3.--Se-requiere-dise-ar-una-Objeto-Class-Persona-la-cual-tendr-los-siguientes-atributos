#include <iostream>

#include "Persona.h"

using namespace std;

int main()
{
    int op = 0;
    int usu = 0;
    int a = 0;
    bool sis = true;

    Persona p0[10];

    while(sis == true)
    {
        cout << "+------------[MENU]------------+" << endl;
        cout << "| 1.- Registrar Nueva Persona. |" << endl;
        cout << "| 2.- Calcular IMC.            |" << endl;
        cout << "| 3.- Ver datos de la Persona. |" << endl;
        cout << "+------------------------------+" << endl;
        cout << "Que opcion desea realizar?:";
        cin >> op;

        switch(op)
        {
            case 1:
                p0[usu].registro();
                cout << "Usuario:" << usu << endl;
                usu ++;
            break;

            case 2:
                cout << "-----[IMC]-----" << endl;
                cout << "Ingresa el Numero de Usuario:";
                cin >> a;
                p0[a].imc();
            break;

            case 3:
                cout << "-----[INFORMACION]-----" << endl;
                cout << "Ingresa el Numero de Usuario:";
                cin >> a;
                p0[a].mayored();
                p0[a].toString();
            break;

            default:
                sis = false;
            break;
        }
    }
    return 0;
}
