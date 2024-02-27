#include "Nodo.hpp"

class ListaDoble{
	public: 
		ListaDoble(int data); //constructor
		void mostrarLista();
		void push_front(int ); // Añadir por enfrente.
		void push_back(int );
		void pop_front();
		void pop_back();
	private: 
		Nodo *head = nullptr;
		Nodo *Tail = nullptr;	

	
};