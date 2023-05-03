#ifndef ListArrADT_H
#define ListArrADT_H

class ListArrADT{
    public:
        virtual int size() = 0;                       /* Retorna la cantidad de elementos almacenados en el ListArr. */
        virtual bool is_empty() = 0;                  /* Retorna true si ListArr esta vacia, caso contrario, false. */
        virtual void insert_left(int data) = 0;       /* Inserta un nuevo valor data a la izquierda del ListArr. 
                                                         Equivalentemente, inserta el valor data en el índice 0. */
        virtual void insert_right(int data) = 0;      /* Inserta un nuevo valor data a la derecha del ListArr.
                                                         Equivalentemente, inserta el valor data en el índice size()-1. */
        virtual void insert(int data, int i) = 0;     /* Inserta un nuevo valor data en el índice i del ListArr. */
        virtual void print() = 0;                     /* Imprime por pantalla todos los valores almacenados en el ListArr. */
        virtual bool find(int data) = 0;              /* Busca en el ListArr si el valor data se encuentra almacenado. */
};

#endif