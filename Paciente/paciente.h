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
	private:
	std::string codigo;
	std::list<Persona> pacientes;//Creamos una lista de pacientes ya que no sabemos con exactitud cuantos tendremos
	public:
	Paciente(); //constructor donde tenemos que pasar los atributos
	Paciente(char* nombr,char* apellidoP, char* apellidoM, Fecha fec,double peso,double estatura, char* sex, char* telef,char* direccion,string codidgo,list<Persona> pe);

	void registrarPaciente(); //Registrar datos del paciente
	void mostrarDatosPaciente(); //mostrar los datos del paciente
	void solicitarCita();  //solicitar datos del paciente
    void cancelarCita();   //cancelar cita del paciente
	void operacion();    //Operaciones 
	void actualizarPacientes(); //actualizar datos del paciente
	
};

