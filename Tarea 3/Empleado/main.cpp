
#include "empleado.h"
#include <iostream>

int main()
{
	Empleado e("Emmanuel", "Hernandez",25000);

	std::cout << e.salarioAnual() << endl;

	e.aumento();

	std::cout << e.salarioAnual() << endl;

	system("pause");
}