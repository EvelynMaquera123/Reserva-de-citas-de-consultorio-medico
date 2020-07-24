#include "Fecha.h"
#include "Hora.h"
#include <iostream>
using std::cout;
Fecha::Fecha(int anio, int mes, int dia)
{
	this->anio = anio;
	this->mes = mes;
	this->dia = dia;
}

Fecha::Fecha()
{
	this->anio = 0;
	this->mes = 0;
	this->dia = 0;
}