
#include <iostream>
#include <string>

using namespace std;

class factura
{
private:
	string codigoDePieza;
	string descripcionDePieza;
	int cantidad;
	int precio;
public:
	factura(string, string, int, int);

	void setCodigoDePieza(string);
	void setDescripcionDePieza(string);
	void setCantidadDeArticulos(int);
	void setPrecio(int);

	string getCodigoDePieza();
	string getDescripcionDePieza();
	int getCantidadDeArticulos();
	int getPrecio();

	void getMontoAFacturar();
};