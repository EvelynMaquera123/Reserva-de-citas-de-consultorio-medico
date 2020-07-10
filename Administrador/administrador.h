#pragma once
#include <string>
using namespace std;
#include "../Doctor/doctor.cpp"
class Administrador{
    public:
        string usuario;
        string contrasenia;
    public:
        Administrador();
        void login();
};