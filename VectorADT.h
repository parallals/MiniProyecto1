#ifndef VectorADT_H
#define VectorADT_H

#include <iostream>
#include <string.h>
#include <limits.h>

using namespace std;

// Clase abstracta para una ADT de Vector.
class VectorADT{
public:
	virtual int at(int) = 0; 			// Retorna el valor que se encuentra en esa posicion.
	virtual void insertAt(int,int) = 0; // Ingresar un valor en la posicion entregada.
	virtual void insert(int) = 0; 		// Ingresar un valor al inicio del vector.
	virtual bool empty() = 0; 			// Retorna true si el vector esta vacio y false en caso contrario.
	virtual int size() = 0; 			// Retorna el tamano del vector.
};

#endif