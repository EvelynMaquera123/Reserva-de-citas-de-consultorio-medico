#include <iostream>
#include "paciente.h"
#include <string>
using namespace std;

//Le pasamos los valores de nuestros parametros  exculisivos de Paciente
Paciente::Paciente(string nombr, string apellidoP, string apellidoM, Fecha fec, double peso, double estatura, char sex, string telef, string direccion, string pass, int cod)
{
	//pacientes los parametros estan mal
	Persona(nombr, apellidoP, apellidoM, fec, peso, estatura, sex, telef, direccion);
	//Le pasamos los valores de nuestros parametros  exculisivos de Paciente
	password = pass;
	usuario = nombr;
	codigo = cod;
}

Paciente::Paciente()
{
}
void Paciente::registrarPaciente()
{
	ofstream escritura;
	ifstream consulta;
	char auxentrada[10];

	escritura.open("pacientes.txt", ios::out | ios::app); //crea y escribe, si ya tiene texto une al final del archivo
	consulta.open("pacientes.txt", ios::in);			  //solamente consulta o lee usando la variable sobre el archivo físico pacientes.txt
	//Verificamos si el archivo ha podido ser habierto con normalidad
	if (escritura.is_open() && consulta.is_open())
	{
		bool repetido = false;
		int codaux, codr;
		string salto;
		cout << "\n";
		cout << "\tIngresa el Dni del paciente:    ";

		do
		{
			cin >> auxentrada;
			codaux = atoi(auxentrada);
			if (codaux == 0)
				cout << "\t¡Incorrecto ingrese de nuevo...! : ";

		} while (codaux == 0);

		///A continuación se aplica el tipo de lectura de archivos secuencial
		consulta >> codr;
		while (!consulta.eof())
		{
			//Si encontramos el codigo del paciente , significa que ya esta registrado , asi que no podemos volverlo a insertar
			// compara dos string  no int
			if (codaux == codr)
			{
				cout << "\t\tYa tenemos el paciente registrado con ese codigo...\n";
				repetido = true;
				break;
			}
			consulta >> salto >> salto >> salto >> salto >> salto >> salto >> salto >> salto;
			consulta >> codr;
		}
		//En caso que el paciente no se haya encontrado significa que no exite , asi que podemos proceder a insertarlo
		if (repetido == false)
		{

			Paciente paciente;

			paciente.codigo = codaux;
			cout << "\tIngresa el nombre del paciente: ";
			cin >> paciente.nombre;
			cout << "\tIngresa el apellido Paterno: ";
			cin >> paciente.apellidoPaterno;
			cout << "\tIngresa el apellido Materno: ";
			cin >> paciente.apellidoMaterno;
			cout << "\tIngresa el su peso: ";
			cin >> paciente.peso;
			cout << "\tIngresa el su edad: ";
			cin >> paciente.edad;
			cout << "\tIngresa el su sexo: ";
			cin >> paciente.sexo;
			cout << "\tIngresa el telefono: ";
			cin >> paciente.telefono;
			cout << "\tIngresa el direccion: ";
			cin >> paciente.direccion;
			escritura << paciente.codigo << " " << paciente.nombre << " " << paciente.apellidoPaterno << " " << paciente.apellidoMaterno << " " << paciente.peso << " " << paciente.edad << " " << paciente.sexo << " " << paciente.telefono << " " << paciente.direccion << endl;
			cout << "\n\tRegistro agregado...\n";
		}
		//Preguntamos al usuario si desea ingresar otro
		//Si el archivo no se ha podido abrir enviamos un mensaje de error
	}
	else
	{
		cout << "El archivo no se pudo abrir \n";
	}
	//Cerramos la conceccion de escritura y de lectura con el archivo
	escritura.close();
	consulta.close();
	//Esta accion se repetira siempre que el usuario  presione s o S cuando se le pregunte si quiere ingresar otro paciente
}

void Paciente::mostrarDatosPaciente()
{
	//Datos personales
	cout << "Nombre: " << nombre << "Apellido Paterno: " << apellidoPaterno << "Apellido Materno: " << apellidoMaterno << endl;
	cout << "Fecha Nacimiento: " << fechaNacimiento.anio << "/" << fechaNacimiento.mes << "/" << fechaNacimiento.dia << endl;
	cout << "Peso: " << peso << endl;
	cout << "Edad: " << edad << endl;
	cout << "Estatura: " << estatura << endl;
	cout << "Sexo: " << sexo << endl;
	cout << "Peso: " << telefono << endl;
	cout << "Peso: " << direccion << endl;
}

void Paciente::solicitarCita()
{ //METODO EN EL CUAL EL USUARIO SOLICITA UNA CITA
}
void Paciente::cancelarCita()
{ //metodo para cancelar cita del paciente
}
void Paciente::operacion()
{ //metodo para gestionar las operaciones del paciente
}
