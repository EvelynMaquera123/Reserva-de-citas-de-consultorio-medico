#include "../Cita/cita.h"
#include "../Paciente/paciente.h"
#include "../Especialidad/especialidad.h"
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;

Cita::Cita(){
	
}
//Metodo que buscara al paciente por el Dni
//no acabado
int Cita::elegirPaciente(){
	char auxentrada[10];
		Paciente aux;
		int codigo;
		string salto;
		ofstream escritura;
		ifstream consulta;
			escritura.open("pacientes.txt", ios::out | ios::app);//crea y escribe, si ya tiene texto une al final del archivo
			consulta.open("pacientes.txt", ios::in);//solamente consulta o lee usando la variable sobre el archivo físico pacientes.txt
			//Verificamos si el archivo ha podido ser habierto con normalidad
			if (escritura.is_open() && consulta.is_open()) {
				
				bool repetido = false;
				int codaux;
				cout << "\n";
				cout << "\tIngresa el Dni del paciente a buscar:    ";
					
				
				do{
					cin>>auxentrada;
					codaux=atoi(auxentrada);
					if(codaux==0)
						cout<<"\t¡Incorrecto ingrese de nuevo...! ";
					
				}while(codaux==0);
				
				
				///A continuación se aplica el tipo de lectura de archivos secuencial
				consulta >> codigo;
				
				while (!consulta.eof()) {
					//Si encontramos el codigo del paciente , significa que ya esta registrado , asi que no podemos volverlo a insertar
					// compara dos string  no int 
					if (codaux==codigo) {
						cout << "\tPaciente Encontrado "<<endl;									
						consulta >> aux.nombre;
						consulta >> aux.apellidoPaterno;
						consulta >> aux.apellidoMaterno;
						consulta >> aux.peso;
						consulta >> aux.edad;
						consulta >> aux.sexo;
						consulta>> aux.telefono;
						consulta>> aux.direccion;
						IDpaciente=codigo;
						cout << "\tDni: "<<IDpaciente<<endl;	
						nomPaciente=aux.nombre+"_"+aux.apellidoPaterno+"_"+aux.apellidoMaterno;
						cout << "\tNombre: "<<nomPaciente<<endl;	
						repetido = true;
						break;
					}
					consulta >> salto>>salto>>salto>>salto>>salto>>salto>>salto>>salto;
					
					consulta >> codigo;
				}							
				//En caso que el paciente no se haya encontrado significa que no exite , asi que podemos proceder a insertarlo
				if (repetido == false) {									
					cout << "\tPaciente no encontrado "<<endl;
					escritura.close();
					consulta.close();
					return 0;
					
					}
				//Preguntamos al usuario si desea ingresar otro 
				//Si el archivo no se ha podido abrir enviamos un mensaje de error
			}
			else {
				cout << "El archivo no se pudo abrir \n";
			}
			//Cerramos la conceccion de escritura y de lectura con el archivo
			escritura.close();
			consulta.close();
	return 1;		
			}		

//Metodo que mostrara las especialidades y se guardara la elegida
//no acabado

