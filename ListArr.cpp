#include "ListArr.h"
#include <iostream>

void ListArr::crearArbol(int cantNod, SummaryNode* nodo, DataNode* T){
    int nLeft = cantNod - cantNod/2;
    if(nLeft > 2){
        nodo->left = new SummaryNode(nLeft*tamArr);
        crearArbol(nLeft, nodo->left, T);
    }else if(nLeft == 2){
        nodo->dataLeft = T;
        nodo->dataRight = T->next;
    }else if(nLeft == 1){
        nodo->dataLeft = T;
    }
    int nRight = cantNod/2;
    if(nRight > 2){
        nodo->right = new SummaryNode(nRight*tamArr);
        for(int i=0 ; i<nLeft ; i++){
            T = T->next;
        }
        crearArbol(nRight, nodo->right, T);
    }else if(nRight == 2){
        nodo->dataLeft = T;
        nodo->dataRight = T->next;
    }else if(nRight == 1){
        nodo->dataLeft = T;
    }
}

void ListArr::borrarArbol(SummaryNode* nodo){
    if(nodo->left != nullptr){
        borrarArbol(nodo->left);
    }    
    if(nodo->right != nullptr){
        borrarArbol(nodo->right);
    }
    delete nodo;
    std::cout << ":c" << std::endl;
}

void ListArr::borrarTodo(SummaryNode* nodo){
    if(nodo->left != nullptr) borrarTodo(nodo->left);
    if(nodo->right != nullptr) borrarTodo(nodo->right);
    if(nodo->dataLeft != nullptr){
        delete[] nodo->dataLeft->array;
        delete nodo->dataLeft;
    }
    if(nodo->dataRight != nullptr){
        delete[] nodo->dataRight->array;
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

void ListArr::ActSummaryNode(int cantNod, SummaryNode* nodo){
    if(cantNod > 3){
        ActSummaryNode(cantNod-cantNod/2, nodo->left);
        ActSummaryNode(cantNod/2, nodo->right);
        nodo->n = nodo->left->n + nodo->right->n;
    } else if(cantNod == 3){
        ActSummaryNode(cantNod-cantNod/2, nodo->left);
        nodo->n = nodo->left->n + nodo->dataRight->n;
    } else if(cantNod == 2){
        nodo->n = nodo->dataLeft->n + nodo->dataRight->n;
    } else {
        nodo->n = nodo->dataLeft->n;
    }
}

void ListArr::insertInDataNode(int cantNod, int indice, int data, SummaryNode* nodo){
    if(cantNod > 3){
        if(indice < nodo->left->n){
            return insertInDataNode(cantNod-cantNod/2, indice, data, nodo->left);
        } else {
            return insertInDataNode(cantNod/2, indice-nodo->left->n, data, nodo->right);
        }
    } else if(cantNod == 3){
        if(indice < nodo->left->n){
            return insertInDataNode(cantNod-cantNod/2, indice, data, nodo->left);
        } else {
            indice = indice-nodo->dataLeft->n;
            if(nodo->dataRight->n < nodo->dataRight->N){
                MoveRight(indice, nodo->dataRight);    
                nodo->dataRight->array[indice] = data;
                nodo->dataRight->n++;
            } else {
                DataNode* nuevo = new DataNode(tamArr, nodo->dataRight->next);
                nodo->dataRight = nuevo;
                int aux = 1;
                for(int i=indice ; i<=tamArr ; i++){
                    nuevo->array[aux] = nodo->dataRight->array[i];
                    nodo->dataRight->n--;
                    nuevo->n++;
                    aux++;
                }
                nuevo->array[0] = data;
                nuevo->n++;
                resize();
            } 
        }
    } else if(cantNod == 2){
        if(indice < nodo->dataLeft->n){
            if(nodo->dataLeft->n < nodo->dataLeft->N){
                MoveRight(indice, nodo->dataLeft);    
                nodo->dataLeft->array[indice] = data;
                nodo->dataLeft->n++;
            } else {
                DataNode* nuevo = new DataNode(tamArr, nodo->dataLeft->next);
                nodo->dataLeft = nuevo;
                int aux = 1;
                for(int i=indice ; i<=tamArr ; i++){
                    nuevo->array[aux] = nodo->dataLeft->array[i];
                    nodo->dataLeft->n--;
                    nuevo->n++;
                    aux++;
                }
                nuevo->array[0] = data;
                nuevo->n++;
                resize();
            } 
        } else {
            indice = indice-nodo->dataLeft->n;
            if(nodo->dataRight->n < nodo->dataRight->N){
                MoveRight(indice, nodo->dataRight);    
                nodo->dataRight->array[indice] = data;
                nodo->dataRight->n++;
            } else {
                DataNode* nuevo = new DataNode(tamArr, nodo->dataRight->next);
                nodo->dataRight = nuevo;
                int aux = 1;
                for(int i=indice ; i<=tamArr ; i++){
                    nuevo->array[aux] = nodo->dataRight->array[i];
                    nodo->dataRight->n--;
                    nuevo->n++;
                    aux++;
                }
                nuevo->array[0] = data;
                nuevo->n++;
                resize();
            } 
        }
    } else {
        if(nodo->dataLeft->n < nodo->dataLeft->N){
            MoveRight(indice, nodo->dataLeft);    
            nodo->dataLeft->array[indice] = data;
            nodo->dataLeft->n++;
        } else {
            DataNode* nuevo = new DataNode(tamArr, nodo->dataLeft->next);
            nodo->dataLeft = nuevo;
            int aux = 1;
            for(int i=indice ; i<=tamArr ; i++){
                nuevo->array[aux] = nodo->dataLeft->array[i];
                nodo->dataLeft->n--;
                nuevo->n++;
                aux++;
            }
            nuevo->array[0] = data;
            nuevo->n++;
            resize();
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
    DataNode* T = new DataNode(tamArr, nullptr) ;
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
    insertInDataNode(cantNodos, 0, data, root);
    ActSummaryNode(cantNodos, root);
}

void ListArr::insert_right(int data){
    insertInDataNode(cantNodos, root->n, data, root);
    ActSummaryNode(cantNodos, root);
}

void ListArr::insert(int data, int i){
    insertInDataNode(cantNodos, i, data, root);
    ActSummaryNode(cantNodos, root);
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