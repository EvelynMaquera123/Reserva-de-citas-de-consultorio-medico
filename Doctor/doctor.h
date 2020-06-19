#include "Especialidad.cpp"
#include "horario.cpp"
#include "Persona.cpp"
#include <list>
using namespace std;
class Doctor: public Persona
{
    private:
        string codigo;
        Especialidad especialidad;
        std::list<Horario> horarios;//Creamos una lista de horarios ya que no sabemos con exactitud cuantos tendremos
    public:
     //Constructor le tenemos que pasar todos los parametros de personas , para poder usar el constructor de persona
        Doctor(char* nombr,char* apellidoP, char* apellidoM, Fecha fec,double peso,double estatura, char* sex, char* telef,char* direccion,string cod , Especialidad es,list<Horario> ho);
        void mostrarDatos();//Con este metodo mostramos los datos del doctor
        void consultarHorarios();//Mostraremos los horarios correspondientes al doctor
        void crearHorario();//Crearemos un nuevo horario para este doctor
};


