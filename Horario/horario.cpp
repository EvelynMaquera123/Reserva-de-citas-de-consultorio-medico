#include <iostream>
#include "horario.h"
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
    cout << "Codigo del doctor:" << codigo_doctor << endl;
    cout << "Fecha:" << ends;
    cout << fecha.anio << "/" << fecha.mes << "/" << fecha.dia << endl;
    cout << "Hora de entrada:" << ends;
}

void Horario::crearHorario()
{
    int hor, min;
    //Variables de la biblioteca fstream para el manejo de archivos
    ofstream escritura;
    escritura.open("horarios.txt", ios::out | ios::app); //crea y escribe, si ya tiene texto une al final del archivo
    //Verificamos si el archivo ha podido ser habierto con normalidad

    //En caso el doctor no se haya encontrado significa que no exite , asi que podemos proceder a insertarlo
    cout << "\n\tEliga un doctor : " << endl;
    int aux;
    ifstream consulta;
    consulta.open("doctores.txt", ios::in); //solamente consulta o lee usando la variable sobre el archivo físico pacientes.txt
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
    if (consulta.is_open())
    {

        int cod, codesp;

        string Enombre, EapellM, EapellP, salto;

        ///A continuación se aplica el tipo de lectura de archivos secuencial

        while (!consulta.eof())
        {

            consulta >> cod;
            consulta >> Enombre;
            consulta >> EapellM;
            consulta >> EapellP;
            consulta >> salto >> salto;
            consulta >> codesp;

            cout << "\t" << cod << "\t" << Enombre << "\t" << EapellM << "\t" << EapellP << "  \t" << codesp << endl;
        }

        cout << "\n\tEscoga un codigo de doctor: ";
        cin >> aux;

        //Si el archivo no se ha podido abrir enviamos un mensaje de error
    }
    else
    {
        cout << "El archivo no se pudo abrir \n";
    }
    //Cerramos la conceccion de escritura y de lectura con el archivo
    consulta.close();

    Horario temp;
    Fecha fec;
    cout << "Ingrese el dia: " << endl;
    cin >> fec.dia;
    cout << "Ingrese el mes: " << endl;
    cin >> fec.mes;
    cout << "Ingrese el año: " << endl;
    cin >> fec.anio;
    cout << "Ingrese la hora: " << endl;
    cin >> hor;
    cout << "Ingrese minutos: " << endl;
    cin >> min;
    cout << "Ingrese cantidad de citas disponibles : " << endl;
    cin >> maximoCitas;
    temp.codigo_doctor = aux;
    temp.fecha = fec;

    //ESCRIBIENDO LOS DATOS CAPTURADOS POR EL USUARIO EN EL ARCHIVO
    escritura << aux << " " << temp.fecha.dia << " " << temp.fecha.mes << " " << temp.fecha.anio << " " << hor << " " << min << " " << maximoCitas << endl;
    cout << "\n\tRegistro agregado...\n";
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
    if (consulta.is_open())
    {
        //Creamos variables que nos permitira  almacenar los datos de cada fila del fichero
        string codigo;
        int anio, mes, dia;
        bool repetido = false;
        consulta >> codigo;
        while (!consulta.eof()) //Mientras haya maas filas en el fichero
        {
            if (codigo.compare(codaux) == 0)
            {
                cin.ignore();
                consulta >> dia >> mes >> anio;
                cout << "\n";
                cout << "\tCodigo: " << codigo << endl;
                cout << "\tFecha: " << dia << "/" << mes << "/" << anio << endl;
                consulta >> codigo;
                cout << "____________________________\n"
                     << endl;
                /* code */
            }
        }
    }
    else
    {
        cout << "No se ha podido abrir el fichero de manera correcta" << endl;
    }
}
