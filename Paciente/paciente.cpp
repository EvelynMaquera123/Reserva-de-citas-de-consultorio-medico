#include <iostream>
#include <string>
#include <conio.h>
#include "../Paciente/paciente.h"

using namespace std;
string auxnombre;
//Le pasamos los valores de nuestros parametros  exculisivos de Paciente
Paciente::Paciente(string nombr, string apellidoP, string apellidoM, Fecha fec, double peso, double estatura, char sex, string telef, string direccion, int cod)
{
	//pacientes los parametros estan mal
	Persona(nombr, apellidoP, apellidoM, fec, peso, estatura, sex, telef, direccion);
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
	char sexoF = 'F';
	char sexoM = 'M';

	escritura.open("pacientes.txt", ios::out | ios::app); //crea y escribe, si ya tiene texto une al final del archivo
	consulta.open("pacientes.txt", ios::in);			  //solamente consulta o lee usando la variable sobre el archivo físico pacientes.txt
	//Verificamos si el archivo ha podido ser habierto con normalidad

	try
	{

		if (escritura.is_open() && consulta.is_open())
		{
			bool repetido = false;
			long  codaux, codr,copyCodAux;
			int cifras = 1;
			string salto;
			cout << "\n";
			cout << "\t Ingresa el DNI del paciente:    ";

			do

			{
				cin >> auxentrada;
				//fgets(auxentrada,100,stdin);
				codaux = atol(auxentrada);
				if (codaux == 0)
				{
					cout << "\t Incorrecto ingrese de nuevo...! : ";
				}
			} while (codaux == 0);
			copyCodAux = codaux;

			while (copyCodAux >= 10)
			{
				copyCodAux /= 10;
				cifras++;
			}
			if (cifras != 8)
			{
				throw invalid_argument("el DNI debe ser de 8 dígitos");
			}

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
				cout << "\t Ingresa el nombre del paciente: ";
				cin >> paciente.nombre;
				cout << "\t Ingresa el apellido Paterno: ";
				cin >> paciente.apellidoPaterno;
				cout << "\t Ingresa el apellido Materno: ";
				cin >> paciente.apellidoMaterno;
				cout << "\t Ingresa el su peso: ";
				cin >> paciente.peso;
				if (!(paciente.getPeso() < 500 && paciente.getPeso() > 2))
				{
					throw invalid_argument("Ingrese peso correcto");
				}
				cout << "\t Ingresa el su edad: ";
				cin >> paciente.edad;
				cout << "\t Ingresa el su sexo: ";
				cin >> paciente.sexo;

				cout << "\t Ingresa el telefono: ";
				cin >> paciente.telefono;

				if (paciente.telefono.size() != 9)
				{
					throw invalid_argument("el telefono debe ser de 9 dígitos");
				}

				cout << "\t Ingresa el direccion: ";
				cin >> paciente.direccion;

				escritura << paciente.codigo << " " << paciente.nombre << " " << paciente.apellidoPaterno << " " << paciente.apellidoMaterno
						  << " " << paciente.peso << " " << paciente.edad << " " << paciente.sexo << " " << paciente.telefono << " " << paciente.direccion << endl;

				cout << "\n\tRegistro agregado...\n";
			}
			//Preguntamos al usuario si desea ingresar otro
			//Si el archivo no se ha podido abrir enviamos un mensaje de error
		}
		else
		{
			cout << "El archivo no se pudo abrir \n";
		}
	}
	catch (exception &e)
	{
		cout << e.what();
	}
	//Cerramos la conceccion de escritura y de lectura con el archivo
	escritura.close();
	consulta.close();
	//Esta accion se repetira siempre que el usuario  presione s o S cuando se le pregunte si quiere ingresar otro paciente
}

void Paciente::mostrarDatosPaciente()
{
	ifstream lectura;
	lectura.open("pacientes.txt", ios::out | ios::in); //solamente consulta o lee usando la variable sobre el archivo físico alumnos.txt
	//Preguntamos si la conexion esta abierta
	if (lectura.is_open())
	{
		lectura >> codigo;
		while (!lectura.eof())
		{ //Mientras haya maas filas en el fichero
			lectura >> nombre >> apellidoPaterno >> apellidoMaterno >> fechaNacimiento.anio >> fechaNacimiento.mes >> fechaNacimiento.dia >>
				peso >> edad >> estatura >> sexo >> telefono >> direccion;
			cout << "\n";
			cout << "\t Nombre: " << nombre << "Apellido Paterno: " << apellidoPaterno << "Apellido Materno: " << apellidoMaterno << endl;
			cout << "\t Fecha Nacimiento: " << fechaNacimiento.anio << "/" << fechaNacimiento.mes << "/" << fechaNacimiento.dia << endl;
			cout << "\t Peso: " << peso << endl;
			cout << "\t Edad: " << edad << endl;
			cout << "\t Estatura: " << estatura << endl;
			cout << "\t Sexo: " << sexo << endl;
			cout << "\t Telefono: " << telefono << endl;
			cout << "\t Direccion: " << direccion << endl;
			lectura >> codigo;
			cout << "\t________________________________\n";
			cin.ignore();
			/* code */
		}
	}
	else
	{
		cout << "No se ha podido abrir el fichero de manera correcta\n"
			 << endl;
	}
	lectura.close();
}

