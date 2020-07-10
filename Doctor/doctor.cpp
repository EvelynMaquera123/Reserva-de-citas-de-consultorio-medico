#include "doctor.h"
#include <iostream>

//creamos el constructor teniendo como parametros todos los atributos de persona y de doctor
Doctor::Doctor(string nombr,string apellidoP, string apellidoM, Fecha fec,double peso,double estatura, char sex, string telef,string dire,string cod, Especialidad es)
{
  Persona( nombr,apellidoP, apellidoM, fec, peso,estatura, sex, telef,direccion);
    //Le pasamos los valores de nuestros parametros  exculisivos de Doctor
  this->codigo=cod;
  this->especialidad=es;
 
 }
 Doctor::Doctor()
 {

 }
void Doctor::crearDoctor()
{
 char res;
   //Variables de la biblioteca fstream para el manejo de archivos
    ofstream escritura;
    ifstream consulta;
    cin.ignore();
    
    do{
    escritura.open("doctores.txt", ios::out | ios::app);//crea y escribe, si ya tiene texto une al final del archivo
    consulta.open("doctores.txt", ios::in);//solamente consulta o lee usando la variable sobre el archivo físico doctores.txt
    //Verificamos si el archivo ha podido ser habierto con normalidad
    if (escritura.is_open() && consulta.is_open()){
            char nombre[25],paterno[25],materno[25];
            int edad,telefono;
            bool repetido=false;
            Especialidad es;
            string codaux;
          
            cout<<"\n";
            printf(" Ingrese el codigo del doctor: ");
            getline( cin , codaux );
          
            
            ///A continuación se aplica el tipo de lectura de archivos secuencial
            consulta>>codigo;
            while (!consulta.eof()){
              consulta>>nombre>>paterno>>materno>>edad>>telefono;
                //Si encontramos el codigo del doctor , significa que ya esta registrado , asi que mostramos sus datos del doctor
                if (codaux.compare(codigo)==0){
                       cout<<"\n";
                        cout<<"\tCodigo:    "<<codigo<<endl;
                        cout<<"\tNombre:   "<<nombre<<endl;
                        cout<<"\tPrimer apellido: "<<paterno<<endl;
                        cout<<"\tSegundo apellido:    "<<materno<<endl;
                        cout<<"\tEdad:     "<<edad<<endl;
                        cout<<"\tTelefono:     "<<telefono<<endl;
                        cout<<"\t________________________________\n\n";
                    cout<<"\t\tYa tenemos un doctor registrado con ese codigo...\n";
                    repetido=true;
                    break;
                }
                consulta>>codigo;
            }
               
              
                string name;
           //En caso el doctor no se haya encontrado significa que no exite , asi que podemos proceder a insertarlo
            if (repetido==false){
               Doctor temp;
                cout<<"\tIngresa el nombre del doctor: ";
                cin>>temp.nombre;
                cout<<"\tIngresa el apellido Paterno: ";
                cin>>temp.apellidoPaterno;
                cout<<"\tIngresa el apellido materno: ";
                cin>>temp.apellidoMaterno;
                cout<<"\tIngresa la edad : ";
                cin>>temp.edad;
                cout<<"\tIngresa el telefono: ";
                cin>>temp.telefono;
                temp.codigo=codaux;
                //Especialidad es;
                //es.crearEspecialidad();
                codigo=codaux;
                //temp.especialidad=es;
                //ESCRIBIENDO LOS DATOS CAPTURADOS POR EL USUARIO EN EL ARCHIVO
                escritura<<temp.codigo<<" "<<temp.nombre<<" "<<temp.apellidoPaterno<<" "<<temp.apellidoMaterno<<" "<<temp.edad<<" "<<temp.telefono<<" "<<endl;
                cout<<"\n\tRegistro agregado...\n";
               
            }
            //Preguntamos al usuario si desea ingresar otro 
            cout<<"\n\tDeseas ingresar otro doctor? (S/N): ";
            cin>>res;
    //Si el archivo no se ha podido abrir enviamos un mensaje de error
    }else{
        cout<<"El archivo no se pudo abrir \n";
    }
    //Cerramos la conceccion de escritura y de lectura con el archivo
    escritura.close();
    consulta.close();
    //Esta accion se repetira siempre que el usuario  presione s o S cuando se le pregunte si quiere ingresar otro doctor
     cin.ignore();
    }while (res=='S' || res=='s');
}
void Doctor::listarDoctores()
{
    ifstream lectura;
     char nombre[25],paterno[25],materno[25];
     int edad,telefono;
    lectura.open("doctores.txt",ios::out | ios::in);//solamente consulta o lee usando la variable sobre el archivo físico alumnos.txt
    //Preguntamos si la conexion esta abierta
    if(lectura.is_open()){
        lectura>>codigo;
        while (!lectura.eof()){//Mientras haya maas filas en el fichero
            lectura>>nombre>>paterno>>materno>>edad>>telefono;
            cout<<"\n";
            cout<<"\tCodigo:           "<<codigo<<endl;
            cout<<"\tNombre:           "<<nombre<<endl;
            cout<<"\tPrimer apellido:  "<<paterno<<endl;
            cout<<"\tSegundo apellido: "<<materno<<endl;
            cout<<"\tEdad:             "<<edad<<endl;
            cout<<"\tTelefono:         "<<telefono<<endl;
            lectura>>codigo;
            cout<<"\t________________________________\n";
            cin.ignore();
            /* code */
        }
    }
    else{
        cout<<"No se ha podido abrir el fichero de manera correcta\n"<<endl;
    }
    lectura.close();
}