int Cita::elegirEspecialidad(){
	cout << "Eliga una especialidad : " << endl;
	char auxentrada[10];
	int aux;
	ifstream consulta;
	consulta.open("especialidades.txt", ios::in);//solamente consulta o lee usando la variable sobre el archivo físico pacientes.txt
	//Verificamos si el archivo ha podido ser habierto con normalidad
	if (consulta.is_open()) {
		
		int cod;
		string Enombre,Edes;
			
		///A continuación se aplica el tipo de lectura de archivos secuencial
		cout <<"\t"<< "Codigo"<<"\t"<< "Nombre" << "  \t"<<"Descripcion"<<endl;
		
		
		while (!consulta.eof()) {
				consulta >> cod;
				consulta >> Enombre;
				consulta >> Edes;
				
				cout <<"\t"<< cod<<"\t"<< Enombre << "  \t"<<Edes<<endl;
						
				}
	
			cout << "\n\tEscoga un codigo de especialidad : ";
		do{
			cin>>auxentrada;
			aux=atoi(auxentrada);
			if(aux==0)
				cout<<"\t¡Incorrecto ingrese de nuevo...! : ";
			
		}while(aux==0);
		
			
		
			
		//Si el archivo no se ha podido abrir enviamos un mensaje de error
	}
	else {
		cout << "El archivo no se pudo abrir \n";
	}
	//Cerramos la conceccion de escritura y de lectura con el archivo
	consulta.close();
	//Esta accion se repetira siempre que el usuario  presione s o S cuando se le pregunte si quiere ingresar otro paciente
	string salto1;		
		ifstream eleccion;
				eleccion.open("especialidades.txt", ios::in);
					if (eleccion.is_open()) {
							
							
							eleccion>>IDespecialidad;
							
						while (!eleccion.eof()) {
							if(IDespecialidad==aux){
								
								eleccion>>nomEspecialidad;
								eleccion>>salto1;
							break;
							}
							eleccion>>salto1>>salto1;
							eleccion>>IDespecialidad;		
						}
							
						//Si el archivo no se ha podido abrir enviamos un mensaje de error
					}
					else {
						cout << "El archivo no se pudo abrir \n";
					}			
		eleccion.close();
	return 1;			
}
//Metodo que mostrara los doctores deacuerdo a la especialidad elegida
//no acabado	
int Cita::elegirDoctor(){
	char auxentrada[10];
	cout <<"\tEspecialidad Escogida : "<<IDespecialidad<<" - "<<nomEspecialidad<<"\n";
	cout << "\n\tEliga un doctor : " << endl;
	int aux;
	ifstream consulta;
	consulta.open("doctores.txt", ios::in);//solamente consulta o lee usando la variable sobre el archivo físico pacientes.txt
	//Verificamos si el archivo ha podido ser habierto con normalidad
	cout <<"\t"<< "Codigo"<<"\t"<< "Nombre"<<"\t"<< "ApeMat"<<"\t"<< "ApePat" << "  \t"<<"CodEspecialidad"<<endl;
	if (consulta.is_open()) {
		
		int cod,codesp;
		
		string Enombre,EapellM,EapellP,salto;
				
		///A continuación se aplica el tipo de lectura de archivos secuencial
	
		
		
		while (!consulta.eof()) {
			
			consulta >> cod;
			consulta >> Enombre;
			consulta >> EapellM;
			consulta >> EapellP;
			consulta>>salto>>salto;
			consulta >> codesp;
			if(codesp==IDespecialidad){
			
			cout << "\t"<< cod<<"\t"<< Enombre <<"\t"<< EapellM<<"\t"<< EapellP<< "  \t"<<codesp<<endl;
					}		
		}
		
		cout << "\n\tEscoga un codigo de doctor: ";
		
		
		do{
			cin>>auxentrada;
			aux=atoi(auxentrada);
			if(aux==0)
				cout<<"\t¡Incorrecto ingrese de nuevo...! : ";
			
		}while(aux==0);
		
		//Si el archivo no se ha podido abrir enviamos un mensaje de error
	}
	else {
		cout << "El archivo no se pudo abrir \n";
	}
	//Cerramos la conceccion de escritura y de lectura con el archivo
	consulta.close();
	//Esta accion se repetira siempre que el usuario  presione s o S cuando se le pregunte si quiere ingresar otro paciente
	ifstream eleccion;
	eleccion.open("doctores.txt", ios::in);//solamente consulta o lee usando la variable sobre el archivo físico pacientes.txt
	//Verificamos si el archivo ha podido ser habierto con normalidad
	cout << "\t"<< "Codigo"<<"\t"<< "Nombre"<<"\t"<< "ApellMat"<<"\t"<< "ApellPat" << "  \t"<<"CodEspecialidad"<<endl;
	if (eleccion.is_open()) {
		
		int cod1,codesp1;
		
		string Enombre1,EapellM1,EapellP1,salto1;
					
		///A continuación se aplica el tipo de lectura de archivos secuencial
		
				
		while (!eleccion.eof()) {
			
			eleccion >> cod1;
			eleccion>> Enombre1;
			eleccion>> EapellM1;
			eleccion >> EapellP1;
			eleccion>>salto1>>salto1;
			eleccion >> codesp1;
			if(codesp1==IDespecialidad&&cod1==aux){
				IDdoctor=cod1; 
				nomDoctor=Enombre1+"_"+EapellM1+"_"+ EapellP1;
				break;
					}		
		}	
		
		cout<<"\nDOctor elegido : "<<IDdoctor<<" "<<nomDoctor<<"\n";
		//Si el archivo no se ha podido abrir enviamos un mensaje de error
	}
	else {
		cout << "El archivo no se pudo abrir \n";
	}
	//Cerramos la conceccion de escritura y de lectura con el archivo
	eleccion.close();
return 1;	
}	
//Metodo que mostrara los horarios del doctor elegido ,se guardara la fecha y hora elegida
//no acabado	
int Cita::elegirFecha(){
	char auxentrada[10];
	cout << "\n\tEliga un hora : " << endl;
	int aux,i=1;
	ifstream consulta;
	consulta.open("horarios.txt", ios::in);//solamente consulta o lee usando la variable sobre el archivo físico pacientes.txt
	//Verificamos si el archivo ha podido ser habierto con normalidad
	cout <<"\t"<<"No"<<"\t"<< "CodigoDoc"<<"\t"<<"Fecha"<<"\t"<< "Hora"<<"\t"<< "Citas"<<endl;
	if (consulta.is_open()) {
		int cod,num;
				
		while (!consulta.eof()) {
			
			consulta >> cod;
			if(cod==IDdoctor){
			consulta >> fechaE.anio;
			consulta >> fechaE.mes;
			consulta >> fechaE.dia;
			consulta >> horaE.hora;
			consulta >> horaE.minutos;
			consulta >>num;
							
				cout <<"\t"<<i << "\t"<< cod<<"\t"<< fechaE.anio <<"/"<< fechaE.mes<<"/"<< fechaE.dia<< "  \t"<<horaE.hora<<":"<<horaE.minutos<< "  \t"<<num<<endl;
			i++;
			}		
		}
		
		cout << "\n\tEscoga un numero de la lista : ";
		
		do{
			cin>>auxentrada;
			aux=atoi(auxentrada);
			if(aux==0)
				cout<<"\t¡Incorrecto ingrese de nuevo...! : ";
			
		}while(aux==0);
	}
	else {
		cout << "El archivo no se pudo abrir \n";
	}
	//Cerramos la conceccion de escritura y de lectura con el archivo
	consulta.close();
	int a=1,salto2;
	ifstream consulta2;
	consulta2.open("horarios.txt", ios::in);//solamente consulta o lee usando la variable sobre el archivo físico pacientes.txt
	//Verificamos si el archivo ha podido ser habierto con normalidad
	cout <<"\t"<<"No"<<"\t"<< "CodigoDoc"<<"\t"<<"Fecha"<<"\t"<< "Hora"<<"\t"<< "Citas"<<endl;
	if (consulta2.is_open()) {
		int cod,num;
		
		while (!consulta2.eof()) {
			if(a==aux){
				consulta2 >> cod;
				consulta2 >> fechaE.anio;
				consulta2 >> fechaE.mes;
				consulta2 >> fechaE.dia;
				consulta2>> horaE.hora;
				consulta2 >> horaE.minutos;
				consulta2 >>num;
				
				cout <<"\nFecha escogida : "<< "\t"<< cod<<"\t"<< fechaE.anio <<"/"<< fechaE.mes<<"/"<< fechaE.dia<< "  \t"<<horaE.hora<<":"<<horaE.minutos<< "  \t"<<num<<endl;
				break;
			}	
			consulta2 >>salto2>>salto2>>salto2>>salto2>>salto2>>salto2>>salto2;
			a++;
		}
				
	}
	else {
		cout << "El archivo no se pudo abrir \n";
	}
	//Cerramos la conceccion de escritura y de lectura con el archivo
	consulta2.close();
	
return 1;
}
//Metodo que cambia el estado de la cita,false en caso que se cancele	
void Cita::cambiarEstado(bool aux){
	estado=aux;
}

