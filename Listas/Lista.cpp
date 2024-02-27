#include <iostream>
using std::cout;
using std::endl;

#include "Lista.hpp"


Lista::Lista(int data){
	//Creando memoria de nodo;
	Nodo* nuevoNodo = new Nodo(data);  //Usamos el constructor de Nodo
	head = nuevoNodo; // Conectando la cabeza de la lista con el primer nodo               					  	
}


void Lista::mostrarLista(){
	Nodo *iter = head;
	while (iter != nullptr)
	{
		cout<<iter->data<<endl;
		iter =  iter->siguiente;
	}
}

void Lista::push_front(int data){
	Nodo *nuevoNodo = new Nodo(data); //Creacion un nuevo nodo

	nuevoNodo->siguiente = this->head; //Nuevo nodo apunta al antiguo primer elemento de la lista
	this->head = nuevoNodo;
}

void Lista::push_back(int data){
	Nodo *nuevoNodo= new Nodo(data);//creamos el nuevo nodo
	nuevoNodo->siguiente=nullptr;// Hacemos que el nuevo nodo apunte a la nada
	
	Nodo *iter = head;//creamos una auxiliar para no perder la cabeza
	while(iter->siguiente != nullptr ){//de la cabeza al ultimo elemento
		iter=iter->siguiente; //siguiente
	}
	
	iter->siguiente=nuevoNodo;//iter es el actual ultimo nodo, y lo siguiente es nuevo nodo	
} 

void Lista::pop_front(){
	Nodo *iter=head;//iter apunta al primer elemento
	this->head=head->siguiente;//la cabeza deja de ser y pasa al siguiente
	delete iter;//borra el que era la cabeza	
}

void Lista::pop_back(){

	Nodo *iter = head;
	while(iter != nullptr ){
		iter=iter->siguiente;
	}	
	delete iter;
}
