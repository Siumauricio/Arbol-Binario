

struct nodo {
	char* nombre;
	nodo* anterior;
	nodo* siguiente;

	nodo() {
		 anterior = nullptr;
		 siguiente = nullptr;
	}

};
//si es igual retorna 0
//si el 1 es menor que el segundo retorna -1
//si el 1 es mayor que el segundo retorna 1
void insertar(nodo**, char*);
void imprimir(nodo**);
bool buscar(nodo**, char*);
void eliminar(nodo**, 
