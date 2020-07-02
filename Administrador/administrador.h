#pragma once

class Administrador{
    protected:
        string usuario;
        string contrasenia;
    public:
        Administrador();
        void crearLogin();
        void ingresoExitoso();
};