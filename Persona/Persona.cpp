#include "Persona.h"
#include <string.h>
#include <iostream>
using std::cout;

Persona::Persona(string nombr,string apellidoP, string apellidoM, Fecha fec,double peso,double estatura, char sex, string telef,string dire)
{
/*
	nombre = new char[strlen(nombr) + 1];
	strcpy_s(nombre, strlen(nombr) + 1, nombr);
*/ 
   this->nombre =nombr;
	this->apellidoPaterno = apellidoP;

	this->apellidoMaterno = apellidoM;
	// 
	this->fechaNacimiento = fec;
	this->estatura = estatura;
	this->peso = peso;

	this->sexo = sex;

	this->telefono = telef;
	this->direccion=dire;
}
Persona::Persona() {

}
string Persona::getNombre(void)
{
	return nombre;
}
string Persona::getApellidoPaterno(void)
{
	return apellidoPaterno;
}
string Persona::getApellidoMaterno(void)
{
	return apellidoMaterno;
}
int Persona::setEdad() {
	this->edad = 2020 - fechaNacimiento.anio;
	return edad;
}
char Persona::getSexo(void)
{
	return sexo;
}
string Persona::getTelefono(void)
{
	return telefono;
}
string Persona::getDireccion(void)
{
	return direccion;
}
double Persona::getPeso(void)
{
	return peso;
}

void Persona::mostrarDatos() 
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