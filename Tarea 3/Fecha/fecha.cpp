
#include "fecha.h"
#include <iostream>
#include <string>

using namespace std;

fecha::fecha(int dia, int mes, int a�o) {
	setDia(dia);
	setMes(mes);
	seta�o(a�o);
}

void fecha::seta�o(int anio) {
	this->a�o = anio;
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

int fecha::getA�o() {
	return this->a�o;
}

int fecha::getDia() {
	return this->dia;
}
int fecha::getMes() {
	return this->mes;
}

void fecha::printFecha() {
	cout << getDia() << "/" << getMes() << "/" << getA�o();
}