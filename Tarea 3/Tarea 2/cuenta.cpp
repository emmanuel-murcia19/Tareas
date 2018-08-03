
#include <iostream>
#include <string>
#include "cuenta.h"

using namespace std;

cuenta::cuenta(int monto) {
	if (monto <= 0) {
		monto == 0;
		cout << "Saldo no valido." << endl;
	}
	else {
		monto = monto;
	}
}

void cuenta::abonar(int bono) {
	this->monto += bono;
}

void cuenta::cargar(int retiro) {
	if (retiro > monto) {
		this->monto = monto;
		cout << "Fondos Insuficientes, Retiro no posible";
	}
	else {
		this->monto -= retiro;
	}
}

int cuenta::obtenerSaldo() {
	return monto;
}