//Se muestran los datos de la cita 


void Cita:: mostrarCita(){
	
	cout<<"\t |\tDatos del Paciente: " << endl;
	cout<<"\t |\t"<<IDpaciente<<" "<<nomPaciente<< endl;
	cout<<"\t |\tDatos del Doctor " <<endl;
	cout<<"\t |\t"<<IDdoctor<<" "<<nomDoctor<< endl;
	cout<<"\t |\tEspecialidad: " << endl;
	cout<<"\t |\t"<<IDespecialidad<<" "<<nomEspecialidad<< endl;
	cout<<"\t |\tFecha y hora: "<<endl;
	cout<<"\t |\t"<<fechaE.anio<<"/"<<fechaE.mes<<"/"<<fechaE.dia<<" "<<horaE.hora<<":"<<horaE.minutos<< endl;
	cout<<"\t |\tEstado: " << endl;
	cout<<"\t |\t"<<estado<< endl;
	cout<<"\t |\t Numero de Cita: " << endl;
	cout<<"\t |\t"<<numCita<< endl;
}
//Metodo que guarda en un archivo los datos mas importantes de la cita
void Cita:: guardarCita(){
	
	ofstream escritura;
	ifstream consulta;
	
	escritura.open("citas.txt", ios::out | ios::app);//crea y escribe, si ya tiene texto une al final del archivo
	consulta.open("citas.txt", ios::in);//solamente consulta o lee usando la variable sobre el archivo físico alumnos.txt
	
	if (escritura.is_open() && consulta.is_open()){
		
		escritura<<IDpaciente<<" "<<nomPaciente<<" "<<IDdoctor<" ";
		escritura<<nomDoctor<<" "<<IDespecialidad<<" "<<nomEspecialidad<<" "<<fechaE.anio<<" ";
		escritura<<fechaE.mes<<" "<<fechaE.dia<<" "<<horaE.hora<" ";
		escritura<<horaE.minutos<<" "<<estado<<" "<<numCita<<endl;
		cout<<"\n\tCita agregado...\n";
	}       
	else{
		cout<<"El archivo no se pudo abrir \n";
	}
	escritura.close();
	consulta.close();
	
}