void Paciente ::eliminarPaciente()
{
	ofstream aux;
	ifstream lectura;

	bool encontrado = false;
	int auxclave, clave;
	aux.open("auxiliar_pacientes.txt", ios::out);
	lectura.open("pacientes.txt", ios::in);

	try
	{

		if (aux.is_open() && lectura.is_open())
		{
			char nombre[25], paterno[25], materno[25], sexo[2], direccion[25];
			int edad, telefono, peso;
			cout << "\n";
			cout << "\t Ingresa el dni del paciente que deseas eliminar: ";
			cin >> auxclave;

			///De nuevo se aplica el tipo de lectura de archivos secuencial, esto quiere decir que lee campo por campo hasta
			///hasta llegar al final del archivo gracias a la funciÃ³n .eof()
			lectura >> clave;
			while (!lectura.eof())
			{
				lectura >> nombre >> paterno >> materno >> peso >> edad >> sexo >> telefono >> direccion;
				if (auxclave == clave)
				{
					char opca;
					encontrado = true;
					cout << "\n";
					cout << "\t DNI:              " << clave << endl;
					cout << "\t Nombre:           " << nombre << endl;
					cout << "\t Primer apellido:  " << paterno << endl;
					cout << "\t Segundo apellido: " << materno << endl;
					cout << "\t Peso:             " << peso << "kg" << endl;
					cout << "\t Edad:             " << edad << endl;
					cout << "\t Sexo:             " << sexo << endl;
					cout << "\t Telefono:         " << telefono << endl;
					cout << "\t Direccion:        " << direccion << endl;
					cout << "\t________________________________\n\n";
					cout << "\t Realmente deseas eliminar el registro actual (S/N)? ---> ";
					cin >> opca;

					if (opca == 'S' || opca == 's')
					{
						cout << "\n\n\t\t\tRegistro eliminado...\n\n\t\t\a";
					}
					else
					{
						aux << clave << " " << nombre << " " << paterno << " " << materno << " " << peso << " " << edad << " " << sexo << " " << telefono << " " << direccion << endl;
					}
				}
				else
				{
					aux << clave << " " << nombre << " " << paterno << " " << materno << " " << peso << " " << edad << " " << sexo << " " << telefono << " " << direccion << endl;
				}
				lectura >> clave;
			}
		}
		else
		{
			cout << "\n\tEl archivo no se pudo abrir \n";
		}
	}
	catch (exception &e)
	{
		//
		cout << e.what();
	}

	if (encontrado == false)
	{
		cout << "\n\tNo se encontro ningun registro con la clave: " << auxclave << "\n\n\t\t\t";
	}

	aux.close();
	lectura.close();
	remove("pacientes.txt");
	rename("auxiliar_pacientes.txt", "pacientes.txt");
}

void Paciente ::modificarPaciente()
{

	ofstream aux;
	ifstream lectura;

	bool encontrado = false;
	int auxclave, clave;

	aux.open("auxiliar_pacientes.txt", ios::out);
	lectura.open("pacientes.txt", ios::in);

	try
	{
		if (aux.is_open() && lectura.is_open())
		{

			char nombre[25], paterno[25], materno[25], sexo[2], direccion[25];
			int edad, telefono, peso;
			cout << "\n";
			cout << "\t Ingresa el dni del paciente que deseas modificar: ";
			cin >> auxclave;

			lectura >> clave;
			while (!lectura.eof())
			{
				lectura >> nombre >> paterno >> materno >> peso >> edad >> sexo >> telefono >> direccion;
				if (auxclave == clave)
				{
					char opca;
					encontrado = true;
					cout << "\n";
					cout << "\t DNI:              " << clave << endl;
					cout << "\t Nombre:           " << nombre << endl;
					cout << "\t Primer apellido:  " << paterno << endl;
					cout << "\t Segundo apellido: " << materno << endl;
					cout << "\t Peso:             " << peso << "kg" << endl;
					cout << "\t Edad:             " << edad << endl;
					cout << "\t Sexo:             " << sexo << endl;
					cout << "\t Telefono:         " << telefono << endl;
					cout << "\t Direccion:        " << direccion << endl;
					cout << "\t________________________________\n\n";
					cout << "\tIngresa el nuevo DNI del paciente : " << clave << "\n\n\t---> ";
					cin >> clave;
					cout << "\tIngresa el nuevo nombre del paciente : " << nombre << "\n\n\t---> ";
					cin >> nombre;
					cout << "\tIngresa el nuevo apellido paterno del paciente : " << paterno << "\n\n\t---> ";
					cin >> paterno;
					cout << "\tIngresa el nuevo apellido materno del paciente : " << materno << "\n\n\t---> ";
					cin >> materno;
					cout << "\tIngresa el nuevo peso del paciente : " << peso << "\n\n\t---> ";
					cin >> peso;
					cout << "\tIngresa la nueva edad del paciente : " << edad << "\n\n\t---> ";
					cin >> edad;
					cout << "\tIngresa el nuevo sexo del paciente : " << sexo << "\n\n\t---> ";
					cin >> sexo;
					cout << "\tIngresa el nuevo telefono del paciente : " << telefono << "\n\n\t---> ";
					cin >> telefono;
					cout << "\tIngresa la nueva direccion del paciente : " << direccion << "\n\n\t---> ";
					cin >> direccion;
					aux << clave << " " << nombre << " " << paterno << " " << materno << " " << peso << " " << edad << " " << sexo << " " << telefono << " " << direccion << endl;
					cout << "\n\n\t\t\tRegistro modificado...\n\a";
				}
				else
				{
					aux << clave << " " << nombre << " " << paterno << " " << materno << " " << peso << " " << edad << " " << sexo << " " << telefono << " " << direccion << endl;
				}
				lectura >> clave;
			}
		}
		else
		{
			cout << "\n\tEl archivo no se pudo abrir \n";
		}
	}
	catch (exception &e)
	{
		cout << e.what();
	}
	if (encontrado == false)
	{
		cout << "\n\tNo se encontro ningun registro con la clave: " << auxclave << "\n\n";
		getch();
	}

	aux.close();
	lectura.close();
	remove("pacientes.txt");
	rename("auxiliar_pacientes.txt", "pacientes.txt");
}
