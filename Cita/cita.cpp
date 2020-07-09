#include "cita.h"
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <windows.h>
Cita::Cita(){

}

void Cita::elegirPaciente(){
    
	cout << "ingrese Datos del Paciente: " << endl;
		cin>>nomPaciente; 
    cout << "ingrese Datos del Paciente: " << endl;
		cin>>nomPaciente;
	}	
void Cita::elegirEspecialidad(){
    cout << "ingrese Datos del Especialidad " << endl;
		cin>>IDespecialidad; 
    cout << "ingrese Datos del Especialidad: " << endl;
		cin>>nomEspecialidad;
	}
void Cita::elegirDoctor(){
    cout << "ingrese Datos del Doctor " << endl;
		cin>>IDdoctor; 
    cout << "ingrese Datos del Doctor: " << endl;
		cin>>nomDoctor;
	}	
void Cita::elegirFecha(){
    cout << "ingrese Fecha " << endl;
		cin>>fechaE.anio; 
        cin>>fechaE.mes;
        cin>>fechaE.dia;
        cin>>horaE.hora;
        cin>>horaE.minutos;
	}
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

void Cita:: guardarCita(){

	 	ofstream escritura;
    	ifstream consulta;

    escritura.open("citas.txt", ios::out | ios::app);//crea y escribe, si ya tiene texto une al final del archivo
    consulta.open("citas.txt", ios::in);//solamente consulta o lee usando la variable sobre el archivo físico alumnos.txt

    if (escritura.is_open() && consulta.is_open()){
           
                escritura<<IDpaciente<<" "<<nomPaciente<<" "<<IDdoctor<" "<<nomDoctor<<" "<<IDespecialidad<<" "<<nomEspecialidad<<" "<<fechaE.anio<<" ";
                escritura<<fechaE.mes<<" "<<fechaE.dia<<" "<<horaE.hora<" "<<horaE.minutos<<" "<<estado<<" "<<numCita<<endl;
                cout<<"\n\tCita agregado...\n";
            }       
    else{
        cout<<"El archivo no se pudo abrir \n";
    }
    escritura.close();
    consulta.close();

}
