#pragma once

class Especialidad{
	private:
		int idEspecialidad;
		std::string nombre;
		std::string descripcion;
	public:
	Especialidad(); //Constructor
	void crearEspecialidad();//Crear una nueva especialidad
	void eliminarEspecialidad();//Eliminar una especialidad
	~Especialidad();//Destructor
};
