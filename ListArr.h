#ifndef ListArr_H
#define ListArr_h
#include <iostream>

class ListArr{
    private:
        struct Node(){ //Nodo con el array
            int b;
            int* vector;
            int usado;
            Node* next;
            Node(int b, int* vector, int usado, Node* next){
                this->b = b; this->vector = vector; this->usado = usado; this-> next = next;
            }
        }
        struct Node2(){ //Nodo de direcciones izquierda y derecha
            Node2* right;
            Node2* left;
            Node2(Node2* left,Node2* right,){
                this->left = left;this->right = right;
            }            
        }
        Node2* actual;
        Node* T;
        int counter;

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

