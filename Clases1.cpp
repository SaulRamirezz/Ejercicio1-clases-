#include <iostream>
#include <string>
#include "Humano.h"
using namespace std;

int main()
{
	Humano* a = new Humano(24, "Javier");

	cout << "Cheque esto profe, voy a crear un humano" << endl;
	cout << "Este es su nombre: " << a->GetNombre() << endl;
	cout << "Esta es su edad: " << a->GetEdad() << endl;

	return 0;
}
