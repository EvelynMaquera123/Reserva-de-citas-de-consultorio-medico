#include<iostream>
#include<conio.h>
#include "doctor.h"
#include "especialidad.h"
#include "paciente.h"
#include "cita.h"
using namespace std;

int main(){
	
	int opc; //opcion del menu
	
	do{	
		cout<< "    *************************************************"<<endl;
		cout<< "    *   Welcome to the Appointment Booking System   *"<<endl;
		cout<< "    *************************************************"<<endl;
		cout<< "\n";
		getch();
		system("cls");
		cout<< " Ingrese una opcion del menu(1-5)"<<endl;
		cout<< " 1. Reservar Cita"<<endl;
		cout<< " 2. Registrar Paciente"<<endl;
		cout<< " 3. Buscar Doctor"<<endl;
		cout<< " 4. Ver Horarios"<<endl;
		cout<< " 5. Salir"<<endl;
		
		cin>>opc;
		switch(opc){
			case 1:
			break;
			case 2:
			break;
			case 3:
			break;
			case 4:
			break;
			case 5:
			break;
			default:
				cout<< " Opcion Incorrecta!!! Try again..."<<endl;
			break;	
		}
	}while(opc != 5);
	
	return 0;
}
