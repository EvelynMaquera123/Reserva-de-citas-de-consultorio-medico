#include "../Doctor/doctor.h"
#include "../Paciente/paciente.h"
#include "../Especialidad/especialidad.h"
#include "../Fecha/Fecha.h"
#include "../Fecha/Hora.h"
#include<iostream>
#include<string>
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
	void elegirPaciente();	
	void elegirEspecialidad();	
	void elegirDoctor();	
	void elegirFecha();
	void cambiarEstado(bool aux);
//Metodos para administrar la Cita
	void mostrarCita();		
 	 void guardarCita();
};
