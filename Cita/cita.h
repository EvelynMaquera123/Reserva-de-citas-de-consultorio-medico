#include "../Doctor/doctor.h"
#include "../Paciente/paciente.h"
#include "../Especialidad/especialidad.h"
#include "../Fecha/fecha.h"
using namespace std;

class Cita
{
	Doctor doctor;
	Paciente paciente;
	Fecha fecha;
	Especialidad especialidad;
	bool estado;
public:
	Cita();	
	Cita(Doctor doctoraux, Paciente pacienteaux, Fecha fechaaux, Especialidad especialidadaux, bool estadoaux); //Constructor
	void mostrarCita();																							//Con este metodo se muestras algunos datos spbre la cita
	void revisarHorario(Fecha aux);																				//Con este metodo se podra cambiar el horario de la cita
	void reservarCita(bool aux);																				//Con este metodo se cambiara el estado de la cita
};
