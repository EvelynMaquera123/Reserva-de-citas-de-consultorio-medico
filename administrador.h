#pragma once

class Administrador{
    protected:
        char usuario[20];
        char contrasenia[20];
    public:
        Administrador();
        void crearLogin();
        void ingresoExitoso();
};