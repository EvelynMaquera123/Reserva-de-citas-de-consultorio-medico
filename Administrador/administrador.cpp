#include <iostream>
#include <string.h>
#include <conio.h>
#include "administrador.h"

using namespace std;

Administrador::Administrador()
{
}

void Administrador::crearLogin()
{
    cout << "\t Ingrese Usuario: ";
    cin >> usuario;
    cout << "\t Ingrese Contrasenia: ";
    cin >> contrasenia;
}

void Administrador::ingresoExitoso()
{
    std::string usu = "administrador";
    std::string con = "123456789";
    int opc;

    if (usuario == usu && contrasenia == con)
    {
        cout << "Ingreso Exitoso...!!!" << endl;
        getch();
        do
        {
            cout << "    *****************************" << endl;
            cout << "    *   Welcome Administrator   *" << endl;
            cout << "    *****************************" << endl;
            cout << "\n";
            getch();
            system("cls");
            cout << " Ingrese una opcion del menu(1-5)" << endl;
            cout << " 1. Agregar Nueva Especialidad" << endl;
            cout << " 2. Agregar Nuevo Doctor" << endl;
            cout << " 3. Salir" << endl;
            cin >> opc;
            switch (opc)
            {
            case 1:
                /* code */
                break;
            case 2:
                /* code */
                break;
            case 3:
                break;
            default:
                cout << "Opcion Incorrecta...!!! Try Again..." << endl;
                break;
            }
        } while (opc != 3);
    }
}