#include <iostream>
#include <string>
#include <conio.h>
#include "administrador.h"
#include <iostream>

#include "../Especialidad/especialidad.h"
#include "../Doctor/doctor.h" // dos puntos significa q salga de su directorio
#include "../Horario/horario.h"
#include "../Paciente/paciente.h"

using namespace std;

Administrador *a = new Administrador();
Especialidad *e = new Especialidad();
Doctor *d = new Doctor();
Horario *h = new Horario();
Paciente *p = new Paciente();

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
            cout << "\t 3. Agregar Nuevo Horario" << endl;
            cout << "\t 4. Modificar Paciente" << endl;
            cout << "\t 5. Modificar Especialidad" << endl;
            cout << "\t 6. Modificar Doctor" << endl;
            cout << "\t 7. Eliminar Paciente" << endl;
            cout << "\t 8. Eliminar Especialidad" << endl;
            cout << "\t 9. Eliminar Doctor" << endl;
            cout << "\t 10. Eliminar Horario" << endl;
            cout << "\t 11. Listar Pacientes" << endl;
            cout << "\t 12. Salir" << endl;
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
                p->modificarPaciente();
                break;
            }
            case 5:
            {
                e->modificarEspecialidad();
                break;
            }
            case 6:
            {
                d->modificarDoctor();
                break;
            }

            case 7:
            {
                p->eliminarPaciente();
                break;
            }
            case 8:
            {
                e->eliminarEspecialidad();
                break;
            }
            case 9:
            {
                d->eliminarDoctor();
                break;
            }
            case 10:
            {
                h->eliminarHorario();
                break;
            }
            case 11:
            {
                p->mostrarDatosPaciente();
                break;
            }
            case 12:
            {
                break;
            }
            default:
                cout << "\t Opcion Incorrecta...!!! Try Again..." << endl;
                break;
            }
        } while (opc != 12);
    }
}