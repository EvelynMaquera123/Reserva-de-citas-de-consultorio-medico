#pragma once
#include "../Fecha/Fecha.h"
#include <string>
using namespace std;
class Persona {
public:
	string nombre;
	string apellidoPaterno;
	string apellidoMaterno;
	Fecha fechaNacimiento;
	double peso;
	int edad;
	double estatura;
	char sexo;
	string telefono;
	string direccion;
public:
	Persona(string nombre,string apellidoP, string apellidoM, Fecha fec,double peso,double estatura,  char sexo, string telefono, string direccion);
	Persona();
	string getNombre(void);
	int setEdad(void);
	string getApellidoPaterno(void);
	string getApellidoMaterno(void);
	char getSexo(void);
	string getTelefono(void);
	string getDireccion(void);
	double getPeso(void);
	void mostrarDatos();
};
