#include "ListArrADT.h"

class ListArr : public ListArrADT{

    private:
        struct DataNode{
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
        };
        struct SummaryNode{
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
        };
        SummaryNode* root;
        int cantNodos;
        static int tamArr;
        void crearArbol(int iterations, SummaryNode* nodo, DataNode* T, int tamArr);
        void borrarArbol(int iterations, SummaryNode* nodo);
        void MoveRight(int indice, DataNode* nodo);
        void ActSummaryNode(int iterations, SummaryNode* nodo);
        void insertInDataNode(int iterations, int indice, int data, SummaryNode* nodo);
        DataNode* getFirstDataNode();
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
        ListArr(int tamArr); /* Contructor de ListArr, tamArr es equivalente al tamanio de los arreglos
                                             y cantNod cantidad de nodos de la lista, considerar la capacidad de
                                             ListArr equivalente a tamArr*cantNod */
        ~ListArr();                       /* Destructor de ListArr */
};