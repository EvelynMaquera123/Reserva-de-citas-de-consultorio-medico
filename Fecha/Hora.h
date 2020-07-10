#pragma once
class Hora {
public:
	int hora;
	int minutos;
	int segundos;// son privados si quieres acceder directo deberia ser public o implementas metodos get y set 
public:
	Hora();
	Hora(int hora,int minutos,int segundos);
	void getHoraCompleta();
	
};