#pragma once
class Hora {
private:
	int hora;
	int minutos;
	int segundos;
public:
	Hora();
	Hora(int hora,int minutos,int segundos);
	void getHoraCompleta();
	
};