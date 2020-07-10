#include <iostream>
#include <conio.h>
//#include "Cita/cita.h"
//#include "Paciente/paciente.h"
#include <list>
#include "Administrador/administrador.cpp"
using namespace std;

int main()
{
	
	Administrador *a = new Administrador();
	int opc; //opcion del menu
	do
	{
		
		cout << "    *************************************************" << endl;
		cout << "    *   Welcome to the Appointment Booking System   *" << endl;
		cout << "    *************************************************" << endl;
		cout << "\n";
		//getch();
		//esperame voy a tare mi cargador 
		cin.ignore();
		system("cls");
		cout << " Ingrese una opcion del menu(1-5)" << endl;
		cout << " 1. Administrador" << endl;
		cout << " 2. Reservar Cita" << endl; 
		cout << " 3. Registrar Paciente" << endl;
		cout << " 4. Mostrar Especialidades" << endl;
		cout << " 5. Mostrar Doctores " << endl;
		cout << " 6. Mostrar Horarios" << endl;
		cout << " 7. Salir" << endl;
		cin >> opc;
		switch (opc)
		{
		case 1:
		{
			a->login();
			//getch();
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

		case 5:
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
			Doctor temp;
			temp.listarDoctores();
			break;
		}

		case 6:{
			break;
		}

		case 7:
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

		default:
			cout << " Opcion Incorrecta!!! Try again..." << endl;
			break;
		}
	} while (opc != 7); 
	return 0;
}
