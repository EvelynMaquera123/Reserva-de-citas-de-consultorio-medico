#include "doctor.h"
#include <iostream>
Doctor::Doctor(char* nombr,char* apellidoP, char* apellidoM, Fecha fec,double peso,double estatura, char* sex, char* telef,char* direccion,string cod, Especialidad es,list<Horario> ho)
{
  Persona( nombr,apellidoP, apellidoM, fec, peso,estatura, sex, telef,direccion);
    //Le pasamos los valores de nuestros parametros  exculisivos de Doctor
  codigo=cod;
  especialidad=es;
   
  for(std::list<Horario>::iterator it = ho.begin();it != ho.end();++it)//Hacemos un for para iterar en cada uno de los objetos de la lista de horarios que le creamos
        horarios.push_back(*it);//Enrolamos cada horario en la lista a la lista del doctor
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
void crearHorario()
{
   
}
