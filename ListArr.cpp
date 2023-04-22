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
        std::cout << "flag" << std::endl;
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

ListArr::DataNode* ListArr::SearchSummaryNode(int iterations, int indice, SummaryNode* nodo){
    if(iterations > 2){
        if(indice <= nodo->left->n){
            return SearchSummaryNode(iterations/2, indice, nodo->left);
        } else {
            return SearchSummaryNode(iterations/2, indice-nodo->left->n, nodo->right);
        }
    } else {
        if(indice <= nodo->dataLeft->n){
            MoveRight(indice, nodo->dataLeft);
            return nodo->dataLeft;
        } else {
            MoveRight(indice-nodo->dataRight->n, nodo->dataRight);
            return nodo->dataRight;
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
        DataNode* datanodo = SearchSummaryNode(cantNod, 0, root);
        datanodo->array[0] = data;
        datanodo->n++;
        ActSummaryNode(cantNod, root);
    }
}

void ListArr::insert_right(int data){

}

void ListArr::insert(int data, int i){

}

void ListArr::print(){

}

bool ListArr::find(int data){
 return true;
}