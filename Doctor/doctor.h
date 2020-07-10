#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../Especialidad/especialidad.h"
#include "../Horario/horario.h"
#include "../Persona/Persona.h"
#include <list>
using namespace std;
class Doctor: public Persona
{
    private:
        std::string codigo;
        Especialidad especialidad;

    public:
       Doctor();
     //Constructor le tenemos que pasar todos los parametros de personas , para poder usar el constructor de persona
        Doctor(string nombr,string apellidoP, string apellidoM, Fecha fec,double peso,double estatura, char sex, string telef,string dire,string cod , Especialidad es);
        void mostrarDatos();//Con este metodo mostramos los datos del doctor
        void consultarHorarios();//Mostraremos los horarios correspondientes al doctor
        void crearHorario();//Crearemos un nuevo horario para este doctor
        void crearDoctor();//Con este metodo insertaremos un nuevo doctor y lo añadiremos al fichero
        void listarDoctores();//Con este metodo listamos todos los doctores que tenemos en el fichero
        

         list<Horario> obtenerHorarios();
         Especialidad obtenerEspecialidad();
         
         };