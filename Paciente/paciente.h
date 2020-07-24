#include <cstdlib>
#include <iostream>
#include <fstream>
#include <windows.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../Persona/Persona.h"

class Paciente: public Persona{
public:
	string usuario;
	string password;
	int codigo;
public:
	Paciente(); //constructor donde tenemos que pasar los atributos
	Paciente(string nombr,string apellidoP, string apellidoM, Fecha fec,double peso,double estatura, char sex, string telef,string direccion,string password,int cod);
	
	void registrarPaciente(); //Registrar datos del paciente
	void mostrarDatosPaciente(); //mostrar los datos del paciente
	void solicitarCita();  //solicitar datos del paciente
	void cancelarCita();   //cancelar cita del paciente
	void operacion();    //Operaciones 
	void actualizarPacientes(); //actualizar datos del paciente
};
