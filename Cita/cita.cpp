#include "cita.h"
#include "doctor.h"
#include <iostream>

Cita::Cita(){

}
//Constructor de la clase cita
Cita::Cita(Doctor doctoraux, Paciente pacienteaux, Fecha fechaaux ,Especialidad especialidadaux,bool estadoaux)
{
	doctor= doctoraux;
	paciente= pacienteaux;
	fecha= fechaaux;
	especialidad= especialidadaux;
	estado= estadoaux;
}

//Se muestran los datos de la cita
void Cita:: mostrarCita(){
	cout << "Datos del Doctor: " << endl;
		doctor.mostrarDatos(); 
	cout << "Datos del Paciente: " <<endl;
		paciente.mostrarDatosPaciente();
	cout << "Especialidad: " << endl;
		//especialidad.mostrarEspecialidad();
	cout<<"Fecha: "<<endl;
		//fecha.mostrarFecha();
	cout << "Estado: " << estado << endl;
}
void Cita:: revisarHorario(Fecha aux) //Con este metodo se podra cambiar el horario de la cita
{
	fecha = aux;
}
void Cita ::cambiarEstadoDeCita(bool aux) //Con este metodo se cambiara el estado de la cita
{
	estado = aux;
}

