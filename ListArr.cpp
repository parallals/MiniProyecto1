#include "ListArr.h"
#include <iostream>

void ListArr::crearArbol(int iterations, SummaryNode* nodo, DataNode* T, int tamArr){
    if(iterations > 2){
        nodo->left = new SummaryNode(iterations*tamArr/2);
        nodo->right = new SummaryNode(iterations*tamArr/2);
        crearArbol(iterations/2, nodo->left, T, tamArr);
        for(int i=0 ; i<iterations/2 ; i++){
            T = T->next;
        }
        crearArbol(iterations/2, nodo->right, T, tamArr);
    } else {
        nodo->dataLeft = T;
        nodo->dataRight = T->next;
    }
}

void ListArr::borrarArbol(int iterations, SummaryNode* nodo){
    if(iterations > 2){
        borrarArbol(iterations/2, nodo->left);
        borrarArbol(iterations/2, nodo->right);
    } else {
        delete[] nodo->dataLeft->array;
        delete[] nodo->dataRight->array;
        delete nodo->dataLeft;
        delete nodo->dataRight;
    }
    delete nodo;
}

void ListArr::MoveRight(int indice, DataNode* nodo){
    if(nodo->n >= nodo->N){
        MoveRight(0, nodo->next);
        nodo->next->array[0] = nodo->array[nodo->n-1];
        nodo->next->n++;
        nodo->n--;
    } 
    for(int i=0 ; i<nodo->n-indice ; i++){
        nodo->array[nodo->n-i] = nodo->array[nodo->n-i-1];
    }
}

void ListArr::ActSummaryNode(int iterations, SummaryNode* nodo){
    if(iterations > 2){
        ActSummaryNode(iterations/2, nodo->left);
        ActSummaryNode(iterations/2, nodo->right);
        nodo->n = nodo->left->n + nodo->right->n;
    } else {
        nodo->n = nodo->dataLeft->n + nodo->dataRight->n;
    } 
}

void ListArr::insertInDataNode(int iterations, int indice, int data, SummaryNode* nodo){
    if(iterations > 2){
        if(indice <= nodo->left->n){
            return insertInDataNode(iterations/2, indice, data, nodo->left);
        } else {
            return insertInDataNode(iterations/2, indice-nodo->left->n, data, nodo->right);
        }
    } else {
        if(indice <= nodo->dataLeft->n){
            MoveRight(indice, nodo->dataLeft);    
            nodo->dataLeft->array[indice] = data;
            nodo->dataLeft->n++;
        } else {
            MoveRight(indice-nodo->dataRight->n, nodo->dataRight);    
            nodo->dataRight->array[indice-nodo->dataLeft->n] = data;
            nodo->dataRight->n++;
        }
    }
}

ListArr::DataNode* ListArr::getFirstDataNode(){
    SummaryNode* auxnodo = root;
    int i = cantNod;
    while(i > 2){
        auxnodo = auxnodo->left;
        i = i/2;
    }
    return auxnodo->dataLeft;
}

ListArr::ListArr(int tamArr, int cantNod){
    this->cantNod = cantNod;
    DataNode* T = nullptr;
    for(int i=0 ; i<cantNod ; i++){
        T = new DataNode(tamArr, T) ;
    }
    root = new SummaryNode(cantNod*tamArr);
    crearArbol(cantNod, root, T, tamArr);
}

ListArr::~ListArr(){
    borrarArbol(cantNod, root);
}

int ListArr::size(){
    return root->n;
}

bool ListArr::is_empty(){
    if(root->n == 0){
        return true;
    }
    return false;
}

void ListArr::insert_left(int data){
    if(root->n < root->N){
        insertInDataNode(cantNod, 0, data, root);
        ActSummaryNode(cantNod, root);
    }
    // Tirar Excepcion.
}

void ListArr::insert_right(int data){
    if(root->n < root->N){
        insertInDataNode(cantNod, root->n, data, root);
        ActSummaryNode(cantNod, root);
    }
    // Tirar Excepcion.
}

void ListArr::insert(int data, int i){
    if(root->n < root->N){
        insertInDataNode(cantNod, i, data, root);
        ActSummaryNode(cantNod, root);
    }
    // Tirar Excepcion.
}

void ListArr::print(){
    DataNode* nodo = getFirstDataNode();
    for(int i = 0; i<cantNod ; ++i){
        for(int j = 0; j<nodo->n ; ++j){
            std::cout << nodo->array[j] << std::endl;
        }
        nodo = nodo->next;
    }
}

bool ListArr::find(int data){
    DataNode* nodo = getFirstDataNode();
    for(int i = 0; i<cantNod ; ++i){
        for(int j = 0; j<nodo->n;++j){
            if(nodo->array[j] == data){
                return true;
            }
        }
        nodo = nodo->next;
    }
    return false;
}