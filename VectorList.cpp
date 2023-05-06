#include "VectorList.h"

int VectorList::at(int indice) {
	if(count > 0){
		if(indice >= count){
			indice = count-1;
		}
		Node* aux = H;
		for(int i=0 ; i<indice ; i++){
			aux = aux->next;
		}
		return aux->data;
	}
	cout << "VectorList vacio, no se pudo retornar dato." << endl;
	return INT_MIN;
}

void VectorList::insertAt(int indice, int data) {
	if(count > 0){
		if(indice > count){
			indice = count;
		}
		Node* aux = H;
		for(int i=0 ; i<indice-1 ; i++){
			aux = aux->next;
		}
		Node* nuevo = new Node(data, aux->next);
		aux->next = nuevo;
	} else {		
		Node* nuevo = new Node(data, H);
		H = nuevo;
	}
	count++;
	
}

void VectorList::insert(int data) {
	Node* nuevo = new Node(data, H);
	H = nuevo;
	count++;
}

bool VectorList::empty() {
	if(count <= 0){
		return true;
	}
	return false;
}

int VectorList::size() {
	return count;
}

VectorList::VectorList() {
    H = nullptr;
    count = 0;
}

VectorList::~VectorList() {
    Node* current = H;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
    H = nullptr;
    count = 0;
}