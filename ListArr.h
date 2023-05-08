#include "ListArrADT.h"

class ListArr : public ListArrADT{

    private:
        class DataNode{
            public:
                int N;
                int n;
                int* array;
                DataNode* next;
                DataNode(int N, DataNode* next){
                    this->N = N;
                    n = 0;
                    array = new int[N];
                    this->next = next;
                }
                ~DataNode(){
                    delete[] array;
                    next = nullptr;
                }
        };
        class SummaryNode{
            public:
                int N;
                int n;
                SummaryNode* right;
                SummaryNode* left;
                DataNode* dataLeft;
                DataNode* dataRight;
                SummaryNode(int N){
                    this->N = N;
                    n = 0;
                    right = nullptr;
                    left = nullptr;
                    dataLeft = nullptr;
                    dataRight = nullptr;
                }
                ~SummaryNode(){
                    right = nullptr;
                    left = nullptr;
                    dataLeft = nullptr;
                    dataRight = nullptr;
                }
        };
        SummaryNode* root;
        DataNode* Top;
        int cantNodos;
        int tamArr;
        
        void crearArbol(int cantNod, SummaryNode* &nodo, DataNode* T);
        void borrarArbol(SummaryNode* &nodo);
        void borrarTodo(SummaryNode* &nodo);
        void MoveRight(int indice, DataNode* nodo);
        bool insertInSummaryNode(int indice, int data, SummaryNode* nodo);
        bool insertInDataNode(int indice, int data, DataNode* &nodo);
        void resize();

        
    public:
        int size();                       /* Retorna la cantidad de elementos almacenados en el ListArr. */
        bool is_empty();                  /* Retorna true si ListArr esta vacia, caso contrario, false. */
        void insert_left(int data);       /* Inserta un nuevo valor data a la izquierda del ListArr. 
                                             Equivalentemente, inserta el valor data en el índice 0. */
        void insert_right(int data);      /* Inserta un nuevo valor data a la derecha del ListArr.
                                             Equivalentemente, inserta el valor data en el índice size()-1. */
        void insert(int data, int i);     /* Inserta un nuevo valor data en el índice i del ListArr. */
        void print();                     /* Imprime por pantalla todos los valores almacenados en el ListArr. */
        bool find(int data);              /* Busca en el ListArr si el valor data se encuentra almacenado. */
        ListArr(int tamArr);              /* Contructor de ListArr, tamArr es equivalente al tamanio de los arreglos
                                             y cantNod cantidad de nodos de la lista, considerar la capacidad de
                                             ListArr equivalente a tamArr*cantNod */
        ~ListArr();                       /* Destructor de ListArr */
};