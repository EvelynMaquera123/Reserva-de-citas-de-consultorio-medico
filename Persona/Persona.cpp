#include "Persona.h"
#include <iostream>
using std::cout;

Persona::Persona(char* nombr,char* apellidoP, char* apellidoM, Fecha fec,double peso,double estatura, char* sex, char* telef,char* direccion)
{

	nombre = new char[strlen(nombr) + 1];
	strcpy_s(nombre, strlen(nombr) + 1, nombr);

	this->apellidoPaterno = new char[strlen(apellidoP) + 1];
	strcpy_s(apellidoPaterno, strlen(apellidoP) + 1, apellidoP);

	this->apellidoMaterno = new char[strlen(apellidoM) + 1];
	strcpy_s(apellidoMaterno, strlen(apellidoM) + 1, apellidoM);

	Fecha fec = fec;
	this->estatura = estatura;
	this->peso = peso;

	this->sexo = new char[strlen(sex) + 1];
	strcpy_s(sexo, strlen(sex) + 1, sex);

	this->telefono = new char[strlen(telef) + 1];
	strcpy_s(telefono, strlen(telef) + 1, telef);
}
Persona::Persona() {

}
char* Persona::getNombre(void)
{
	return nombre;
}
{
	return apellidoPaterno;
}
{
	return apellidoMaterno;
}
{
	return apellidoMaterno;
}
{
	return apellidoMaterno;
}
{
	return direccion;
}
{
	return peso;
}
{
	//Datos personales