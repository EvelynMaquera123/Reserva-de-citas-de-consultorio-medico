#include<iostream>
#include<conio.h>
//#include "doctor.h"
//#include "especialidad.h"
//#include "paciente.h"

#include "cita.h"
#include <list>
#include "sistema.h"
#include "Administrador/administrador.h"
using namespace std;

int main(){	
	Administrador *a = new Administrador;
	//Cita cts[200];
	Sistema obj;
	list<Paciente> ps;
	int opc; //opcion del menu
	
	do{	
		cout<< "    *************************************************"<<endl;
		cout<< "    *   Welcome to the Appointment Booking System   *"<<endl;
		cout<< "    *************************************************"<<endl;
		cout<< "\n";
		getch();
		system("cls");
		cout<< " Ingrese una opcion del menu(1-5)"<<endl;
		cout<< " 1. Ingresar al sistema"<<endl;//loguéa
		cout<< " 2. Registrarse"<<endl;//aquí envía datos
		cout<< " 3. mostrar todas las Especialidades"<<endl;	 
		cout<< " 4. mostrar todos los horarios de todos los doctores "<<endl; 	
		cout<< " 5. Salir"<<endl;
	


		cin>>opc;
		switch(opc){
			case 1:
			{
                ;
				// a->ingresoExitoso();
				obj.login();
				getch();
				break;
			}
				
			    
			    
			case 2:
			{
                 a->registrar();
				 break;
			}

			
			case 3:
			{
      				list<Doctor> doc;
                  list<Doctor>::iterator p=doc.begin();
				  while(p!=doc.end()){
                    p->obtenerEspecialidad();
					p++;
				  }
                    
               
              break;
			}
		
		    case 4:
			{
				list<Doctor> doc;
                 for(std::list<Doctor>::iterator it = doc.begin() ; it != doc.end() ; ++it){ 
             
                   // aqui obtenemos todos los horarios del doctor 
                     list<Horario> aHorarios = it->obtenerHorarios();

                    // aqui recorremos los horaios del doctor... 
                     for(list<Horario>::iterator its = aHorarios.begin() ; its != aHorarios.end() ; ++its){
                                its->mostrarDatos();
                     }
                     
         }
				break;
			}
			default:
				cout<< " Opcion Incorrecta!!! Try again..."<<endl;
			break;	
		}
	}while(opc != 3);
	
	return 0;
}
