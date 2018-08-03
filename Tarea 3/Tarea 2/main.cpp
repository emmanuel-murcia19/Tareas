
#include <iostream>
#include <string>
#include "cuenta.h"

using namespace std;

int main() {

	cuenta c1(5745);
	cout << "\n";
	cuenta c2(-15);

	c1.abonar(1475);
	c1.cargar(754);
	c1.obtenerSaldo();

	system("pause");
}