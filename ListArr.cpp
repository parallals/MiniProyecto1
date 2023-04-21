#include "ListArr.h"

ListArr::ListArr(){
    int cap = 8; // numero de nodos de datos.
    int tam = 6; // tamanio array.
    T = nullptr;
    for(int i=0 ; i<cap ; i++){
        T = new DataNode(tam, 0, new int[tam], T);
    }
}