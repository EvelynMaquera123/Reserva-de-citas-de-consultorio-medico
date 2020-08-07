#include <iostream>
#include "horario.h"
#include <string>
Horario::Horario()
{
}
//Contrcutor que llama al contructor de la clase padre.

void Horario::modificar() //Con este metodo modifica la fecha del horario
{
    //¡CUIDADO ZONA EN CONSTRUCCION!
}

void Horario::mostrarDatos() //Mostramos todos los datos del horario
{
    cout << "\t Codigo del doctor:" << codigo_doctor << endl;
    cout << "\t Fecha:" << ends;
    cout << "\t " <<fecha.anio << "/" << fecha.mes << "/" << fecha.dia << endl;
    cout << "\t Hora de entrada:" << ends;
}

void Horario::crearHorario()
{
    int hor, min;
    //Variables de la biblioteca fstream para el manejo de archivos
    ofstream escritura;
    escritura.open("horarios.txt", ios::out | ios::app); //crea y escribe, si ya tiene texto une al final del archivo
    //Verificamos si el archivo ha podido ser habierto con normalidad

    //En caso el doctor no se haya encontrado significa que no exite , asi que podemos proceder a insertarlo
    cout << "\n\t Eliga un doctor : " << endl;
    int aux;
    ifstream consulta;
    consulta.open("doctores.txt", ios::out | ios::in); //solamente consulta o lee usando la variable sobre el archivo físico pacientes.txt
    //Verificamos si el archivo ha podido ser habierto con normalidad
    cout << "\t"
         << "Codigo"
         << "\t"
         << "Nombre"
         << "\t"
         << "ApeMat"
         << "\t"
         << "ApePat"
         << "  \t"
         << "CodEspecialidad" << endl;
	try {

		if (consulta.is_open())
		{
			int cod, codesp;
			string Enombre, EapellM, EapellP, salto;
			///A continuación se aplica el tipo de lectura de archivos secuencial

			while (!consulta.eof())
			{
				consulta >> cod >> Enombre >> EapellM >> EapellP >> codesp >> salto >> salto;
				cout << "\t" << cod << "\t " << Enombre << "\t " << EapellM << "\t " << EapellP << "  \t" << codesp << endl;

			}
			cout << "\n\t Escoga un codigo de doctor: ";
			cin >> aux;
			//Si el archivo no se ha podido abrir enviamos un mensaje de error
		}
		else
		{
			cout << "El archivo no se pudo abrir \n";
		}
		//Cerramos la conceccion de escritura y de lectura con el archivo
		consulta.close();
	}
	catch (exception& e) {
		cout << "El archivo no se pudo abrir \n";
	}

    Horario temp;
    Fecha fec;
    cout << "\t Ingrese el dia: ";
    cin >> fec.dia;

	if (fec.dia >= 1 && fec.dia <= 30) {

	}
	else {
		throw invalid_argument("Verifique su fecha:Dia [1-30]");
	}
    cout << "\t Ingrese el mes: ";
    cin >> fec.mes;
	if (fec.mes >= 1 && fec.mes <= 12) {

	}
	else {
		throw invalid_argument("Verifique su fecha: Mes[1-12]");
	}
    cout << "\t Ingrese el anio: ";
    cin >> fec.anio;


	if (fec.anio >= 2020 && fec.anio <= 2020) {

	}
	else {
		throw invalid_argument("Verifique su fecha:Año[2020]");
	}
    cout << "\t Ingrese la hora: ";
    cin >> hor;
	if (!(hor >= 0 && hor < 24)) {
		throw invalid_argument("Hora debe estar entre [0-23] ");

	}
	
    cout << "\t Ingrese minutos: ";
    cin >> min;
	if (min >= 1 && min < 61) {
	
		
		
	}
	else {
		throw invalid_argument("Los minutos deben estar entre[0-60]");

	}
    cout << "\t Ingrese cantidad de citas disponibles : ";

	
    cin >> maximoCitas;
    temp.codigo_doctor = aux;
    temp.fecha = fec;


	
	//ESCRIBIENDO LOS DATOS CAPTURADOS POR EL USUARIO EN EL ARCHIVO
	escritura << aux << " " << temp.fecha.dia << " " << temp.fecha.mes << " " << temp.fecha.anio << " " << hor << " " << min << " " << maximoCitas << endl;
	cout << "\n\t Registro agregado...\n";
	
	//Cerramos la conceccion de escritura y de lectura con el archivo
    escritura.close();
    //Devolvemos el horario creado
}
void Horario::listarHorario(string codaux)
{
    ifstream consulta;
    cin.ignore();
    consulta.open("horarios.txt", ios::in); //solamente consulta o lee usando la variable sobre el archivo físico alumnos.txt
    //Preguntamos si la conexion esta abierta
	try {


		if (consulta.is_open())
		{
			//Creamos variables que nos permitira  almacenar los datos de cada fila del fichero
			string codigo;
			int anio, mes, dia;
			bool repetido = false;
			//   consulta >> codigo;
			while (!consulta.eof()) //Mientras haya maas filas en el fichero
			{
				if (codigo.compare(codaux) == 0)
				{
					cin.ignore();
					consulta >> dia >> mes >> anio;
					cout << "\n";
					cout << "\t Codigo: " << codigo << endl;
					cout << "\t Fecha: " << dia << "/" << mes << "/" << anio << endl;
					consulta >> codigo;
					cout << "\t____________________________\n"
						<< endl;
				}
			}
		}
		else
		{
			cout << "No se ha podido abrir el fichero de manera correcta" << endl;
		}
	}
	catch (exception& e) {
		cout << "No se ha podido abrir el fichero de manera correcta" << endl;
	}
}

