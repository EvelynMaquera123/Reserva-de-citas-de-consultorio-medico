#include "doctor.h"
#include "../Especialidad/especialidad.h"
#include <fstream>
#include <iostream>

//creamos el constructor teniendo como parametros todos los atributos de persona y de doctor
Doctor::Doctor(string nombr, string apellidoP, string apellidoM, Fecha fec, double peso, double estatura, char sex, string telef, string dire, int cod, int codES)
{
    Persona(nombr, apellidoP, apellidoM, fec, peso, estatura, sex, telef, direccion);
    //Le pasamos los valores de nuestros parametros  exculisivos de Doctor
    this->codigo = cod;
    this->CODespecialidad = codES;
}

Doctor::Doctor()
{
}

void Doctor::crearDoctor()
{
    string salto;
    //Variables de la biblioteca fstream para el manejo de archivos
    ofstream escritura;
    ifstream consulta;

    escritura.open("doctores.txt", ios::out | ios::app); //crea y escribe, si ya tiene texto une al final del archivo
    consulta.open("doctores.txt", ios::in);              //solamente consulta o lee usando la variable sobre el archivo físico doctores.txt
    //Verificamos si el archivo ha podido ser habierto con normalidad
    if (escritura.is_open() && consulta.is_open())
    {
        bool repetido = false;
        int codaux, cod1;

        cout << "\n";
        printf(" Ingrese el codigo del doctor: ");
        cin >> codaux;

        ///A continuación se aplica el tipo de lectura de archivos secuencial
        consulta >> cod1;
        while (!consulta.eof())
        {
            //Si encontramos el codigo del doctor , significa que ya esta registrado , asi que mostramos sus datos del doctor
            if (cod1 == codaux)
            {
                cout << "\t\tYa tenemos un doctor registrado con ese codigo...\n";
                repetido = true;
                break;
            }
            consulta >> salto >> salto >> salto >> salto >> salto >> salto;
            consulta >> cod1;
        }

        //En caso el doctor no se haya encontrado significa que no exite , asi que podemos proceder a insertarlo
        if (repetido == false)
        {
            codigo = codaux;
            cout << "\tIngresa el nombre del doctor: ";
            cin >> nombre;
            cout << "\tIngresa el apellido Paterno: ";
            cin >> apellidoPaterno;
            cout << "\tIngresa el apellido materno: ";
            cin >> apellidoMaterno;
            cout << "\tIngresa la edad : ";
            cin >> edad;
            cout << "\tIngresa el telefono: ";
            cin >> telefono;
            cout << "\tIngresa el codigo de especialidad: ";
            cin >> CODespecialidad;

            //ESCRIBIENDO LOS DATOS CAPTURADOS POR EL USUARIO EN EL ARCHIVO
            escritura << codaux << " " << nombre << " " << apellidoPaterno << " " << apellidoMaterno << " " << edad << " " << telefono << " " << CODespecialidad << endl;
            cout << "\n\tDoctor agregado...\n";
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
}

void Doctor::listarDoctores()
{
    ifstream lectura;
    char nombre[25], paterno[25], materno[25];
    int edad, telefono;
    lectura.open("doctores.txt", ios::out | ios::in); //solamente consulta o lee usando la variable sobre el archivo físico alumnos.txt
    //Preguntamos si la conexion esta abierta
    if (lectura.is_open())
    {
        lectura >> codigo;
        while (!lectura.eof())
        { //Mientras haya maas filas en el fichero
            lectura >> nombre >> paterno >> materno >> edad >> telefono;
            cout << "\n";
            cout << "\tCodigo:           " << codigo << endl;
            cout << "\tNombre:           " << nombre << endl;
            cout << "\tPrimer apellido:  " << paterno << endl;
            cout << "\tSegundo apellido: " << materno << endl;
            cout << "\tEdad:             " << edad << endl;
            cout << "\tTelefono:         " << telefono << endl;
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

void Doctor::eliminarDoctor()
{
	ofstream aux;
    ifstream lectura;

   	bool encontrado=false;
    int auxclave;
    aux.open("auxiliar_doctores.txt", ios::out);
    lectura.open("doctores.txt", ios::in);

    if (aux.is_open() && lectura.is_open()){
		char nombre[25],paterno[25],materno[25];
		int edad,telefono,especialidad;
        cout<<"\n";
        cout<<"\tIngresa la clave del doctor que deseas eliminar: ";
        cin>>auxclave;
            
            ///De nuevo se aplica el tipo de lectura de archivos secuencial, esto quiere decir que lee campo por campo hasta
            ///hasta llegar al final del archivo gracias a la funcion .eof()
            lectura>>codigo;
            while (!lectura.eof()){
                lectura>>nombre>>paterno>>materno>>edad>>telefono>>especialidad;
                if (auxclave == codigo){
					    char opca;
                        encontrado=true;
						cout<<"\n";
						cout<<"\tCodigo:           "<<codigo<<endl;
						cout<<"\tNombre:           "<<nombre<<endl;
						cout<<"\tPrimer apellido:  "<<paterno<<endl;
						cout<<"\tSegundo apellido: "<<materno<<endl;
						cout<<"\tEdad:             "<<edad<<endl;
						cout<<"\tTelefono:         "<<telefono<<endl;
						cout<<"\tEspecialidad:     "<<especialidad<<endl;
						cout<<"\t________________________________\n\n";
						cout<<"\tRealmente deseas eliminar el registro actual (S/N)? ---> ";
                        cin>>opca;

                        if (opca=='S' || opca=='s'){
                            cout<<"\n\n\t\t\tRegistro eliminado...\n\n\t\t\a";
                        }else{
                            aux<<codigo<<" "<<nombre<<" "<<paterno<<" "<<materno<<" "<<edad<<" "<<telefono<<" "<<especialidad<<endl;
                        }

                    }else{
                       aux<<codigo<<" "<<nombre<<" "<<paterno<<" "<<materno<<" "<<edad<<" "<<telefono<<" "<<especialidad<<endl;
                    }
                lectura>>codigo;
            }
    }else{
        cout<<"\n\tEl archivo no se pudo abrir \n";
    }

    if (encontrado==false){
                cout<<"\n\tNo se encontro ningun registro con la clave: "<<auxclave<<"\n\n\t\t\t";
            }

    aux.close();
    lectura.close();
    remove ("doctores.txt");
    rename("auxiliar_doctores.txt", "doctores.txt");
}
