#include <iostream>
using std::cout;
using std::endl;

#include "ListaDoble.hpp"


ListaDoble::ListaDoble(int data){
	//Creando memoria de nodo;
	Nodo* nuevoNodo = new Nodo(data);  //Usamos el constructor de Nodo
	head = nuevoNodo; // Conectando la cabeza de la lista con el primer nodo 
	Tail = nuevoNodo;              					  	
}


void ListaDoble::mostrarLista(){
	Nodo *iter = head;
	while (iter != nullptr)
	{
		cout<<iter->data<<endl;
		iter =  iter->siguiente;
	}
}

void ListaDoble::push_front(int data){
	Nodo *nuevoNodo = new Nodo(data); //Creacion un nuevo nodo
	
	nuevoNodo->siguiente = this->head; //Nuevo nodo apunta al antiguo primer elemento de la lista
	this->head->previo=nuevoNodo;//apunta la que era la cabeza a la nueva cabeza
	
	this->head = nuevoNodo;
}

void ListaDoble::push_back(int data){
	Nodo *nuevoNodo = new Nodo(data);
	

	this->Tail->siguiente = nuevoNodo;//apunta la cola(unico elemento) al nuevo nodo
	nuevoNodo->previo = this->Tail;//Nuevo nodo apunta a la cola 
	this->Tail = nuevoNodo;//la cola apunta al nuevo nodo
} 

void ListaDoble::pop_front(){
	Nodo *iter=head;
	this->head=head->siguiente;
	delete iter;	
}

void ListaDoble::pop_back(){

	Nodo *iter = Tail;
	this->Tail=Tail->previo;
	delete iter;
	
}