bool Horario::buscarHorario(int codaux, int d, int m, int a)
{
    ifstream consulta;
    bool repetido = false;
    consulta.open("horarios.txt", ios::in); //solamente consulta o lee usando la variable sobre el archivo fï¿½sico alumnos.txt
    //Preguntamos si la conexion esta abierta
	try {


		if (consulta.is_open())
		{
			//Creamos variables que nos permitira  almacenar los datos de cada fila del fichero
			int codigo;
			int anio, mes, dia;
			consulta >> codigo >> dia >> mes >> anio;
			while (!consulta.eof()) //Mientras haya maas filas en el fichero
			{
				if (codigo == codaux && dia == d && mes == m && anio == a)
				{
					cin.ignore();
					cout << "\n";
					cout << "\t Codigo: " << codigo << endl;
					cout << "\t Fecha: " << dia << "/" << mes << "/" << anio << endl;
					consulta >> codigo >> dia >> mes >> anio;
					cout << "\t____________________________\n"
						<< endl;
					/* code */
					repetido = true;
					break;
				}
			}
		}
		else
		{
			cout << "No se ha podido abrir el fichero de manera correcta" << endl;
		}
		//return repetido;
	}
	catch (exception& e) {
		cout << "No se ha podido abrir el fichero de manera correcta" << endl;
	}
	return repetido;
}

void Horario::eliminarHorario()
{
    ofstream aux;
    ifstream lectura;
    bool encontrado = false;
    int auxclave, clave;
    aux.open("auxiliar_horarios.txt", ios::out);
    lectura.open("horarios.txt", ios::in);
	try {


    if (aux.is_open() && lectura.is_open())
    {
        cin.ignore();
        char espacio = '/';
        int dia, mes, anio, hora, minutos, citas, dia1, mes1, anio1;
        cout << "\n";
        cout << "\t Ingresa el codigo del doctor cuyo horario quieres eliminar: ";
        cin >> auxclave;
        cout << "\t Ingresa la fecha exacta d/m/a: ";
        cin >> dia1 >> espacio >> mes1 >> espacio >> anio1;
        ///De nuevo se aplica el tipo de lectura de archivos secuencial, esto quiere decir que lee campo por campo hasta
        ///hasta llegar al final del archivo gracias a la funciÃ³n .eof()
        lectura >> clave;
        while (!lectura.eof())
        {
            lectura >> dia >> mes >> anio >> hora >> minutos >> citas;
            if (auxclave == clave && dia1 == dia && mes1 == mes && anio == anio1)
            {
                char opca;
                encontrado = true;
                cout << "\n";
                cout << "\t Codigo del doctor:      " << clave << endl;
                cout << "\t Fecha:           		 " << dia << "/" << mes << "/" << anio << endl;
                cout << "\t Hora:  				 " << hora << ":" << minutos << endl;
                cout << "\t Numero de Citas: 		 " << citas << endl;
                cout << "\t________________________________\n\n";
                cout << "\t Realmente deseas eliminar el registro actual (S/N)? ---> ";
                cin >> opca;

                if (opca == 'S' || opca == 's')
                {
                    cout << "\n\n\t\t\tRegistro eliminado...\n\n\t\t\a";
                }
                else
                {
                    aux << clave << " " << dia << " " << mes << " " << anio << " " << hora << " " << minutos << " " << citas << endl;
                }
            }
            else
            {
                aux << clave << " " << dia << " " << mes << " " << anio << " " << hora << " " << minutos << " " << citas << endl;
            }
            lectura >> clave;
        }
    }
    else
    {
        cout << "\n\tEl archivo no se pudo abrir \n";
    }
	}
	catch (exception& e) {
		cout << "\n\tEl archivo no se pudo abrir \n";
	}
    if (encontrado == false)
    {
        cout << "\n\tNo se encontro ningun registro con la clave: " << auxclave << "\n\n\t\t\t";
    }

    aux.close();
    lectura.close();
    remove("horarios.txt");
    rename("auxiliar_horarios.txt", "horarios.txt");
}