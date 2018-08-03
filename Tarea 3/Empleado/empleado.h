
#include <iostream>
#include <string>

using namespace std;

class Empleado
{
private:
	string nombre;
	string apellido;
	double salario;

public:
	Empleado(string, string, double);

	void setNombre(string);
	void setApellido(string);
	void setSalario(double);

	string getNombre();
	string getApellido();
	double getSalario();

	double salarioAnual();

	void aumento();
};