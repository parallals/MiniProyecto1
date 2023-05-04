#include "ListArr.h"
#include <iostream>

using namespace std;

int main(){
    ListArr* list1 = new ListArr(6);

    if(list1->is_empty() == false) cout << "No vacio" << endl;
    else cout << "Vacio" << endl;
    
    for(int i=0 ; i<8 ; i++){
        list1->insert_left(i+1);
        cout << i+1 << endl;
    }
    for(int i=0 ; i<8 ; i++){
        list1->insert_left(i+10);
        cout << i+10 << endl;
    }
    list1->insert(9 ,8);
    list1->insert_right(0);

    list1->print();
    cout << "tamanio:" << list1->size()<< endl;
    if(list1->is_empty() == false) cout << "No vacio" << endl;
    else cout << "Vacio" << endl;
    if(list1->find(9) == false) cout << "9 no esta almacenado" << endl;
    else cout << "9 esta almacenado" << endl;
    if(list1->find(18) == false) cout << "18 no esta almacenado" << endl;
    else cout << "18 esta almacenado" << endl;

    delete list1;
    return 0; 
}
// g++ -o TestListArrFunctions TestListArrFunctions.cpp ListArr.cpp
// ./TestListArrFunctions