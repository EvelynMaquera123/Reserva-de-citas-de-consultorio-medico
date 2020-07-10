#include <iostream>
#include <conio.h>
//#include "Cita/cita.h"
//#include "Paciente/paciente.h"
#include <list>
<<<<<<< HEAD
#include "Sistema/sistema.h" 
=======
#include "administrador.h"
#include "especialidad.h"
#include "doctor.h"
#include "paciente.h"
#include "Sistema/sistema.h" //sistema.h
>>>>>>> 32460518a44d47ea7690f3bea2ad173773e8a76b
#include "Administrador/administrador.h"
using namespace std;

int main()
{
	Administrador *a = new Administrador;
	//Cita cts[200];
<<<<<<< HEAD
	Sistema obj;
	//list<Paciente> ps;
=======
	Administrador obj;
	list<Paciente> ps;
	list<Doctor> doc;
	const int diaActual = 3;
const int horaActual = 8;
>>>>>>> 32460518a44d47ea7690f3bea2ad173773e8a76b
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
<<<<<<< HEAD
		cout << " 1. Administrador" << endl;
		cout << " 2. Reservar Cita" << endl; 
		cout << " 3. Registrar Paciente" << endl;
		cout << " 4. Mostrar Especialidades" << endl;
		cout << " 5. Mostrar Doctores " << endl;
		cout << " 6. Mostrar Horarios" << endl;
		cout << " 7. Salir" << endl;
=======
		cout << " 1. Ingresar como administrador" << endl;		 
		cout << " 2. Mostrar todas las Especialidades" << endl;
		cout << " 3. Mostrar todos los horarios disponibles para el dia de hoy"<<endl;
		cout << " 4. Mostrar todos los horarios de todos los doctores " << endl;
		cout << " 5. Registrar paciente"<<endl;
		cout << " 6. Reservar cita"<<endl;
	
		cout << " 5. Salir" << endl;
>>>>>>> 32460518a44d47ea7690f3bea2ad173773e8a76b

		cin >> opc;
		switch (opc)
		{
		case 1:
		{
<<<<<<< HEAD
=======
		
>>>>>>> 32460518a44d47ea7690f3bea2ad173773e8a76b
			// a->ingresoExitoso();
			obj.login();
			getch();
			break;
		}

		case 2:
		{
<<<<<<< HEAD
			//a->registrarApaciente();
			break;
		}

		case 3:
		{
			//a->registrarAdoctor();
			break;
		}

		case 4:
		{/*
=======
		//	a->registrarApaciente();
		

>>>>>>> 32460518a44d47ea7690f3bea2ad173773e8a76b
			list<Doctor> doc;
			list<Doctor>::iterator p = doc.begin();
			while (p != doc.end())
			{
				p->obtenerEspecialidad();
				p++;
			}
<<<<<<< HEAD
		*/
=======

		
>>>>>>> 32460518a44d47ea7690f3bea2ad173773e8a76b
			break;
		}

		case 3:
		{
<<<<<<< HEAD
			/*
			list<Doctor> doc;
=======
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
>>>>>>> 32460518a44d47ea7690f3bea2ad173773e8a76b
			for (std::list<Doctor>::iterator it = doc.begin(); it != doc.end(); ++it)
			{

				// aqui obtenemos todos los horarios del doctor
				list<Horario> aHorarios = it->obtenerHorarios();

				// aqui recorremos los horaios del doctor...
				for (list<Horario>::iterator its = aHorarios.begin(); its != aHorarios.end(); ++its)
				{
					its->mostrarDatos();
				}
			}*/
			break;
		}

		case 6:{
			break;
		}

		case 7:{
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
