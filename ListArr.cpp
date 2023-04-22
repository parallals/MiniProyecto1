#include "ListArr.h"

void ListArr::crearArbol(int iterations, SummaryNode* nodo, int indData, DataNode* T, int tamArr){
    if(iterations > 2){
        nodo->left = new SummaryNode(iterations*tamArr/2);
        nodo->right = new SummaryNode(iterations*tamArr/2);
        crearArbol(iterations/2, nodo->left, indData, T, tamArr);
        crearArbol(iterations/2, nodo->right, indData+(iterations/2), T, tamArr);
    } else {
        for(int i=0 ; i<indData ; i++){
            T = T->next;
        }
        nodo->dataLeft = T;
        nodo->dataRight = T->next;
    }
}

void ListArr::borrarArbol(int iterations, SummaryNode* nodo){
    if(iterations > 2){
        borrarArbol(iterations/2, nodo->left);
        borrarArbol(iterations/2, nodo->right);
    } else {
        delete nodo->dataLeft;
        delete nodo->dataRight;
    }
    delete nodo;
}

ListArr::ListArr(){
    DataNode* T = nullptr;
        int tamArr = 6;     // -BORRAR- tamanio de array por nodo.
    for(int i=0 ; i<cantidadNodos ; i++){
        T = new DataNode(tamArr, 0, new int[tamArr], T) ;
    }
    root = new SummaryNode(cantidadNodos*tamArr);
    crearArbol(cantidadNodos, root, 0, T, tamArr);
}

ListArr::~ListArr(){
    borrarArbol(cantidadNodos, root);
}

int ListArr::size(){
    return root->n;
}

bool ListArr::isEmpty(){
    if(root->n == 0){
        return true;
    }
    return false;
}

void ListArr::insert_left(int data){
    int i = cantidadNodos;
    SummaryNode* sumnodo = root;
    while(i > 2){
        sumnodo = sumnodo->left;
    }
    DataNode* datanodo = sumnodo->dataLeft;
    if(datanodo->n < datanodo->N){

    }
}

void ListArr::insert_right(int data){

}

void ListArr::insert(int data, int i){

}

void ListArr::print(){

}

bool ListArr::find(int data){

}