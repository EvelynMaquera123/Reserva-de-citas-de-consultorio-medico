#include <iostream>
#include <conio.h>
#include "Cita/cita.h"
#include "Paciente/paciente.h"
#include "Administrador/administrador.h"
#include "Especialidad/especialidad.h"
#include "Doctor/doctor.h"
#include "Horario/horario.h"

using namespace std;

int main()
{
	Administrador *a = new Administrador();
	Cita *c = new Cita();
	Paciente *p = new Paciente();
	Especialidad *e = new Especialidad();
	Doctor *d = new Doctor();
	Horario *h = new Horario();

	int opc; //opcion del menu
	do
	{
		//cin.ignore();
		cout << "\t    *************************************************" << endl;
		cout << "\t    *   Welcome to the Appointment Booking System   *" << endl;
		cout << "\t    *************************************************" << endl;
		cout << "\n";
		//getch();
		cin.ignore();
		system("cls");
		cout << "\t Ingrese una opcion del menu(1-5)" << endl;
		cout << "\t 1. Administrador" << endl;
		cout << "\t 2. Reservar Cita" << endl;
		cout << "\t 3. Registrar Paciente" << endl;
		cout << "\t 4. Mostrar Especialidades" << endl;
		cout << "\t 5. Mostrar Doctores " << endl;
		cout << "\t 6. Salir " << endl;
		cin >> opc;
		switch (opc)
		{
		case 1:
		{
			a->login();
			break;
		}

		case 2:
		{
			if (c->elegirPaciente() == 0)
			{
				break;
			}
			c->crearCita();
			break;
		}

		case 3:
		{
			p->registrarPaciente();
			break;
		}

		case 4:
		{
			e->listarEspecialidad();
			break;
		}

		case 5:
		{
			d->listarDoctores();
			break;
		}

		case 6:
		{
			break;
		}
		default:
			cout << " Opcion Incorrecta!!! Try again..." << endl;
			break;
		}
	} while (opc != 6);
	return 0;
}
