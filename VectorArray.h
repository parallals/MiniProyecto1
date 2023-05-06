#include "VectorADT.h"

class VectorArray : public VectorADT {
private:
	int N;			// Almacena la capacidad del Array.
	int n;			// Almacena el tamano del VectorArray (cantidad de elementos almacenados).
	int* V;			// Puntero al Array que almacenara los datos.
	void resize();	// Aumenta la capacidad el arreglo dinamico.
public:
	int at(int indice); 				// Retorna el valor que se encuentra en esa posicion del VectorArray.
	void insertAt(int indice,int data); // Ingresar un valor en la posicion entregada del VectorArray.
	void insert(int data); 				// Ingresar un valor al inicio del VectorArray.
	bool empty(); 						// Retorna true si el VectorArray esta vacio y false en caso contrario.
	int size(); 						// Retorna el tamano del VectorArray.
	VectorArray(); 						// Constructor de VectorArray.
	~VectorArray(); 					// Destructor de VectorArray.
};