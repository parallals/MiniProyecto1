#include "ListArr.h"
#include <iostream>

using namespace std;

int main(){
    ListArr list1 = ListArr(6, 8);

    if(list1.is_empty() == false) cout << "No vacio" << endl;
    else cout << "Vacio" << endl;

    for(int i=0 ; i<8 ; i++){
        list1.insert_left(i);
    }

    cout << "tamanio:" << list1.size()<< endl;

    if(list1.is_empty() == false) cout << "No vacio" << endl;
    else cout << "Vacio" << endl;
    list1.print();
    return 0; 
}