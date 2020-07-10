#include "Cita.h"
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
void Cita::elegirPaciente(){
	
	cout << "ingrese DNi Paciente: " << endl;
	cin>>IDpaciente; 
	cout << "ingrese NOmbre del Paciente: " << endl;
	cin>>nomPaciente;
}	
//Metodo que mostrara las especialidades y se guardara la elegida
//no acabado

void Cita::elegirEspecialidad(){
	cout << "ingrese Datos del Especialidad " << endl;
	cin>>IDespecialidad; 
	cout << "ingrese Datos del Especialidad: " << endl;
	cin>>nomEspecialidad;
}
//Metodo que mostrara los doctores deacuerdo a la especialidad elegida
//no acabado	
void Cita::elegirDoctor(){
	cout << "ingrese Datos del Doctor " << endl;
	cin>>IDdoctor; 
	cout << "ingrese Datos del Doctor: " << endl;
	cin>>nomDoctor;
}	
//Metodo que mostrara los horarios del doctor elegido ,se guardara la fecha y hora elegida
//no acabado	
void Cita::elegirFecha(){
	cout << "ingrese Fecha " << endl;
	cin>>fechaE.anio; 
	cin>>fechaE.mes;
	cin>>fechaE.dia;
	cin>>horaE.hora;
	cin>>horaE.minutos;
}
//Metodo que cambia el estado de la cita,false en caso que se cancele	
void Cita::cambiarEstado(bool aux){
	estado=aux;
}

//Se muestran los datos de la cita 


void Cita:: mostrarCita(){
	
	cout << "Datos del Paciente: " << endl;
	cout<<IDpaciente<<" "<<nomPaciente<< endl;
	cout << "Datos del Doctor " <<endl;
	cout<<IDdoctor<<" "<<nomDoctor<< endl;
	cout << "Especialidad: " << endl;
	cout<<IDespecialidad<<" "<<nomEspecialidad<< endl;
	cout<<"Fecha y hora: "<<endl;
	cout<<fechaE.anio<<"/"<<fechaE.mes<<"/"<<fechaE.dia<<" "<<horaE.hora<<":"<<horaE.minutos<< endl;
	cout << "Estado: " << endl;
	cout<<estado<< endl;
	cout <<" Numero de Cita: " << endl;
	cout<<numCita<< endl;
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
