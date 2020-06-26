#include <string>

#pragma once

class Administrador{
    protected:
        std::string usuario;
        std::string contrasenia;
    public:
        Administrador();
        void crearLogin();
        void ingresoExitoso();
};