#include <iostream>
#include "nodo.h"

int main() {
	nodo* raiz = 0;

	nodo* nuevo = new nodo();
	 char n = 'a';
	nuevo->nombre ="maurc";
	insertar(&raiz, nuevo->nombre);

	insertar(&raiz, nuevo->nombre);
	imprimir(&raiz);
	return 0;
}
