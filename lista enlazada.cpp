#include <iostream>
using namespace std;

struct nodo{
	int dato;
	nodo* siguiente;
	nodo* atras;
}*primero, *ultimo;

void insertarNodo();
void desplegar();
void desplegar_atras();

int main(){
	insertarNodo();
	insertarNodo();
	insertarNodo();
	insertarNodo();
	insertarNodo();
	cout<< "\n Lista primero al ultimo" <<endl;
	desplegar();
	cout<< "\n\n Lista ultimo al primero"<<endl;
	desplegar_atras();
	
	return 0;
}

void insertarNodo(){
	nodo* nuevo = new nodo();
	cout<< "Ingrese un Dato para el nuevo Nodo: ";
	cin>> nuevo->dato;
	
	if(primero==NULL){
		primero = nuevo;
		primero->siguiente = NULL;
		primero->atras = NULL;
		ultimo =primero;
	}else{
		ultimo->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimo;
		ultimo = nuevo;
	}
	cout<< "\n Nodo Ingresado\n\n";
}

void desplegar(){
	nodo* actual = new nodo();
	actual = primero;
	if(primero!=NULL){
		
		while(actual!=NULL){
			cout<<"\n" << actual->dato;
			actual = actual->siguiente;
		}
	}else{
		cout<< "\n La lista esta vacia";
	}
}
