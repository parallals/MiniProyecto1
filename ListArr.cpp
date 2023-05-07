#include "ListArr.h"
#include <iostream>

void ListArr::crearArbol(int cantNod, SummaryNode* &nodo, DataNode* T){
    int nLeft = cantNod - cantNod/2;
    if(nLeft > 1){
        nodo->left = new SummaryNode(nLeft*tamArr);
        crearArbol(nLeft, nodo->left, T);
    }else if(nLeft == 1){
        nodo->dataLeft = T;
    }
    int nRight = cantNod/2;
    for(int i=0 ; i<nLeft ; i++){
        T = T->next;
    }
    if(nRight > 1){
        nodo->right = new SummaryNode(nRight*tamArr);
        crearArbol(nRight, nodo->right, T);
    }else if(nRight == 1){
        nodo->dataRight = T;
    }
}

void ListArr::borrarArbol(SummaryNode* &nodo){
    if(nodo == nullptr) return;
    if(nodo->left != nullptr) borrarArbol(nodo->left);
    if(nodo->right != nullptr) borrarArbol(nodo->right); 
    delete nodo;
}

void ListArr::borrarTodo(SummaryNode* &nodo){
    if(nodo->left != nullptr) borrarTodo(nodo->left);
    if(nodo->right != nullptr) borrarTodo(nodo->right);
    if(nodo->dataLeft != nullptr) delete nodo->dataLeft;
    if(nodo->dataRight != nullptr) delete nodo->dataRight;
    delete nodo;
}

void ListArr::MoveRight(int indice, DataNode* nodo){
    for(int i=0 ; i<=nodo->n-indice ; i++){
        nodo->array[nodo->n-i] = nodo->array[nodo->n-i-1];
    }
}

void ListArr::ActSummaryNode(int cantNod, SummaryNode* nodo){
    if(cantNod > 3){
        ActSummaryNode(cantNod-cantNod/2, nodo->left);
        ActSummaryNode(cantNod/2, nodo->right);
        nodo->n = nodo->left->n + nodo->right->n;
        return;
    } else if(cantNod == 3){
        ActSummaryNode(cantNod-cantNod/2, nodo->left);
        nodo->n = nodo->left->n + nodo->dataRight->n;
        return;
    } else if(cantNod == 2){
        nodo->n = nodo->dataLeft->n + nodo->dataRight->n;
        return;
    } else {
        nodo->n = nodo->dataLeft->n;
        return;
    }
}

bool ListArr::insertInDataNode(int indice, int data, DataNode* &nodo) {
    if(nodo->n < nodo->N) {
        MoveRight(indice, nodo);
        nodo->array[indice] = data;
        nodo->n++;
        return false;
    } else {
        DataNode* nuevo = new DataNode(tamArr, nodo->next);
        nodo->next = nuevo;
        int aux = 1;
        for(int i=indice ; i<tamArr ; i++) {
            nuevo->array[aux] = nodo->array[i];
            nodo->n--;
            nuevo->n++;
            aux++;
        }
        nuevo->array[0] = data;
        nuevo->n++;
        return true;
    }
}

bool ListArr::insertInSummaryNode(int indice, int data, SummaryNode* nodo) {
    nodo->n++;
    if(nodo->left != nullptr) {
        if(indice <= nodo->left->n) {
            return insertInSummaryNode(indice, data, nodo->left);
        } else {
            indice = indice - nodo->left->n;
            if(nodo->right != nullptr) {
                return insertInSummaryNode(indice, data, nodo->right);
            } else {
                return insertInDataNode(indice, data, nodo->dataRight);
            }
        }
    } else {
        if(indice <= nodo->dataLeft->n) {
            return insertInDataNode(indice, data, nodo->dataLeft);
        } else {
            indice = indice - nodo->dataLeft->n;
            return insertInDataNode(indice, data, nodo->dataRight);
        }
    }
}

ListArr::DataNode* ListArr::getFirstDataNode(){
    SummaryNode* auxnodo = root;
    while(auxnodo->dataLeft == nullptr){
        auxnodo = auxnodo->left;
    }
    return auxnodo->dataLeft;
}

void ListArr::resize(){
    cantNodos++;
    DataNode* T = getFirstDataNode();
    borrarArbol(root);
    root = new SummaryNode(cantNodos*tamArr);
    crearArbol(cantNodos, root, T);
}

ListArr::ListArr(int tamArr){
    this->tamArr = tamArr;
    cantNodos = 1;
    DataNode* T = new DataNode(tamArr, nullptr);
    root = new SummaryNode(cantNodos*tamArr);
    crearArbol(cantNodos, root, T);
}

ListArr::~ListArr(){
    borrarTodo(root);
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
    DataNode* nodo = getFirstDataNode();
    if(nodo->n >= nodo->N){
        DataNode* nuevo = new DataNode(tamArr, nodo);
        cantNodos++;
        borrarArbol(root);
        root = new SummaryNode(cantNodos*tamArr);
        crearArbol(cantNodos, root, nuevo);
        nuevo->array[0] = data;
        nuevo->n++;
    } else {
        MoveRight(0, nodo);    
        nodo->array[0] = data;
        nodo->n++;
    }
    ActSummaryNode(cantNodos, root);
}

void ListArr::insert_right(int data){
    if(insertInSummaryNode(root->n, data, root)){
        resize();
        ActSummaryNode(cantNodos, root);
    }
}

void ListArr::insert(int data, int i){
    if(i>root->n || i<0){
        throw "Indice incorrecto";
    } else if(i == 0){
        insert_left(data);
    } else {
        if(insertInSummaryNode(i, data, root)){
            resize();
            ActSummaryNode(cantNodos, root);
        }
    }
}

void ListArr::print(){
    DataNode* nodo = getFirstDataNode();
    for(int i = 0; i<cantNodos ; ++i){
        for(int j = 0; j<nodo->n ; ++j){
            std::cout << nodo->array[j] << std::endl;
        }
        nodo = nodo->next;
    }
}

bool ListArr::find(int data){
    DataNode* nodo = getFirstDataNode();
    for(int i = 0; i<cantNodos ; ++i){
        for(int j = 0; j<nodo->n;++j){
            if(nodo->array[j] == data){
                return true;
            }
        }
        nodo = nodo->next;
    }
    return false;
}