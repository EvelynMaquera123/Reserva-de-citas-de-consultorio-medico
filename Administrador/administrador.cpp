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
//        getch();
        system("cls");
        do
        {
            cout << "\t *****************************" << endl;
            cout << "\t *   Welcome Administrator   *" << endl;
            cout << "\t *****************************" << endl;
            cout << "\n"; 
            cout << "\t Ingrese una opcion del menu(1-10)" << endl;
            cout << "\t 1. Agregar Nueva Especialidad" << endl;
            cout << "\t 2. Agregar Nuevo Doctor" << endl;
            cout << "\t 3. Agregar Nuevo Horario" <<endl;
            cout << "\t 4. Modificar Especialidad" << endl;
            cout << "\t 5. Modificar Doctor" << endl;
            cout << "\t 6. Modificar Horario" << endl;
            cout << "\t 7. Eliminar Especialidad" << endl;
            cout << "\t 8. Eliminar Doctor" << endl;
            cout << "\t 9. Eliminar Horario" << endl;
            cout << "\t 10. Salir" <<endl;
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
                e->modificarEspecialidad();
                break;
            }
            case 5:
            {
                d->modificarDoctor();
                break;
            }
            case 6:
            {
                h->modificar();
                break;
            }
            case 7:
            {
                e->eliminarEspecialidad();
                break;
            }
            case 8:
            {
                d->eliminarDoctor();
                break;
            }
            case 9:
            {
                h->eliminarHorario();
                break;
            }
            case 10:
            {
                break;
            }
            default:
                cout << "\t Opcion Incorrecta...!!! Try Again..." << endl;
                break;
            }
        } while (opc != 10);
    }
}