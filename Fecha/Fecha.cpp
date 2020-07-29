#include "Fecha.h"
#include <iostream>
using std::cout;

Fecha::Fecha()
{
	this->anio = 0;
	this->mes = 0;
	this->dia = 0;
}

Fecha::Fecha(int anio, int mes, int dia)
{
	this->anio = anio;
	this->mes = mes;
	this->dia = dia;
}