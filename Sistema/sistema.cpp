#include<iostream>
#include<sistema.h>
#include<string>
#include <iostream>
#include <string>
#include <conio.h>
#include "administrador.h"
#include "especialidad.h"
#include "doctor.h"
#include "paciente.h"
#include <iostream>
#include <chrono>
#include <ctime> 

using namespace std;

Administrador *a = new Administrador;
list<Paciente> ps;
list<Doctor> doc;

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


// si es paciente 
 for(std::list<Paciente>::iterator it = ps.begin() ; it != ps.end() ; ++it){ 
        if( it->password== contra && it->usuario== usu){

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
            cout << "\t 3. Cancelar cita"<< endl;
            cin >> opc;
           
            switch (opc)
            {
            case 1:
            { 

      /* obtener hora y fecha actual ----------------------------- 
      auto start = std::chrono::system_clock::now();
    // Some computation here
    auto end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end-start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
*/

    std::cout << "DOCTORES DISPONIBLES :" ;

            /*
                   cout<<"Ingrese nombre"<<endl;
                   cout<<"Ingrese apellido paterno"<<endl;
                   cout<<"Ingrese apellido materno"<<endl;
                   cout<<"Ingrese peso"<<endl;
                   cout<<"Ingrese estatura"<<endl;
                   cout<<"Ingrese sexo"<<endl;
                   cout<<"Ingrese "<<endl;
            */

               // este for recorres los doctores
               /*
                for(std::list<Doctor>::iterator it = doc.begin() ; it != doc.end() ; ++it){ 
             
             // aqui obtenemos todos los horarios del doctor 
             list<Horario> aHorarios = it->obtenerHorarios();

                    // aqui recorremos los horaios del doctor... 
                     for(list<Horario>::iterator its = aHorarios.begin() ; its != aHorarios.end() ; ++its){
                                its->mostrarDatos();
                     }
                     
         }
               */



              
        
                    break;

            }
                
            case 2:
            { 
                /* code */
              

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