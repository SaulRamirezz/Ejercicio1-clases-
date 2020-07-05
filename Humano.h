#pragma once
#include <iostream>
#include <string>
using namespace std;

class Humano
{
private:

	int edad;
	string nombre;

public:

	Humano(int edad, string nombre);
	~Humano();

	int GetEdad()const { return edad; }
	string GetNombre()const { return nombre; }
};

