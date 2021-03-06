#include "../Fecha/Fecha.h"
#include <fstream>
#include <iostream>
using namespace std;
class Horario
{
private:
	string codigo_doctor; //Usamos esta clave para identificar al doctor ya que es unica
	Fecha fecha;

	int maximoCitas;

public:
	Horario();			 //Constructor basico
	void mostrarDatos(); //Mostramos todos los datos del horario
	void crearHorario(); //Con este metodo creamos un nuevo horario
	void listarHorario(string codaux);
	bool buscarHorario(int codaux, int d, int m, int a);
	void eliminarHorario();
};
