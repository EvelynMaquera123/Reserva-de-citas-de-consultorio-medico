#include <string>

#pragma once

class Administrador{
    private:
        std::string usuario;
        std::string contrasenia;
    public:
        Administrador();
        void crearLogin();
        void ingresoExitoso();
};