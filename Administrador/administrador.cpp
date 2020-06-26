#include <iostream>
#include <string.h>
#include <conio.h>
#include "administrador.h"

using namespace std;

Administrador *a = new Administrador;

Administrador::Administrador()
{
}

void Administrador::crearLogin()
{
    cout << "\t Ingrese Usuario: ";
    cin >> a->usuario;
    cout << "\t Ingrese Contrasenia: ";
    cin >> a->contrasenia;

    std::string usu = "administrador";
    std::string con = "123456789";
    int opc;

    if (a->usuario == usu && a->contrasenia == con)
    {
        cout << "\tIngreso Exitoso...!!!" << endl;
        getch();
        do
        {
            cout << "    *****************************" << endl;
            cout << "    *   Welcome Administrator   *" << endl;
            cout << "    *****************************" << endl;
            cout << "\n";
            getch();
            system("cls");
            cout << "\t Ingrese una opcion del menu(1-5)" << endl;
            cout << "\t 1. Agregar Nueva Especialidad" << endl;
            cout << "\t 2. Agregar Nuevo Doctor" << endl;
            cout << "\t 3. Salir" << endl;
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
                cout << "\tOpcion Incorrecta...!!! Try Again..." << endl;
                break;
            }
        } while (opc != 3);
    }
}

void Administrador::ingresoExitoso()
{
    
}