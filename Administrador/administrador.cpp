#include <iostream>
#include <string>
#include <conio.h>
#include "administrador.h"
#include "especialidad.h"
#include "doctor.h"
#include "paciente.h"
#include <iostream>
#include <chrono>
#include <ctime> 

using namespace std;


Administrador::Administrador()
{
     usuario = "administrador";
     contrasenia = "1234567";

}



void Administrador::registrarApaciente()
{


Paciente pc;
        cout<< "    *************************************************"<<endl;
		cout<< "    *   REGISTRARSE   COMO PACIENTE                  *"<<endl;
		cout<< "    *************************************************"<<endl;

pc.registrarPaciente();

cout<< "Sus datos fueron éxitosamente registrados";

pc.mostrarDatosPaciente();


}

void Adiministrador::registrarAdoctor()
{

        cout<< "    *************************************************"<<endl;
		cout<< "    *   REGISTRARSE   COMO DOCTOR                  *"<<endl;
		cout<< "    *************************************************"<<endl;

Doctor obj;
obj.crearDoctor();
cout<< "Sus datos fueron éxitosamente registrados";

}
  