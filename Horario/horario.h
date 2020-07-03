#include "../Fecha/Fecha.cpp"
using namespace std;
class Horario
{
private:
    string codigo_doctor; //Usamos esta clave para identificar al doctor ya que es unica
    Fecha fecha;
    int hora;
public:
     Horario();//Constructor basico
     Horario(int anio,int mes,int dia,string cod , int hor);
    void modificar();//Con este metodo modifica la fecha del horario
    void mostrarDatos();//Mostramos todos los datos del horario
    void crearHorario();//Con este metodo creamos un nuevo horario
    int getAnio();
    int getDia();
    int getMes();
    int getHora();
};


