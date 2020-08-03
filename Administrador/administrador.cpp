#include <iostream>
#include <string>
#include <conio.h>
#include "administrador.h"
#include <iostream>

#include "../Especialidad/especialidad.h"
#include "../Doctor/doctor.h"// dos puntos significa q salga de su directorio
#include "../Horario/horario.h"

using namespace std;

Administrador *a = new Administrador();
Especialidad *e = new Especialidad();
Doctor *d = new Doctor();
Horario *h = new Horario();

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
        cout << "\t Ingreso Exitoso...!!!(Enter)" << endl;
        getch();
        system("cls");
        do
        {
            cout << "\t *****************************" << endl;
            cout << "\t *   Welcome Administrator   *" << endl;
            cout << "\t *****************************" << endl;
            cout << "\n"; 
            cout << "\t Ingrese una opcion del menu(1-3)" << endl;
            cout << "\t 1. Agregar Nueva Especialidad" << endl;
            cout << "\t 2. Agregar Nuevo Doctor" << endl;
            cout << "\t 3. Agregar Nuevo Horario" <<endl;
            cout << "\t 4. Salir" << endl;
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
                h->crearHorario();    
                break;
            }
            case 4:
            {
                break;
            }

            default:
                cout << "\t Opcion Incorrecta...!!! Try Again..." << endl;
                break;
            }
        } while (opc != 4);
    }
}
