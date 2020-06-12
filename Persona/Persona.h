#pragma once
#include "Fecha.h"
#include <string>
using namespace std;
class Persona {
  protected:
	 char* nombre;
	 char* apellidoPaterno;
	 char* apellidoMaterno;
	 Fecha fechaNacimiento;
	 double peso;
	 int edad;
	 double estatura;
	char *sexo;
	char *telefono;
	char *direccion;
  public:
	Persona(char* nombre,char* apellidoP, char* apellidoM, Fecha fec,double peso,double estatura,  char* sexo, char* telefono, char* direccion);
	Persona();
	char* getNombre(void);
	int setEdad(void);
	char* getApellidoPaterno(void);
	char* getApellidoMaterno(void);

	char* getSexo(void);
	char* getTelefono(void);
	char* getDireccion(void);
	double getPeso(void);
	void mostrarDatos();
};