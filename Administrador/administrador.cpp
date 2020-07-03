#include <iostream>
#include <string>
#include <conio.h>
#include "administrador.h"
#include "especialidad.h"
#include "doctor.h"
#include "paciente.h"
#include <iostream>
#include <chrono>
#include <ctime> 

using namespace std;


Administrador::Administrador()
{
     usuario = "administrador";
     contrasenia = "1234567";

}

void Administrador::registrar()
{
char nom,apellP,apellM,tele;
double pes,est;
char sex;
    cout<<"Ingrese nombre"<<endl;
    cin>>nom;
    cout<<"Ingrese apellido paterno"<<endl;
    cin>>apellP;
    cout<<"Ingrese apellido materno"<<endl;
    cin>>apellM; 
    cout<<"Ingrese peso"<<endl;
    cin>>pes;
    cout<<"Ingrese estatura"<<endl;
     cin>>est; 
     cout<<"Ingrese sexo"<<endl;
     
    cout<<"Ingrese telefono"<<endl;
     
    cout<<"Ingrese dirección"<<endl;

    cout<<"password"<<endl;
    

            Paciente* obj=new Paciente();

}
  