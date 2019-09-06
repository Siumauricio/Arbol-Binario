#include "nodo.h"
#include <string.h>
#include <iostream>
using namespace std;

void insertar(nodo** raiz, char* cadena) {
	int k = 0;
	nodo* nuevo=new nodo();
	char pal;
	if (*raiz == nullptr)
	{
		nuevo->nombre = cadena;
		nuevo->siguiente = nullptr;
		nuevo->anterior = nullptr;
		(*raiz) = nuevo;
		k++;
	}
	else {
		
		if (k>2)
		{
			insertar(&(*raiz)->siguiente, cadena);
		}
		else {
			insertar(&(*raiz)->anterior, cadena);
		}

	}
}
void imprimir(nodo** raiz)
{
	if (*raiz == 0)
	{
		return;
	}
	std::cout << " [ " << (*raiz)->nombre << " ] ";
	imprimir(&(*raiz)->siguiente);
}
bool buscar(nodo** raiz,char*nombre) {
	nodo* actual = *raiz;
	if (*raiz == 0)
	{
		return false;
	}
	if (actual->nombre==nombre)
	{
		cout << "Se Encontro";
		return true;
	}
	cout << "[" << actual->nombre << "]";
	actual = actual->siguiente;
	return false;
}
