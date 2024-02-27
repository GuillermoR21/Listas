#ifndef NODO
#define NODO
	class Nodo{
		public:
			//funciones 
			Nodo(int );  //constructor
	
			//miembros de datos
			int data;	
			Nodo *siguiente = nullptr;
			Nodo *previo= nullptr;
		
	};
#endif

