#include <iostream>
#include "horario.h"
//Contrcutor que llama al contructor de la clase padre.
Horario::Horario(int anio,int mes,int dia,string cod)
{ 
    Fecha(anio,mes,dia);
    codigo_doctor=cod;
}
void Horario::modificar()//Con este metodo modifica la fecha del horario
{
    //¡CUIDADO ZONA EN CONSTRUCCION!
}
void Horario::mostrarDatos()//Mostramos todos los datos del horario
{
    cout<<"Codigo del doctor:"<<codigo_doctor<<endl;
    cout<<"Fecha:"<<ends;
    cout << fecha.a�o<<"/"<<fecha.mes<<"/"<<fecha.dia<<endl;
}
