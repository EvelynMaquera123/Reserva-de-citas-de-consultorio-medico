#pragma once
#include <string>
#include "../Doctor/doctor.cpp"
using namespace std;

class Administrador
{
public:
    string usuario;
    string contrasenia;

public:
    Administrador();
    void login();
};