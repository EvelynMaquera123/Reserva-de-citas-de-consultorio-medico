#include <iostream>
#include <string>
#include "especialidad.h"

using namespace std;

Especialidad::Especialidad()
{
}
//Creamos especialidad con su nombre y descripción
void Especialidad::crearEspecialidad()
{
    ofstream escritura;
    ifstream consulta;

    escritura.open("especialidades.txt", ios::out | ios::app); //crea y escribe, si ya tiene texto une al final del archivo
    consulta.open("especialidades.txt", ios::in);              //solamente consulta o lee usando la variable sobre el archivo físico pacientes.txt
    //Verificamos si el archivo ha podido ser habierto con normalidad
    if (escritura.is_open() && consulta.is_open())
    {

        bool creado = false;
        int codaux, codr;
        string salto;
        cout << "\n";
        cout << "\tIngrese ID de nueva especialidad:    ";

        cin >> codaux;
        ///A continuación se aplica el tipo de lectura de archivos secuencial
        consulta >> codr;
        while (!consulta.eof())
        {
            //Si encontramos el codigo del paciente , significa que ya esta registrado , asi que no podemos volverlo a insertar
            // compara dos string  no int
            if (codaux == codr)
            {
                cout << "\t\tYa existe especialidad con ese Id...\n";
                creado = true;
                break;
            }
            consulta >> salto >> salto;
            consulta >> codr;
        }
        //En caso que el paciente no se haya encontrado significa que no exite , asi que podemos proceder a insertarlo
        if (creado == false)
        {

            idEspecialidad = codaux;
            cout << "\tIngresa el nombre de especialidad : ";
            cin >> nombre;
            cout << "\tIngresa Breve descripcion: ";
            cin >> descripcion;

            escritura << idEspecialidad << " " << nombre << " " << descripcion << endl;
            cout << "\n\tEspecialidad agregada...\n"
                 << endl;
        }

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
string Especialidad::getEspecialidad()
{
    return nombre;
}
//Eliminamos especialidad segun su ID
void Especialidad::eliminarEspecialidad()
{
}
