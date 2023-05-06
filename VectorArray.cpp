#include "VectorArray.h"

void VectorArray::resize() {
	N = N*2;
	int* nuevo = new int[N];
	for(int i=0 ; i<=n ; i++){
		nuevo[i] = V[i];
	}
	delete[] V;
	V = nuevo;
}

int VectorArray::at(int indice) {
	if(n > 0){
		return V[indice];
	} 
	cout << "VectorArray vacio, no se pudo retornar dato." << endl;
	return INT_MIN;
}

void VectorArray::insertAt(int indice, int data) {
	if(n >= N){
		resize();
	}
	if(indice>n){
		indice = n;
	}
	for(int i=0 ; i<n-indice ; i++){
		V[n-i] = V[n-1-i];
	}
	V[indice] = data;
	n++;
}

void VectorArray::insert(int data) {
	if(n >= N){
		resize();
	}
	for(int i=0 ; i<n ; i++){
		V[n-i] = V[n-1-i];
	}
	V[0] = data;
	n++;
}

bool VectorArray::empty() {
	if(n <= 0){
		return true;
	}
	return false;
}

int VectorArray::size() {
	return n;
}

VectorArray::VectorArray(){
	this->N = 10;
	this->n = 0;
	this->V = new int[N];
}

VectorArray::~VectorArray(){
	delete[] V;
}