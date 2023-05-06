#include "VectorADT.h"

class VectorList : public VectorADT {
private:
    struct Node {
        int data; 		// Almacena un dato.
        Node* next; 	// Puntero al siguiente nodo.
        Node(int data, Node* next = nullptr) { // Constructor del nodo.
            this->data = data;
            this->next = next;
        }
    };
    Node* H;	// Puntero Header (Apunta al primer elemento del VectorList).
    int count;	// Almacena el indice de nuestra lista.

public:
    int at(int indice);                 // Retorna el valor que se encuentra en esa posicion del VectorList.
    void insertAt(int indice,int data); // Ingresar un valor en la posicion entregada de VectorList.
    void insert(int data);              // Ingresar un valor al inicio del VectorList.
    bool empty();                       // Retorna true si el VectorList esta vacio y false en caso contrario.
    int size();                         // Retorna el tamano del VectorList.
    VectorList(); 		                // Destructor del VectorList.
    ~VectorList(); 	                    // Contructor del VectorList.
};