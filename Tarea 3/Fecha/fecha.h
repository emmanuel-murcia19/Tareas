
#include <iostream>

class fecha {
private:
	int mes;
	int dia;
	int año;

public:
	fecha(int, int, int);
	void setMes(int);
	void setDia(int);
	void setaño(int);
	int getDia();
	int getMes();
	int getAño();
	void printFecha();
};

