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
}char* Persona::getApellidoPaterno(void)
{
	return apellidoPaterno;
}char* Persona::getApellidoMaterno(void)
{
	return apellidoMaterno;
}int Persona::setEdad() {	this->edad = 2020 - fechaNacimiento.año;	return edad;}char* Persona::getSexo(void)
{
	return apellidoMaterno;
}char* Persona::getTelefono(void)
{
	return apellidoMaterno;
}char* Persona::getDireccion(void)
{
	return direccion;
}double Persona::getPeso(void)
{
	return peso;
}void Persona::mostrarDatos() 
{
	//Datos personales	cout << "Nombre: " << nombre <<"Apellido Paterno: "<< apellidoPaterno<<"Apellido Materno: "<<apellidoMaterno<<endl;	cout << "Fecha Nacimiento: " <<fechaNacimiento.año<<"/"<<fechaNacimiento.mes<<"/"<<fechaNacimiento.dia<<endl;	cout << "Peso: " << peso <<endl;	cout << "Edad: " << edad << endl;	cout << "Estatura: " << estatura << endl;	cout << "Sexo: "<<sexo << endl;	cout << "Peso: " << telefono<< endl;	cout << "Peso: " << direccion << endl;}