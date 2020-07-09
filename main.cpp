#include <iostream>
#include <conio.h>
#include "Cita/cita.h" //cita.h
#include "Paciente/paciente.h"
#include <list>
#include "administrador.h"
#include "especialidad.h"
#include "doctor.h"
#include "paciente.h"
#include "Sistema/sistema.h" //sistema.h
#include "Administrador/administrador.h"
using namespace std;

int main()
{
	Administrador *a = new Administrador;
	//Cita cts[200];
	Administrador obj;
	list<Paciente> ps;
	list<Doctor> doc;
	const int diaActual = 3;
const int horaActual = 8;
	int opc; //opcion del menu

	do
	{
		cout << "    *************************************************" << endl;
		cout << "    *   Welcome to the Appointment Booking System   *" << endl;
		cout << "    *************************************************" << endl;
		cout << "\n";
		getch();
		system("cls");
		cout << " Ingrese una opcion del menu(1-5)" << endl;
		cout << " 1. Ingresar como administrador" << endl;		 
		cout << " 2. Mostrar todas las Especialidades" << endl;
		cout << " 3.- Mostrar todos los horarios disponibles para el dia de hoy"<<endl;
		cout << " 4. Mostrar todos los horarios de todos los doctores " << endl;
		cout << "5. Registrar paciente"<<endl;
		cout << " 6. Reservar cita"<<endl;
	
		cout << " 5. Salir" << endl;

		cin >> opc;
		switch (opc)
		{
		case 1:
		{
		
			// a->ingresoExitoso();
			obj.login();
			getch();
			break;
		}

		case 2:
		{
		//	a->registrarApaciente();
		

			list<Doctor> doc;
			list<Doctor>::iterator p = doc.begin();
			while (p != doc.end())
			{
				p->obtenerEspecialidad();
				p++;
			}

		
			break;
		}

		case 3:
		{
		//	a->registrarAdoctor(); 
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

		case 4:
		{
            	list<Doctor> doc;
			for (std::list<Doctor>::iterator it = doc.begin(); it != doc.end(); ++it)
			{

				// aqui obtenemos todos los horarios del doctor
				list<Horario> aHorarios = it->obtenerHorarios();

				// aqui recorremos los horaios del doctor...
				for (list<Horario>::iterator its = aHorarios.begin(); its != aHorarios.end(); ++its)
				{
					its->mostrarDatos();
				}
			}
			break;
		}

		case 5:
		{
		    Paciente pc;
        cout<< "    *************************************************"<<endl;
		cout<< "    *   REGISTRARSE   COMO PACIENTE                  *"<<endl;
		cout<< "    *************************************************"<<endl;

pc.registrarPaciente();

cout<< "Sus datos fueron éxitosamente registrados";

pc.mostrarDatosPaciente();


			break;
		}

		case 6:
		{
			
		}
		default:
			cout << " Opcion Incorrecta!!! Try again..." << endl;
			break;
		}
	} while (opc != 5);

	return 0;
}
