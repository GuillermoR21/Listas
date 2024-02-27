#include <iostream>
#include "Lista.hpp"
#include "Listacc.hpp"
#include "ListaDoble.hpp"

using namespace::std;

int main(){
	cout<<"----------------"<<endl;
	cout<<"Creando Lista"<<endl;
	cout<<"----------------"<<endl;
	Lista l(2);  //Llamada al constructor de lista
	
	
	//l.mostrarLista();
	l.push_front(5);
	l.push_front(34);
	l.mostrarLista();
	
	cout<<"---------------"<<endl;
	l.pop_front();
	l.mostrarLista();
	
	cout<<"-----------"<<endl;
	
l.push_back(23);
l.mostrarLista();

cout<<"---------------"<<endl;


Listacc L2(3);
L2.push_front(54);
L2.mostrarLista();




return 0;
}

