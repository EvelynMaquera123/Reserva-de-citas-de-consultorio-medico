#include <iostream>
#include <string>
#include <conio.h>
#include "administrador.h"
#include <iostream>
#include <chrono>
#include <ctime>
#include "../Especialidad/especialidad.h"
#include "../Doctor/doctor.h"// dos puntos significa q salga de su directorio

using namespace std;

Administrador *a = new Administrador();
Especialidad *e = new Especialidad();
Doctor *d = new Doctor();

Administrador::Administrador()
{
    usuario = "admin";
    contrasenia = "1234";
}
void Administrador::login()
{
    string usu;
    string contra;
    cout << "\t Ingrese Usuario: ";
    cin >> usu;
    cout << "\t Ingrese Contrasenia: ";
    cin >> contra;

    int opc;
    if (a->usuario == usu && a->contrasenia == contra)
    {
        cout << "\tIngreso Exitoso...!!!" << endl;

        // getch();
        do
        {
            cout << "    *****************************" << endl;
            cout << "    *   Welcome Administrator   *" << endl;
            cout << "    *****************************" << endl;
            cout << "\n";
            // getch();
            //  system("cls"); 
            cout << "\t Ingrese una opcion del menu(1-3)" << endl;
            cout << "\t 1. Agregar Nueva Especialidad" << endl;
            cout << "\t 2. Agregar Nuevo Doctor" << endl;
            cout << "\t 3. Salir" << endl;
            cin >> opc;

            switch (opc)
            {
            case 1:
            {
                e->crearEspecialidad();
                break;
            }

            case 2:
            {
                d->crearDoctor();
                break;
            }

            case 3:
            {

                break;
            }

            default:
                cout << "\tOpcion Incorrecta...!!! Try Again..." << endl;
                break;
            }
        } while (opc != 3);
    }
}