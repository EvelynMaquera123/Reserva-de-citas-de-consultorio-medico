#pragma once
#include "Hora.cpp"
class Fecha {
public:
	int anio;
	int mes;
	int dia;
	Hora *hora;
public:
	Fecha(int anio,int dia,int mes);
	Fecha();// esto para q es???
	// tienes dos constructores pero el segundo no lo implementas 
};