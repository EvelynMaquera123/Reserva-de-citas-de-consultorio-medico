#include "../Fecha/Fecha.cpp"
using namespace std;
class Horario
{
private:
    string codigo_doctor; //Usamos esta clave para identificar al doctor ya que es unica
    Fecha fecha;
    Hora inicio,fin;
    int maximoCitas;
public:
     Horario();//Constructor basico
    void modificar();//Con este metodo modifica la fecha del horario
    void mostrarDatos();//Mostramos todos los datos del horario
    void crearHorario(string codaux);//Con este metodo creamos un nuevo horario
    void listarHorario(string codaux);
};
