#include <iostream>
#include "Hora.h"
using std::cout;

Hora::Hora()
{
	hora = 0;
	minutos = 0;
	segundos = 0;
}

Hora::Hora(int hora, int minutos, int segundos)
{
	this->hora = hora;
	this->minutos = minutos;
	this->segundos = segundos;
}