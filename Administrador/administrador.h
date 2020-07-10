#pragma once
#include <string>
using namespace std;
class Administrador{
    public:
        string usuario;
        string contrasenia;
    public:
        Administrador();
        void login();
};