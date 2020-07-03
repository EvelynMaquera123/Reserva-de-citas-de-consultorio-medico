#include<iostream>
#include "paciente.h"
using namespace std;

//Le pasamos los valores de nuestros parametros  exculisivos de Paciente
Paciente::Paciente(char* nombr,char* apellidoP, char* apellidoM, Fecha fec,double peso,double estatura, char* sex, char* telef,char* direccion,string pass)
{
  Persona( nombr,apellidoP, apellidoM, fec, peso,estatura, sex, telef,direccion);
    //Le pasamos los valores de nuestros parametros  exculisivos de Paciente
  password=pass;
  usuario=nombr;
  /* 
  for(std::list<Persona>::iterator it = pe.begin();it != pe.end();++it)//Hacemos un for para iterar en cada uno de los objetos de la lista de pacientes que le creamos
        pacientes.push_back(*it);//Enrolamos cada Persona en la lista a la lista del Administrador
        */
 }

 Paciente::Paciente()
 {
 }	
void Paciente::registrarPaciente(){

}
void Paciente::mostrarDatosPaciente() 
{
	//Datos personales

	cout << "Nombre: " << nombre <<"Apellido Paterno: "<< apellidoPaterno<<"Apellido Materno: "<<apellidoMaterno<<endl;
	cout << "Fecha Nacimiento: " <<fechaNacimiento.anio<<"/"<<fechaNacimiento.mes<<"/"<<fechaNacimiento.dia<<endl;
	cout << "Peso: " << peso <<endl;
	cout << "Edad: " << edad << endl;
	cout << "Estatura: " << estatura << endl;
	cout << "Sexo: "<<sexo << endl;
	cout << "Peso: " << telefono<< endl;
	cout << "Peso: " << direccion << endl;
}

/*
void menu(void){  //CREAMOS UN MENU PARA LA GESTION DE LOS PACIENTES

    cout<<"\n\t\t[    REGISTRO DE PACIENTES    ]\n";
    cout<<"\t\t----------------------------\n\n";
    cout<<" 1. SOLICITAR CITA "<<endl;
    cout<<" 2. CANCELAR CITA "<<endl;
    cout<<" 3. ACTUALIZAR PACIENTES "<<endl;
    cout<<" 5. OPERACIONES          "<<endl;
    cout<<" 6. SALIR                                       "<<endl;

    cout<<"\n Ingrese opcion : ";
}
//desarrollar los metodos
*/ 
void Paciente::solicitarCita(){   //METODO EN EL CUAL EL USUARIO SOLICITA UNA CITA
	}
void Paciente::cancelarCita(){ //metodo para cancelar cita del paciente
}
void Paciente::operacion(){ //metodo para gestionar las operaciones del paciente
}




