#include <cstdlib>
#include <iostream>
#include <fstream>
#include <windows.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../Especialidad/especialidad.cpp"
#include "../Horario/horario.cpp"
#include "../Persona/Persona.cpp"
#include <list>
using namespace std;
class Doctor: public Persona
{
    private:
        std::string codigo;
        Especialidad especialidad;
        std::list<Horario> horarios;//Creamos una lista de horarios ya que no sabemos con exactitud cuantos tendremos

    public:
       Doctor();
     //Constructor le tenemos que pasar todos los parametros de personas , para poder usar el constructor de persona
        Doctor(char* nombre,char* apellidoP, char* apellidoM, Fecha fec,double peso,double estatura, char* sex, char* telef,char* direccion,string cod , Especialidad es,list<Horario> ho);
        void mostrarDatos();//Con este metodo mostramos los datos del doctor
        void consultarHorarios();//Mostraremos los horarios correspondientes al doctor
        void crearHorario();//Crearemos un nuevo horario para este doctor
        void crearDoctor();//Con este metodo insertaremos un nuevo doctor y lo añadiremos al fichero
        

         list<Horario> obtenerHorarios();
         Especialidad obtenerEspecialidad();
         
         };