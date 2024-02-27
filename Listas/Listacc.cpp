#include <iostream>
using std::cout;
using std::endl;

#include "Listacc.hpp"


Listacc::Listacc(int data){
	//Creando memoria de nodo;
	Nodo* nuevoNodo = new Nodo(data);  //Usamos el constructor de Nodo
	head = nuevoNodo;
	Tail = nuevoNodo; // Conectando la cabeza de la lista con el primer nodo               					  	
}


void Listacc::mostrarLista(){
	Nodo *iter = head;
	while (iter != nullptr)
	{
		cout<<iter->data<<endl;
		iter =  iter->siguiente;
	}
}

void Listacc::push_front(int data){
	Nodo *nuevoNodo = new Nodo(data); //Creacion un nuevo nodo

	nuevoNodo->siguiente = this->head; //Nuevo nodo apunta al antiguo primer elemento de la lista
	this->head = nuevoNodo;
}

void Listacc::push_back(int data){
	Nodo *nuevoNodo = new Nodo(data); //Creacion un nuevo nodo
	

	this->Tail->siguiente = nuevoNodo; //Nuevo nodo apunta al antiguo primer elemento de la lista
	this->Tail = nuevoNodo;
}

void Listacc::pop_front(){
	Nodo *iter=head;
	this->head=head->siguiente;
	delete iter;	
}

void Listacc::pop_back(){

	Nodo *iter = head;
	while(iter != nullptr ){
		iter=iter->siguiente;
	}	
	delete iter;
}
}