#ifndef ListArr_H
#define ListArr_H

class ListArr{
    private:
        struct DataNode{            // -BORRAR- Nodo con el array.
            int N;                  // -BORRAR- Capacidad maxima del array
            int n;                  // -BORRAR- Cantidad usada.
            int* array;             // -BORRAR- Array dinamico.
            DataNode* next;
            DataNode(int N, DataNode* next){
                this->N = N;
                n = 0;
                array = new int[N];
                this->next = next;
            }
        };
        struct SummaryNode{         // -BORRAR- Nodo de direcciones izquierda y derecha.
            int N;                  // -BORRAR- Capacidad maxima.
            int n;                  // -BORRAR- Cantidad usada.
            SummaryNode* right;     // -BORRAR- Puntero a Nodo de izquierda, que contiene a los otros nodos.
            SummaryNode* left;      // -BORRAR- Puntero a Nodo de Derecha, que contiene a los otros nodos.
            DataNode* dataLeft;     // -BORRAR- Puntero a Nodo con array de Izquierda.
            DataNode* dataRight;    // -BORRAR- Puntero a Nodo con array de Derecha.
            SummaryNode(int N){     // -BORRAR- En caso de no haber algun node se asigna Nullptr.
                this->N = N;
                n = 0;
                right = nullptr;
                left = nullptr;
                dataLeft = nullptr;
                dataRight = nullptr;
            }            
        };
        SummaryNode* root;          // -BORRAR- Puntero a Nodo root.
        int cantNod;      // -BORRAR- numero de nodos de datos.
        void crearArbol(int iterations, SummaryNode* nodo, DataNode* T, int tamArr);
        void borrarArbol(int iterations, SummaryNode* nodo);
        void MoveRight(int indice, DataNode* nodo);
        void ActSummaryNode(int iterations, SummaryNode* nodo);
        void insertInDataNode(int iterations, int indice, int data, SummaryNode* nodo);
        DataNode* getFirstDataNode();
    public:
        int size();                      // Retorna la cantidad de elementos almacenados en el ListArr.
        bool is_empty();                 // Retorna true si ListArr esta vacia, caso contrario, false.
        void insert_left(int data);      // Inserta un nuevo valor data a la izquierda del ListArr. Equivalentemente, inserta el valor data en el índice 0.
        void insert_right(int data);     // Inserta un nuevo valor data a la derecha del ListArr. Equivalentemente, inserta el valor data en el índice size()-1.
        void insert(int data, int i);    // Inserta un nuevo valor data en el índice i del ListArr.
        void print();                    // Imprime por pantalla todos los valores almacenados en el ListArr.
        bool find(int data);             // Busca en el ListArr si el valor data se encuentra almacenado.
        int delete_left();               // Elimina y retorna el elemento que está a la izquierda del ListArr.   
        int delete_right();              // Elimina y retorna el elemento que está a la derecha del ListArr.             
        ListArr(int tamArr, int cantNod);
        ~ListArr();
};

#endif