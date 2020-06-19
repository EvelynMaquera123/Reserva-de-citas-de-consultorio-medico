#include<iostream>
#include<string>
#include "especialidad.h"

using namespace std;

Especialidad *e = new Especialidad[100];
int auxID, cont;
//constructor
Especialidad::Especialidad(){
}
//Creamos especialidad con su nombre y descripción
void Especialidad::crearEspecialidad(){
    cout << "Ingrese ID de la especialidad";
    cin >> e->idEspecialidad;
    cout << "Ingrese nombre de especialidad: ";
    cin >> e->nombre;
    cout << "Ingrese breve descripcion: ";
    cin >> e->descripcion;
}
//Eliminamos especialidad segun su ID
void Especialidad::eliminarEspecialidad(){
    cout << "Ingrese ID de especialidad a eliminar";
    cin >> auxID;
	for(int i=0; i<100; i++){
        if(auxID == e->idEspecialidad){
            cout<<":::Datos a Eliminar:::"<<endl;
            cout << "========================" << endl;
            cout<<"ID: "<<e[i].idEspecialidad<<endl;
            cout<<"Nombre: "<<e[i].nombre<<endl;
            cout<<"Descripcion: "<<e[i].descripcion<<endl;
            cout << "========================" << endl;
            cout << "\nEspecialidad eliminado correctamente\n" << endl;
            system ("pause");

            e[i].idEspecialidad = 0;
            e[i].nombre = '\0';
            e[i].descripcion = '\0';

            cont--; 
        }
    }
}
//Destructor
Especialidad::~Especialidad(){
}
