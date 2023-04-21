#ifndef ListArr_H
#define ListArr_h
#include <iostream>

class ListArr{
    private:
        struct Node(){ //Nodo con el array
            int b; //capacidad maxima del array
            int* array; //array
            int usado; //cantidad usada
            Node(int b, int* array, int usado){
                this->b = b; this->array = array; this->usado = usado;
            }
            int counter = 0; //contador, pero por si acaso
        }
        struct Node2(){ //Nodo de direcciones izquierda y derecha
            Node2* right; //Puntero a Nodo de izquierda, que contiene a los otros nodos
            Node2* left; //Puntero a Nodo de Derecha, que contiene a los otros nodos
            Node* r; //Puntero a Nodo con array de Derecha 
            Node* l; //Puntero a Nodo con array de Izquierda
            Node2(Node2* left,Node2* right,/* Node* r, Node* l*/){ //No estoy muy segura si deben ir en el constructor, pero poner ahí por si acaso
                this->left = left;this->right = right;//this->r = r; this->l = l;
            }            
        }
        Node2* actual; //Puntero a Nodo actual
        Node* T; //Puntero a Top de Nodo

    public:
        virtual int size() = 0; //Retorna la cantidad de elementos almacenados en el ListArr
        virtual void insert_left(int v)=0; //Inserta un nuevo valor v a la izquierda del ListArr. Equivalentemente, inserta el valor v en el índice 0
        virtual void insert_right(int v)=0; // Inserta un nuevo valor v a la derecha del ListArr. Equivalentemente, inserta el valor v en el índice size()-1
        virtual void insert(int v, int i)=0; //Inserta un nuevo valor v en el índice i del ListArr.
        virtual void print()=0; //Imprime por pantalla todos los valores almacenados en el ListArr.
        virtual bool find(int v)=0; //Busca en el ListArr si el valor v se encuentra almacenado.
        virtual int delete_left()=0: //Elimina y retorna el elemento que está a la izquierda del ListArr.   
        virtual int delete_right()=0: //Elimina y retorna el elemento que está a la derecha del ListArr.             
};
#endif

