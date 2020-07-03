#include<iostream>
#include "paciente.h"
using namespace std;

//Le pasamos los valores de nuestros parametros  exculisivos de Paciente
Paciente::Paciente(char* nombr,char* apellidoP, char* apellidoM, Fecha fec,double peso,double estatura, char* sex, char* telef,string cod,char* direccion,string pass,list<Persona> pe)
{
  Persona( nombr,apellidoP, apellidoM, fec, peso,estatura, sex, telef,direccion);
    //Le pasamos los valores de nuestros parametros  exculisivos de Paciente
  password=pass;
  usuario=nombr;

  for(std::list<Persona>::iterator it = pe.begin();it != pe.end();++it)//Hacemos un for para iterar en cada uno de los objetos de la lista de pacientes que le creamos
        pacientes.push_back(*it);//Enrolamos cada Persona en la lista
        
 }

 Paciente::Paciente()
 {
 }	
void Paciente::registrarPaciente(){

  {
  char res;
   //Variables de la biblioteca fstream para el manejo de archivos
    ofstream escritura;
    ifstream consulta;

    do{
    escritura.open("pacientes.txt", ios::out | ios::app);//crea y escribe, si ya tiene texto une al final del archivo
    consulta.open("pacientes.txt", ios::in);//solamente consulta o lee usando la variable sobre el archivo físico pacientes.txt
    //Verificamos si el archivo ha podido ser habierto con normalidad
    if (escritura.is_open() && consulta.is_open()){


            bool repetido=false;
            string codaux;
            cout<<"\n";
            cout<<"\tIngresa el codigo del paciente:    ";
            getline(cin,codaux);
            
            ///A continuación se aplica el tipo de lectura de archivos secuencial
            consulta>>codigo;
            while (!consulta.eof()){
                //Si encontramos el codigo del paciente , significa que ya esta registrado , asi que no podemos volverlo a insertar
                if (codaux.compare(codigo)==0){
                    cout<<"\t\tYa tenemos el paciente registrado con ese codigo...\n";
                    repetido=true;
                    break;
                }
                consulta>>codigo;
            }
           //En caso el doctor no se haya encontrado significa que no exite , asi que podemos proceder a insertarlo
            if (repetido==false){
                Paciente paciente;

                cout<<"\tIngresa el nombre del paciente: ";
                cin>>paciente.nombre;
                cout<<"\tIngresa el apellido Paterno: ";
                cin>>paciente.apellidoPaterno;
                cout<<"\tIngresa el apellido Materno: ";
                cin>>paciente.apellidoMaterno;
                cout<<"\tIngresa el su peso: ";
                cin>>paciente.peso;
                cout<<"\tIngresa el su edad: ";
                cin>>paciente.edad;
                cout<<"\tIngresa el su sexo: ";
                cin>>paciente.sexo;
                cout<<"\tIngresa el telefono: ";
                cin>>paciente.telefono;
                cout<<"\tIngresa el direccion: ";
                cin>>paciente.direccion;
                escritura<<paciente.nombre<<" "<<paciente.apellidoPaterno<<" "<<paciente.apellidoMaterno<<" "<<paciente.peso<<" "<<paciente.edad<<" "<<paciente.sexo<<" "<<paciente.telefono<<" "<<paciente.direccion<<endl;
                cout<<"\n\tRegistro agregado...\n";
               
            }
            //Preguntamos al usuario si desea ingresar otro 
            cout<<"\n\tDeseas ingresar otro paciente? (S/N): ";
            cin>>res;
    //Si el archivo no se ha podido abrir enviamos un mensaje de error
    }else{
        cout<<"El archivo no se pudo abrir \n";
    }
    //Cerramos la conceccion de escritura y de lectura con el archivo
    escritura.close();
    consulta.close();
    //Esta accion se repetira siempre que el usuario  presione s o S cuando se le pregunte si quiere ingresar otro doctor
    }while (res=='S' || res=='s');


}

}

void Paciente::registrarPaciente(){

}
void Paciente::mostrarDatosPaciente() 
{
	//Datos personales

	cout << "Nombre: " << nombre <<"Apellido Paterno: "<< apellidoPaterno<<"Apellido Materno: "<<apellidoMaterno<<endl;
	cout << "Fecha Nacimiento: " <<fechaNacimiento.anio<<"/"<<fechaNacimiento.mes<<"/"<<fechaNacimiento.dia<<endl;
	cout << "Peso: " << peso <<endl;
	cout << "Edad: " << edad << endl;
	cout << "Estatura: " << estatura << endl;
	cout << "Sexo: "<<sexo << endl;
	cout << "Peso: " << telefono<< endl;
	cout << "Peso: " << direccion << endl;
}

/*
void menu(void){  //CREAMOS UN MENU PARA LA GESTION DE LOS PACIENTES

    cout<<"\n\t\t[    REGISTRO DE PACIENTES    ]\n";
    cout<<"\t\t----------------------------\n\n";
    cout<<" 1. SOLICITAR CITA "<<endl;
    cout<<" 2. CANCELAR CITA "<<endl;
    cout<<" 3. ACTUALIZAR PACIENTES "<<endl;
    cout<<" 5. OPERACIONES          "<<endl;
    cout<<" 6. SALIR                                       "<<endl;

    cout<<"\n Ingrese opcion : ";
}
//desarrollar los metodos
*/ 
void Paciente::solicitarCita(){   //METODO EN EL CUAL EL USUARIO SOLICITA UNA CITA
	}
void Paciente::cancelarCita(){ //metodo para cancelar cita del paciente
}
void Paciente::operacion(){ //metodo para gestionar las operaciones del paciente
}




