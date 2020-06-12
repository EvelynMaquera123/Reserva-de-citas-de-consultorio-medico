#include "doctor.h"
#include "paciente.h"
#include "especialidad.h"
#include "fecha.h"
using namespace std;
class Cita
	{
		
	private:
		Doctor  doctor;
		Paciente paciente;
		Fecha fecha;
		bool estado;
		Especialidad especialidad;
	public:
		Cita:: Cita();//Constructor
		~Cita::Cita();
		void revisarHorario();//Con este metodo se podra cambiar el horario de la cita
		void reservarCita();//Con este metodo se cambiara el estado de la cita
		
		
	};
