#include "ListArr.h"

void ListArr::crearArbol(int iterations, SummaryNode* nodo, int indData, DataNode* T){
    if(iterations > 2){
        nodo->left = new SummaryNode(iterations*tam/2);
        nodo->right = new SummaryNode(iterations*tam/2);
        crearArbol(iterations/2, nodo->left, indData, T);
        crearArbol(iterations/2, nodo->right, indData+(iterations/2), T);
    } else {
        for(int i=0 ; i<indData ; i++){
            T = T->next;
        }
        nodo->dataLeft = T;
        nodo->dataRight = T->next;

    }
}

ListArr::ListArr(){
    DataNode* T = nullptr;
    for(int i=0 ; i<cantidadNodos ; i++){
        T = new DataNode(tam, 0, new int[tam], T) ;
    }
    root = new SummaryNode(cantidadNodos*tam);
    crearArbol(cantidadNodos, root, 0, T);

}