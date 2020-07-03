#include "doctor.h"
#include "horario.h"
#include <iostream>
//creamos el constructor teniendo como parametros todos los atributos de persona y de doctor
Doctor::Doctor(char* nombr,char* apellidoP, char* apellidoM, Fecha fec,double peso,double estatura, char* sex, char* telef,char* direccion,string cod, Especialidad es,list<Horario> ho)
{
  Persona( nombr,apellidoP, apellidoM, fec, peso,estatura, sex, telef,direccion);
    //Le pasamos los valores de nuestros parametros  exculisivos de Doctor
  codigo=cod;
  especialidad=es;
  for(std::list<Horario>::iterator it = ho.begin();it != ho.end();++it)//Hacemos un for para iterar en cada uno de los objetos de la lista de horarios que le creamos
        horarios.push_back(*it);//Enrolamos cada horario en la lista a la lista del doctor
 }
 Doctor::Doctor()
 {

 }
void Doctor:: mostrarDatos()
{
    //Llamaremos al contructor de la clase madre persona para que muestre sus datos
   Persona::mostrarDatos;
    cout<<"Codigo del doctor:"<<codigo<<endl;
   //Mostraremos el nombre de la especialidad
   cout<<"Especialidad: "<<ends;
   //especialidad.getNombre()<<endl;->Esta parte aun falta construir en la clase especialidad
   //Mostreremos los horarios de atencion del doctor en la ultima semana
   cout<<"Fechas de horarios de atencion en la ultima semana"<<endl;
   for( auto item : horarios )//Usamos un foreach para recorrer toda la lista de horarios 
    item.mostrarDatos();//Llamamos al metodo de la clase horario 
}

list<Horario> Doctor:: obtenerHorarios(){
     // es un simple return o get para q  otra clase pueda acceder xq horarios es privado
 return  horarios;

}

Especialidad Doctor:: obtenerEspecialidad(){
    return especialidad;
}

void Doctor::crearHorario()
{
  //Pedimos la fecha del horario de trabajo
  int anio,mes,dia,hora;
  cout<<"Ingrese la fecha del horario de trabajo"<<endl;
  cout<<"Dia: "<<ends;
  cin>>dia;
  cout<<"Mes: "<<ends;
  cin>>mes;
  cout<<"Anio: "<<ends;
  cin>>anio;
  cout<<"Ingrese la hora del horario de trabajo"<<endl;
  cin>>hora;
  //Creamos el objeto horario y le pasamos los dayos recogidos mas el atributo codigo
   Horario temp(anio,mes,dia,codigo,hora);
   //Encolamos el horario en la lista de horarios correspondientes al doctor
   horarios.push_back(temp);
}
void Doctor::crearDoctor()
{
  char res;
   //Variables de la biblioteca fstream para el manejo de archivos
    ofstream escritura;
    ifstream consulta;

    do{
    escritura.open("doctores.txt", ios::out | ios::app);//crea y escribe, si ya tiene texto une al final del archivo
    consulta.open("doctores.txt", ios::in);//solamente consulta o lee usando la variable sobre el archivo físico alumnos.txt
    //Verificamos si el archivo ha podido ser habierto con normalidad
    if (escritura.is_open() && consulta.is_open()){

            char nombre[25],paterno[25],materno[25];
            int edad,telefono;
            bool repetido=false;
       //en esta variable se guardara el posible codigo del doctor 
            string codaux;
            cout<<"\n";
            cout<<"\tIngresa el codigo del doctor:    ";
            getline(cin,codaux);
            
            ///A continuación se aplica el tipo de lectura de archivos secuencial
            consulta>>codigo;
            while (!consulta.eof()){
                //Si encontramos el codigo del doctor , significa que ya esta registrado , asi que no podemos volverlo a insertar
                if (codaux.compare(codigo)==0){
                  //Entrara a esta parte si el codigo que ha ingresado se ha encontrado en el fichero asi que mostrara los datos del doctor con ese codigo y preguntara si desea ingresar otro
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
           //En caso el doctor no se haya encontrado significa que no exite , asi que podemos proceder a insertarlo
            if (repetido==false){
                Doctor temp;
                cout<<"\tIngresa el nombre del doctor: ";
                cin>>temp.nombre;
                cout<<"\tIngresa el apellido Paterno: ";
                cin>>temp.apellidoPaterno;
                cout<<"\tIngresa el apellido materno: ";
                cin>>temp.apellidoMaterno;
                cout<<"\tIngresa el sexo: ";
                cin>>temp.sexo;
                cout<<"\tIngresa la edad : ";
                cin>>temp.edad;
                cout<<"\tIngresa el telefono: ";
                cin>>temp.telefono;
                Especialidad es;
                es.crearEspecialidad();
                temp.codigo=codaux;
                temp.especialidad=es;
                //ESCRIBIENDO LOS DATOS CAPTURADOS POR EL USUARIO EN EL ARCHIVO
                escritura<<temp.codigo<<" "<<temp.nombre<<" "<<temp.apellidoPaterno<<" "<<temp.apellidoMaterno<<" "<<temp.sexo<<" "<<temp.edad<<" "<<temp.telefono<<endl;
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
    }while (res=='S' || res=='s');


}
