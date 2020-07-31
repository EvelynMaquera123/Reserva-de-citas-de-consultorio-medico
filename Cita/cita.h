#include "../Fecha/Fecha.h"
#include "../Fecha/Hora.h"
#include <iostream>
#include <string>
using namespace std;

class Cita
{
	int IDpaciente;
	string nomPaciente;
	int IDespecialidad;
	string nomEspecialidad;
	int IDdoctor;
	string nomDoctor;
	Fecha fechaE;
	Hora horaE;
	int numCita;
	bool estado;

public:
	Cita();

	//Estos Metodos se usar para llenar los datos de la Cita
	int elegirPaciente();
	int elegirEspecialidad();
	int elegirDoctor();
	int elegirFecha();
	void cambiarEstado(bool aux);
	//Metodos para administrar la Cita
	void mostrarCita();
	void guardarCita();
	void crearCita();
	void eliminarCita();
	void modificarCita();
};
