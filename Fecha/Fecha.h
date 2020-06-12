#pragma once
#include "Hora.h"
class Fecha {
public:
	int año;
	int mes;
	int dia;
	Hora *hora;
public:
	Fecha(int año,int dia,int mes);
	Fecha();
};