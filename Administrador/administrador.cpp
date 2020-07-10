#include <iostream>
#include <string>
#include <conio.h>
#include "administrador.h"
//#include "especialidad.h"
//#include "doctor.h"
//#include "paciente.h"
#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;

Administrador *a = new Administrador;
<<<<<<< HEAD

Administrador::Administrador()
{
    usuario = "administrador";
    contrasenia = "1234567";
}
void Administrador::login()
{
    string usu;
=======
list<Paciente> ps;
list<Doctor> doc;
const int diaActual = 3;
const int horaActual = 8;

void::login()
{
 string usu;
>>>>>>> 32460518a44d47ea7690f3bea2ad173773e8a76b
    string contra;
    cout << "\t Ingrese Usuario: ";
    cin >> usu;
    cout << "\t Ingrese Contrasenia: ";
    cin >> contra;

    int opc;
    if (a->usuario == usu && a->contrasenia == contra)
    {
<<<<<<< HEAD

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
            cout << "\t Ingrese una opcion del menu(1-3)" << endl;
            cout << "\t 1. Agregar Nueva Especialidad" << endl;
            cout << "\t 2. Agregar Nuevo Doctor" << endl;
            cout << "\t 3. Salir" << endl;
            cin >> opc;

            switch (opc)
            {
            case 1:
            {
                /*
                Especialidad obj;
                obj.crearEspecialidad(); */
                break;
            }

            case 2:
            {
                /* 
                Doctor obj;
                obj.crearDoctor(); */
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
/*
void Administrador::registrarApaciente()
{
    Paciente pc;
    cout << "    *************************************************" << endl;
    cout << "    *   REGISTRARSE   COMO PACIENTE                  *" << endl;
    cout << "    *************************************************" << endl;

    pc.registrarPaciente();

    cout << "Sus datos fueron éxitosamente registrados";

    pc.mostrarDatosPaciente();
=======

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
            cout << "\t Ingrese una opcion del menu(1-3)" << endl;
            cout << "\t 1. Agregar Nueva Especialidad" << endl;
            cout << "\t 2. Agregar Nuevo Doctor" << endl;
            cout << "\t 3. Salir" << endl;
            cin >> opc;

            switch (opc)
            {
            case 1:
            {

                Especialidad obj;
                obj.crearEspecialidad();
                break;
            }

            case 2:
            {
                /* code */
                Doctor obj;
                obj.crearDoctor();
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
>>>>>>> 32460518a44d47ea7690f3bea2ad173773e8a76b
}


Administrador::Administrador()
{
     usuario = "administrador";
     contrasenia = "1234567";

<<<<<<< HEAD
    cout << "    *************************************************" << endl;
    cout << "    *   REGISTRARSE   COMO DOCTOR                  *" << endl;
    cout << "    *************************************************" << endl;

    Doctor obj;
    obj.crearDoctor();
    cout << "Sus datos fueron éxitosamente registrados";
}
*/
=======
}


  
>>>>>>> 32460518a44d47ea7690f3bea2ad173773e8a76b
