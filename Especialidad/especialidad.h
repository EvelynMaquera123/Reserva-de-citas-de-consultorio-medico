#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#pragma once
using namespace std;
class Especialidad{
private:
	int idEspecialidad;
	string nombre;
	string descripcion;
public:
	Especialidad();				 //Constructor
	void crearEspecialidad();	 //Crear una nueva especialidad
	void eliminarEspecialidad(); //Eliminar una especialidad
	void listarEspecialidad(); //Listar una especialidad
	//~Especialidad();			 //Destructor
	string getEspecialidad();
};
