#include "Fecha.h"
#include <iostream>
using std::cout;


Hora::Hora() {

}


Hora::Hora(int hora,int minutos,int segundos)
{
    this->hora = hora;
    this->minutos = minutos;
    this->segundos = segundos; 
}