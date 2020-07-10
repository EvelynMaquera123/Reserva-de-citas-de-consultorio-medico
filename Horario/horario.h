#include "../Fecha/Fecha.h"
#include <string>
using namespace std;
#pragma once
class Horario
{
private:
    string codigo_doctor; //Usamos esta clave para identificar al doctor ya que es unica
    Fecha fecha;
    Hora inicio;
    int maximoCitas;
public:
     Horario();//Constructor basico
    void modificar();//Con este metodo modifica la fecha del horario
    void mostrarDatos();//Mostramos todos los datos del horario
    Horario crearHorario(string codaux);//Con este metodo creamos un nuevo horario
    void listarHorario(string codaux);
};


