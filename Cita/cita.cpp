#include "cita.h"
#include <iostream>

Cita::Cita(Doctor doctoraux, Paciente pacienteaux, Fecha fechaaux, Especialidad especialidadaux, bool estadoaux){//Constructor
	doctor = doctoraux;
	paciente = pacienteaux;
	fecha = fechaaux;
	especialidad = especialidadaux;
	estado = estadoaux;
}

void mostrarCita(){
	cout << "Datos del Doctor: " << doctor.nombre << doctor.apellidoPaterno << doctor.apellidoMaterno << endl;
	cout << "Datos del Paciente: " << paciente.nombre << paciente.apellidoPaterno << paciente.apellidoMaterno << endl;
	cout << "Especialidad: " << especialidad.nombre << endl;
	//cout<<"Fecha: "<<fecha.mostrarFecha<<endl;
	cout << "Estado: " << estado << endl;
}
void revisarHorario(Fecha aux) //Con este metodo se podra cambiar el horario de la cita
{
	fecha = aux;
}
void reservarCita(bool aux) //Con este metodo se cambiara el estado de la cita
{
	estado = aux;
}
