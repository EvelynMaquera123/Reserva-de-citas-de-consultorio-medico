#include<iostream>
#include<conio.h>
//#include "doctor.h"
//#include "especialidad.h"
//#include "paciente.h"
//#include "cita.h"
#include "Administrador/administrador.h"
using namespace std;

int main(){
	
	Administrador *a = new Administrador;
	int opc; //opcion del menu
	
	do{	
		cout<< "    *************************************************"<<endl;
		cout<< "    *   Welcome to the Appointment Booking System   *"<<endl;
		cout<< "    *************************************************"<<endl;
		cout<< "\n";
		getch();
		system("cls");
		cout<< " Ingrese una opcion del menu(1-5)"<<endl;
		cout<< " 1. Administrador"<<endl;
		cout<< " 2. Reservar Cita"<<endl;
		cout<< " 3. Registrar Paciente"<<endl;
		cout<< " 4. Buscar Especialidad"<<endl;
		cout<< " 5. Buscar Doctor"<<endl; 
		cout<< " 6. Ver Horarios"<<endl; 	
		cout<< " 7. Salir"<<endl;
		
		cin>>opc;
		switch(opc){
			case 1:
				a->crearLogin();
				a->ingresoExitoso();
				getch();
			break;
			case 2:
			break;
			case 3:
			break;
			case 4:
			break;
			case 5:
			break;
			case 6:
			break;
			case 7:
			break;
			default:
				cout<< " Opcion Incorrecta!!! Try again..."<<endl;
			break;	
		}
	}while(opc != 7);
	
	return 0;
}
