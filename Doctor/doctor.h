#include <string>
#include <iostream>
using namespace std;
class Doctor: public Persona
{
    Doctor();
    ~Doctor();
    private:
        string codigo;
        Especialidad especialidades[];
        Horario horarios[];
}
Doctor::Doctor();//Constructor
~Doctor::Doctor();
void crearHorario();//Con este metodo el doctor podra crear un nuevo horario
void consultarCitas();//Con este metodo el doctor consultara todas sus citas que tiene que atender
void consultarHorario();//Con este metodo el docto consultara su horario de consultas;