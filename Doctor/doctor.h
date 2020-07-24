#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../Especialidad/especialidad.h"
#include "../Persona/Persona.h"
using namespace std;
class Doctor : public Persona
{
private:
    std::string codigo;
    int CODespecialidad;

public:
    Doctor();
    //Constructor le tenemos que pasar todos los parametros de personas , para poder usar el constructor de persona
    Doctor(string nombr, string apellidoP, string apellidoM, Fecha fec, double peso, double estatura, char sex, string telef, string dire, string cod, int es);
    void crearDoctor();    //Con este metodo insertaremos un nuevo doctor y lo añadiremos al fichero
    void listarDoctores(); //Con este metodo listamos todos los doctores que tenemos en el fichero
};
