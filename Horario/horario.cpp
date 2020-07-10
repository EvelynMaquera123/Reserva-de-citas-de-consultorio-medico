#include <iostream>
#include "horario.h"
Horario::Horario()
{

}
//Contrcutor que llama al contructor de la clase padre.

void Horario::modificar()//Con este metodo modifica la fecha del horario
{
    //¡CUIDADO ZONA EN CONSTRUCCION!
}


void Horario::mostrarDatos()//Mostramos todos los datos del horario
{
    cout<<"Codigo del doctor:"<<codigo_doctor<<endl;
    cout<<"Fecha:"<<ends;
    cout << fecha.anio<<"/"<<fecha.mes<<"/"<<fecha.dia<<endl;
    cout<<"Hora de entrada:"<<ends;

}



Horario Horario::crearHorario(string codaux)
{
   //Variables de la biblioteca fstream para el manejo de archivos
    ofstream escritura;
    escritura.open("horarios.txt", ios::out | ios::app);//crea y escribe, si ya tiene texto une al final del archivo
    //Verificamos si el archivo ha podido ser habierto con normalidad
    
           //En caso el doctor no se haya encontrado significa que no exite , asi que podemos proceder a insertarlo
            
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
                escritura<<codaux<<" "<<temp.fecha.dia<<" "<<temp.fecha.mes<<" "<<temp.fecha.anio<<endl;
                cout<<"\n\tRegistro agregado...\n";
    //Cerramos la conceccion de escritura y de lectura con el archivo
    escritura.close();
    //Devolvemos el horario creado
    return temp;
   
}
void listarHorario(string codaux)
{
    ifstream consulta;
    cin.ignore();
    consulta.open("horarios.txt", ios::in);//solamente consulta o lee usando la variable sobre el archivo físico alumnos.txt
    //Preguntamos si la conexion esta abierta
    if(consulta.is_open()){
        //Creamos variables que nos permitira  almacenar los datos de cada fila del fichero
        string codigo;
        int anio,mes,dia;
        bool repetido=false;
        consulta>>codigo;
        while (!consulta.eof())//Mientras haya maas filas en el fichero
        {
           if(codigo.compare(codaux)==0){
            consulta>>codigo>>dia>>mes>>anio;
            cout<<"\n";
            cout<<"\tCodigo: "<<codigo<<endl;
            cout<<"\tFecha: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
            cout<<"____________________________"<<endl;
            /* code */
           }
        }
    }
    else{
        cout<<"No se ha podido abrir el fichero de manera correcta"<<endl;
    }
}