#include <cstdlib>
#include <iostream>
#include <fstream>
#include <windows.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../Persona/Persona.cpp"
#include <list>
using namespace std;

class Paciente: public Persona{
	public:
	//list<Persona> pacientes;//Creamos una lista de pacientes ya que no sabemos con exactitud cuantos tendremos
	string usuario;
	string password;
	int codigo;
	public:
	Paciente(); //constructor donde tenemos que pasar los atributos
	Paciente(char* nombr,char* apellidoP, char* apellidoM, Fecha fec,double peso,double estatura, char* sex, char* telef,char* direccion,string password,int cod);

	void registrarPaciente(); //Registrar datos del paciente
	void mostrarDatosPaciente(); //mostrar los datos del paciente
	void solicitarCita();  //solicitar datos del paciente
    void cancelarCita();   //cancelar cita del paciente
	void operacion();    //Operaciones 
	void actualizarPacientes(); //actualizar datos del paciente
	
};

