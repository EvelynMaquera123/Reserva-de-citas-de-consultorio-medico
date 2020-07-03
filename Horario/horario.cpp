#include <iostream>
#include "horario.h"
Horario::Horario()
{

}
//Contrcutor que llama al contructor de la clase padre.
Horario::Horario(int anio,int mes,int dia,string cod , int hor)
{ 
    Fecha(anio,mes,dia);
    codigo_doctor=cod;
    hora=hor;
     

}
void Horario::modificar()//Con este metodo modifica la fecha del horario
{
    //¡CUIDADO ZONA EN CONSTRUCCION!
}


void Horario::mostrarDatos()//Mostramos todos los datos del horario
{
    cout<<"Codigo del doctor:"<<codigo_doctor<<endl;
    cout<<"Fecha:"<<ends;
    cout << fecha.anio<<"/"<<fecha.mes<<"/"<<fecha.dia<<endl;
    cout<<"Año:"<<ends;
    cout<<hora;
}

int Horario::getAnio(){
    return fecha.anio;
}
int Horario::getMes(){
    return fecha.mes;
}
int Horario::getDia(){
    return fecha.dia;
}
int Horario::getHora(){
    return hora;
}

void Horario::crearHorario()
{

    char res;
   //Variables de la biblioteca fstream para el manejo de archivos
    ofstream escritura;
    ifstream consulta;

    do{
    escritura.open("horarios.txt", ios::out | ios::app);//crea y escribe, si ya tiene texto une al final del archivo
    consulta.open("../Doctor/doctores.txt", ios::in);//solamente consulta o lee usando la variable sobre el archivo físico alumnos.txt
    //Verificamos si el archivo ha podido ser habierto con normalidad
    if (escritura.is_open() && consulta.is_open()){
            bool encontrado=false;
            string codaux;
            cout<<"\n";
            cout<<"\tIngresa el codigo del doctor:   ";
            getline(cin,codaux);
            
            ///A continuación se aplica el tipo de lectura de archivos secuencial
            consulta>>codigo_doctor;
            while (!consulta.eof()){
                //Si encontramos el codigo del doctor , significa que ya esta registrado , asi que no podemos volverlo a insertar
                if (codaux.compare(codigo_doctor)==0){
                    cout<<"\t\tSe ha encontrado el doctor procederemos a crearle un nuevo  horario...\n";
                    encontrado=true;
                    break;
                }
                else
                {
                    cout<<"t\t No tenemos ningun doctor registrado con ese codigo por ende no podemos crearle un horario"<<endl;
                }
                
               
            }
           //En caso el doctor no se haya encontrado significa que no exite , asi que podemos proceder a insertarlo
            if (encontrado==true){
                Horario temp;
                Fecha fec;
                cout<<"Ingrese el dia: "<<endl;
                cin>>fec.dia;
                cout<<"Ingrese el mes: "<<endl;
                cin>>fec.mes;
                cout<<"Ingrese el año: "<<endl;
                cin>>fec.anio;
                temp.codigo_doctor=codaux;
                temp.fecha=fec;

                //ESCRIBIENDO LOS DATOS CAPTURADOS POR EL USUARIO EN EL ARCHIVO
                escritura<<temp.codigo_doctor<<" "<<temp.fecha.dia<<" "<<temp.fecha.mes<<" "<<temp.fecha.anio<<endl;
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