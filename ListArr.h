#ifndef ListArr_H
#define ListArr_H

class ListArr{
    private:
        struct DataNode{            // -BORRAR- Nodo con el array.
            int N;                  // -BORRAR- Capacidad maxima del array
            int n;                  // -BORRAR- Cantidad usada.
            int* array;             // -BORRAR- Array dinamico.
            DataNode* next;
            DataNode(int N, int n, int* array, DataNode* next){
                this->N = N;
                this->array = array;
                this->n = n;
                this->next = next;
            }
        };
        struct SummaryNode{         // -BORRAR- Nodo de direcciones izquierda y derecha.
            int N;                  // -BORRAR- Capacidad maxima.
            int n;                  // -BORRAR- Cantidad usada.
            SummaryNode* right;     // -BORRAR- Puntero a Nodo de izquierda, que contiene a los otros nodos.
            SummaryNode* left;      // -BORRAR- Puntero a Nodo de Derecha, que contiene a los otros nodos.
            DataNode* dataLeft;            // -BORRAR- Puntero a Nodo con array de Izquierda.
            DataNode* dataRight;            // -BORRAR- Puntero a Nodo con array de Derecha.
            SummaryNode(int N){ // -BORRAR- En caso de no haber algun node se asigna Nullptr.
                this->N = N;
                n = 0;
                right = nullptr;
                left = nullptr;
                dataLeft = nullptr;
                dataRight = nullptr;
            }            
        };
        int cantidadNodos = 8; // numero de nodos de datos.
        int tam = 6; // tamanio de array por nodo.
        SummaryNode* root;    // -BORRAR- Puntero a Nodo root.
        void crearArbol(int iterations, SummaryNode* nodo, int indData, DataNode* T);

    public:
        virtual int size() = 0;                      // Retorna la cantidad de elementos almacenados en el ListArr.
        virtual void insert_left(int data) = 0;      // Inserta un nuevo valor data a la izquierda del ListArr. Equivalentemente, inserta el valor data en el índice 0.
        virtual void insert_right(int data) = 0;     // Inserta un nuevo valor data a la derecha del ListArr. Equivalentemente, inserta el valor data en el índice size()-1.
        virtual void insert(int data, int i) = 0;    // Inserta un nuevo valor data en el índice i del ListArr.
        virtual void print() = 0;                    // Imprime por pantalla todos los valores almacenados en el ListArr.
        virtual bool find(int data) = 0;             // Busca en el ListArr si el valor data se encuentra almacenado.
        virtual int delete_left() = 0;               // Elimina y retorna el elemento que está a la izquierda del ListArr.   
        virtual int delete_right() = 0;              // Elimina y retorna el elemento que está a la derecha del ListArr.             
        ListArr();
        ~ListArr();
};

#endif