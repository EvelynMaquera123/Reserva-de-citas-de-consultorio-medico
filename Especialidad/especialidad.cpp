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
    ofstream aux;
    ifstream lectura;

    bool encontrado = false;
    int auxclave, clave;
    aux.open("auxiliar_especialidades.txt", ios::out);
    lectura.open("especialidades.txt", ios::in);

    if (aux.is_open() && lectura.is_open())
    {
        char nombre[25], descrpcion[60];
        cout << "\n";
        cout << "\tIngresa la clave de la especialidad que deseas eliminar: ";
        cin >> auxclave;

        ///De nuevo se aplica el tipo de lectura de archivos secuencial, esto quiere decir que lee campo por campo hasta
        ///hasta llegar al final del archivo gracias a la funciÃ³n .eof()
        lectura >> clave;
        while (!lectura.eof())
        {
            lectura >> nombre >> descripcion;
            if (auxclave == clave)
            {
                char opca;
                encontrado = true;
                cout << "\n";
                cout << "\tCodigo:           " << clave << endl;
                cout << "\tNombre:           " << nombre << endl;
                cout << "\tDescripcion:      " << descripcion << endl;
                cout << "\t________________________________\n\n";
                cout << "\tRealmente deseas eliminar el registro actual (S/N)? ---> ";
                cin >> opca;

                if (opca == 'S' || opca == 's')
                {
                    cout << "\n\n\t\t\tRegistro eliminado...\n\n\t\t\a";
                }
                else
                {
                    aux << clave << " " << nombre << " " << descripcion << endl;
                }
            }
            else
            {
                aux << clave << " " << nombre << " " << descripcion << endl;
            }
            lectura >> clave;
        }
    }
    else
    {
        cout << "\n\tEl archivo no se pudo abrir \n";
    }

    if (encontrado == false)
    {
        cout << "\n\tNo se encontro ningun registro con la clave: " << auxclave << "\n\n\t\t\t";
    }

    aux.close();
    lectura.close();
    remove("especialidades.txt");
    rename("auxiliar_especialidades.txt", "especialidades.txt");
}
