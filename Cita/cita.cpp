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
<<<<<<< HEAD

void mostrarCita(){
	cout << "Datos del Doctor: " << doctor.nombre << doctor.apellidoPaterno << persona.doctor.apellidoMaterno << endl;
	cout << "Datos del Paciente: " << paciente.nombre << paciente.apellidoPaterno << paciente.apellidoMaterno << endl;
	cout << "Especialidad: " << especialidad.nombre << endl;
	//cout<<"Fecha: "<<fecha.mostrarFecha<<endl;
=======
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
>>>>>>> edfbd2a0586c2225ab17ee4950489d2a69400496
	cout << "Estado: " << estado << endl;
}
void Cita:: revisarHorario(Fecha aux) //Con este metodo se podra cambiar el horario de la cita
{
	fecha = aux;
}
void Cita ::reservarCita(bool aux) //Con este metodo se cambiara el estado de la cita
{
	estado = aux;
}
