#pragma once
#include "Hora.h"
class Fecha {
public:
	int anio;
	int mes;
	int dia;
	Hora *hora;
public:
	Fecha(int anio,int dia,int mes);
	Fecha();
};