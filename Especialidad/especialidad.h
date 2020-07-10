#include<string>

#pragma once
using namespace std;
class Especialidad{
private:
	int idEspecialidad = 0;
	string nombre = "";
	string descripcion= "";
public:
	Especialidad();				 //Constructor
	void crearEspecialidad();	 //Crear una nueva especialidad
	void eliminarEspecialidad(); //Eliminar una especialidad
	//~Especialidad();			 //Destructor
	string getEspecialidad();
};
