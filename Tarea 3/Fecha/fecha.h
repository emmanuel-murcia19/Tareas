
#include <iostream>

class fecha {
private:
	int mes;
	int dia;
	int a�o;

public:
	fecha(int, int, int);
	void setMes(int);
	void setDia(int);
	void seta�o(int);
	int getDia();
	int getMes();
	int getA�o();
	void printFecha();
};

