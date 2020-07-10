#include <iostream>
#include <conio.h>
//#include "Cita/cita.h"
//#include "Paciente/paciente.h"
#include <list>
#include "Administrador/administrador.h"
using namespace std;

int main()
{
	Administrador *a = new Administrador;
	//Cita cts[200];
	//list<Paciente> ps;
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
		cout << " 1. Administrador" << endl;
		cout << " 2. Reservar Cita" << endl; 
		cout << " 3. Registrar Paciente" << endl;
		cout << " 4. Mostrar Especialidades" << endl;
		cout << " 5. Mostrar Doctores " << endl;
		cout << " 6. Mostrar Horarios" << endl;
		cout << " 7. Salir" << endl;
<<<<<<< HEAD
=======
=======
		cout << " 1. Ingresar como administrador" << endl;		 
		cout << " 2. Mostrar todas las Especialidades" << endl;
		cout << " 3. Mostrar todos los horarios disponibles para el dia de hoy"<<endl;
		cout << " 4. Mostrar todos los horarios de todos los doctores " << endl;
		cout << " 5. Registrar paciente"<<endl;
		cout << " 6. Reservar cita"<<endl;
	
		cout << " 5. Salir" << endl;
>>>>>>> 32460518a44d47ea7690f3bea2ad173773e8a76b
>>>>>>> aa208e612af5117704a2b22cd4b321f6c22879a6

		cin >> opc;
		switch (opc)
		{
		case 1:
		{
			// a->ingresoExitoso();
			a->login();
			getch();
			break;
		}

		case 2:
		{
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
			list<Doctor> doc;
			list<Doctor>::iterator p = doc.begin();
			while (p != doc.end())
			{
				p->obtenerEspecialidad();
				p++;
			}
		*/
			break;
		}

		case 3:
		{
			/*
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
			/*
		    Paciente pc;
        cout<< "    *************************************************"<<endl;
		cout<< "    *   REGISTRARSE   COMO PACIENTE                  *"<<endl;
		cout<< "    *************************************************"<<endl;

pc.registrarPaciente();

cout<< "Sus datos fueron éxitosamente registrados";

pc.mostrarDatosPaciente();

*/
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
