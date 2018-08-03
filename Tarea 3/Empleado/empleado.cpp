
#include "empleado.h"

Empleado::Empleado(string nombre, string apellido, double salario) {
	setNombre(nombre);

	setApellido(apellido);

	setSalario(salario);
}

void Empleado::setNombre(string nombre)
{
	this->nombre = nombre;
}

void Empleado::setApellido(string apellido) {
	this->apellido = apellido;
}

void Empleado::setSalario(double salario) {
	this->salario = salario;
}

string Empleado::getNombre() {
	return this->nombre;
}

string Empleado::getApellido() {
	return this->apellido;
}

double Empleado::getSalario() {
	return this->salario;
}

double Empleado::salarioAnual() {
	return this->salario * 12;
}

void Empleado::aumento() {
	this->salario = this->salario + (this->salario * 0.10);
}