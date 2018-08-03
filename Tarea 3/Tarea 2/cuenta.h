
#include <iostream>
#include <string>

using namespace std;


class cuenta {
public:
	int monto;
	cuenta(int);
	void abonar(int);
	void cargar(int);
	int obtenerSaldo();
};