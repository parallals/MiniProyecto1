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
            nodo->dataRight->array[indice-nodo->dataRight->n] = data;
            nodo->dataRight->n++;
        }
    }
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

    SummaryNode* sumnodo = root;
    int i = cantNod;   
    while(i > 2){ 
        sumnodo = sumnodo->right;
        i = i/2; //llegar a la última rama
    }
    DataNode* datanodo = sumnodo->dataRight;
    if(datanodo->n != datanodo->N){
        datanodo->array[datanodo->n] = data;
    }
    else{
        std::cout << "Is full" << std::endl;
    }
}

void ListArr::insert(int data, int i){

}

void ListArr::print(){
    SummaryNode* sumnodo = root;
    int i = cantNod;
    while(i > 2){
        sumnodo = sumnodo->left;
        i = i/2;
    }
    DataNode* datanodo = sumnodo->dataLeft;
    for(int i = 0; i<sumnodo->N ; ++i){
        for(int j = 0; j<datanodo->n;++j){
            std::cout << " " << datanodo->array[j] << std::endl;
            }
        datanodo = datanodo->next;
    }
}

bool ListArr::find(int data){

    SummaryNode* sumnodo = root;
    int i = sumnodo->N;
    while(i > 2){
        sumnodo = sumnodo->left;
        i = i/2;
    }
    DataNode* datanodo = sumnodo->dataLeft;
    for(int i = 0; i<sumnodo->N ; ++i){
        for(int j = 0; j<datanodo->N;++j){
            if(datanodo->array[j] == data){
                return true;
            }
        }
        datanodo = datanodo->next;
    }
    return false;
}