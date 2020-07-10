/*
#include <iostream>
#include <sistema.h>
#include <string>
#include <iostream>
#include <string>
#include <conio.h>
#include "Administrador/administrador.h"
//#include "especialidad.h"
//#include "doctor.h"
//#include "paciente.h"
//#include "cita.h"
#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;

Administrador *a = new Administrador;
//list<Paciente> ps;
//list<Doctor> doc;
const int diaActual = 3;
const int horaActual = 8;

void Sistema::login()
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
                obj.crearEspecialidad(); 
                break;
            }

            case 2:
            {
                /* 
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
    
    // si es paciente
    for (std::list<Paciente>::iterator it = ps.begin(); it != ps.end(); ++it)
    {
        if (it->password == contra && it->usuario == usu)
        {

            cout << "\tIngreso Exitoso...!!!" << endl;
            getch();
        }

        do
        {
            cout << "    *****************************" << endl;
            cout << "    *   Welcome to Clinica       *" << endl;
            cout << "    *****************************" << endl;
            cout << "\n";
            getch();
            system("cls");
            cout << "\t Ingrese una opcion del menu(1-3)" << endl;
            cout << "\t 1. Revisar  doctores disponibles " << endl;
            cout << "\t 2. Solicitar cita" << endl;
            cout << "\t 3. Cancelar cita" << endl;
            cin >> opc;

            switch (opc)
            {
            case 1:
            {

                 obtener hora y fecha actual ----------------------------- 
      auto start = std::chrono::system_clock::now();
    // Some computation here
    auto end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end-start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);


                std::cout << "DOCTORES DISPONIBLES PARA EL DÍA Y HORA ACTUAL:";
                for (std::list<Doctor>::iterator it = doc.begin(); it != doc.end(); ++it)
                {
                    list<Horario> aHorarios = it->obtenerHorarios();
                    for (list<Horario>::iterator its = aHorarios.begin(); its != aHorarios.end(); ++its)
                    {
                        if (its->getDia() == diaActual && its->getHora() > horaActual)
                        {
                            its->mostrarDatos();
                        }
                    }
                }

                break;
            }

            case 2:
            {
                
                string paciente;
                string doctor;
                string fecha;

                cout << "ingrse su nombre";
                cout << "Ingrese el doctor";
                cout << "Ingrese la fecha";
                cout << "La especialidad ";
                cout << "La hora";

                //  Cita cts=new Cita();

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
*/