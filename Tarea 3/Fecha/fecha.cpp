
#include "fecha.h"
#include <iostream>
#include <string>

using namespace std;

fecha::fecha(int dia, int mes, int año) {
	setDia(dia);
	setMes(mes);
	setaño(año);
}

void fecha::setaño(int anio) {
	this->año = anio;
}

void fecha::setDia(int dia) {
	this->dia = dia;
}

void fecha::setMes(int mes) {
	if (mes > 0 && mes <= 12)
	{
		this->mes = mes;
	}
	else
	{
		cout << "Mes invalido.";
	}
}

int fecha::getAño() {
	return this->año;
}

int fecha::getDia() {
	return this->dia;
}
int fecha::getMes() {
	return this->mes;
}

void fecha::printFecha() {
	cout << getDia() << "/" << getMes() << "/" << getAño();
}