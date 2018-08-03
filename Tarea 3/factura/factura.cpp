#include "factura.h"

factura::factura(string producto, string descripcion, int cantidad, int precio) {
	setCodigoDePieza(producto);
	setDescripcionDePieza(descripcion);
	setCantidadDeArticulos(cantidad);
	setPrecio(precio);
}

void factura::setCodigoDePieza(string producto) {
	this->codigoDePieza = producto;
}

void factura::setDescripcionDePieza(string descripcion) {
	this->descripcionDePieza = descripcion;
}

void factura::setCantidadDeArticulos(int cantidad) {
	this->cantidad = cantidad;
}

void factura::setPrecio(int precio) {
	this->precio = precio;
}

string factura::getCodigoDePieza() {
	return this->codigoDePieza;
}

string factura::getDescripcionDePieza() {
	return this->descripcionDePieza;
}

int factura::getCantidadDeArticulos() {
	return this->cantidad;
}

int factura::getPrecio() {
	return this->precio;
}

void factura::getMontoAFacturar() {
	cout << "CODIGO DEL PRODUCTO: " + getCodigoDePieza() << endl;
	cout << "DESCRIPCION: " + getDescripcionDePieza() << endl;
	cout << "CANTIDAD: " + getCantidadDeArticulos() << endl;
	cout << "PRECIO UNITARIO: " + getPrecio() << endl;
	cout << "TOTAL: " + (getCantidadDeArticulos() * getPrecio());
}