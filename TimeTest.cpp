#include "ListArr.h"
#include "VectorArray.h"
#include "VectorList.h"
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int TestInsertLeftListArr(int tamArray, int elementos){
	ListArr* lista = new ListArr(tamArray);
	auto start = high_resolution_clock::now();
	for(int i=0 ; i<elementos ; ++i){
        lista->insert_left(i);
    }
	auto end = high_resolution_clock::now();
	delete lista;
	auto duration = duration_cast<milliseconds>(end - start);
 	return duration.count();	
} 

int TestInsertRightListArr(int tamArray, int elementos){
	ListArr* lista = new ListArr(tamArray);
	auto start = high_resolution_clock::now();
	for(int i = 0; i<elementos ; ++i){
   		lista->insert_right(i);
   	}
	auto end = high_resolution_clock::now();
	delete lista;
	auto duration = duration_cast<milliseconds>(end - start);
	return duration.count();
}

int TestFindListArr(ListArr* &lista){
	auto start = high_resolution_clock::now();
	lista->find(6);
	auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);
	return duration.count();
}

int TestInsertLeftVectorArray(int elementos){
	VectorArray* vector = new VectorArray();   
	auto start = high_resolution_clock::now();
	for(int i = 0; i<elementos ; ++i){
   		vector->insert(i);
   	}
	auto end = high_resolution_clock::now();
	delete vector;
	auto duration = duration_cast<milliseconds>(end - start);
	return duration.count();
}

int TestInsertRightVectorArray(int elementos){
	VectorArray* vector = new VectorArray();   
	auto start = high_resolution_clock::now();
	for(int i = 0; i<elementos ; ++i){
   		vector->insertAt(50000001, i);
   	}
	auto end = high_resolution_clock::now();
	delete vector;
	auto duration = duration_cast<milliseconds>(end - start);
	return duration.count();
}

int TestInsertLeftVectorList(int elementos){
	VectorList* vector = new VectorList();   
	auto start = high_resolution_clock::now();
	for(int i = 0; i<elementos ; ++i){
   		vector->insert(i);
   	}
	auto end = high_resolution_clock::now();
	delete vector;
	auto duration = duration_cast<milliseconds>(end - start);
	return duration.count();
}

int TestInsertRightVectorList(int elementos){
	VectorList* vector = new VectorList();   
	auto start = high_resolution_clock::now();
	for(int i = 0; i<elementos ; ++i){
   		vector->insertAt(50000001, i);
   	}
	auto end = high_resolution_clock::now();
	delete vector;
	auto duration = duration_cast<milliseconds>(end - start);
	return duration.count();
}


int main(){
	cout<<"----------------------------------------------------------------------------------"<<endl;
	cout<<"Todas los siguientes valores son el promedio de veinte veces el mismo experimento:"<<endl;
	cout<<"----------------------------------------------------------------------------------"<<endl;
	cout << endl;
	cout<<"ListArr:"<<endl;
	cout << endl;
    int dur1k = 0 ; int dur10k = 0 ; int dur100k = 0; int dur500k = 0 ;
	cout<<"Tiempos insert_left():"<<endl;
	cout << endl;
	cout<<"Con capacidad de 64 elementos por Nodo de Datos:"<<endl;
    for(int i = 0; i < 20 ; ++i){
    	dur1k = dur1k + TestInsertLeftListArr(64, 1000);
    	dur10k = dur10k + TestInsertLeftListArr(64, 10000);
    	dur100k = dur100k + TestInsertLeftListArr(64, 100000);
    	dur500k = dur500k + TestInsertLeftListArr(64, 500000);
	}		
	cout << "Insercion de 1000 elementos en ms: " << dur1k/20 << endl;
	cout << "Insercion de 10000 elementos en ms: " << dur10k/20 << endl;
	cout << "Insercion de 100000 elementos en ms: " << dur100k/20 << endl;
	cout << "Insercion de 500000 elementos en ms: " << dur500k/20 << endl;
	cout << endl;	
	dur1k = 0 ; dur10k = 0 ; dur100k = 0 ; dur500k = 0 ;
	cout<<"Con capacidad de 128 elementos por Nodo de Datos:"<<endl;
    for(int i = 0; i < 20 ; ++i){
    	dur1k = dur1k + TestInsertLeftListArr(128, 1000);
    	dur10k = dur10k + TestInsertLeftListArr(128, 10000);
    	dur100k = dur100k + TestInsertLeftListArr(128, 100000);
    	dur500k = dur500k + TestInsertLeftListArr(128, 500000);
	}	
	cout << "Insercion de 1000 elementos en ms: " << dur1k/20 << endl;
	cout << "Insercion de 10000 elementos en ms: " << dur10k/20 << endl;
	cout << "Insercion de 100000 elementos en ms: " << dur100k/20 << endl;
	cout << "Insercion de 500000 elementos en ms: " << dur500k/20 << endl;
	cout << endl;
	dur1k = 0 ; dur10k = 0 ; dur100k = 0 ; dur500k = 0 ;
	cout<<"Con capacidad de 512 elementos por Nodo de Datos:"<<endl;
    for(int i = 0; i < 20 ; ++i){
    	dur1k = dur1k + TestInsertLeftListArr(512, 1000);
    	dur10k = dur10k + TestInsertLeftListArr(512, 10000);
    	dur100k = dur100k + TestInsertLeftListArr(512, 100000);
    	dur500k = dur500k + TestInsertLeftListArr(512, 500000);
	}	
	cout << "Insercion de 1000 elementos en ms: " << dur1k/20 << endl;
	cout << "Insercion de 10000 elementos en ms: " << dur10k/20 << endl;
	cout << "Insercion de 100000 elementos en ms: " << dur100k/20 << endl;
	cout << "Insercion de 500000 elementos en ms: " << dur500k/20 << endl;	
	cout << endl;
	dur1k = 0 ; dur10k = 0; dur100k = 0 ; dur500k = 0 ;
	cout<<"Con capacidad de 1024 elementos por Nodo de Datos:"<<endl;
    for(int i = 0; i < 20 ; ++i){
    	dur1k = dur1k + TestInsertLeftListArr(1024, 1000);
    	dur10k = dur10k + TestInsertLeftListArr(1024, 10000);
    	dur100k = dur100k + TestInsertLeftListArr(1024, 100000);
    	dur500k = dur500k + TestInsertLeftListArr(1024, 500000);
	}	
	cout << "Insercion de 1000 elementos en ms: " << dur1k/20 << endl;
	cout << "Insercion de 10000 elementos en ms: " << dur10k/20 << endl;
	cout << "Insercion de 100000 elementos en ms: " << dur100k/20 << endl;
	cout << "Insercion de 500000 elementos en ms: " << dur500k/20 << endl;	
	cout << endl;
	dur1k = 0 ; dur10k = 0; dur100k = 0 ; dur500k = 0 ;
	cout<<"Con capacidad de 2048 elementos por Nodo de Datos:"<<endl;
    for(int i = 0; i < 20 ; ++i){
    	dur1k = dur1k + TestInsertLeftListArr(2048, 1000);
    	dur10k = dur10k + TestInsertLeftListArr(2048, 10000);
    	dur100k = dur100k + TestInsertLeftListArr(2048, 100000);
    	dur500k = dur500k + TestInsertLeftListArr(2048, 500000);
	}	
	cout << "Insercion de 1000 elementos en ms: " << dur1k/20 << endl;
	cout << "Insercion de 10000 elementos en ms: " << dur10k/20 << endl;
	cout << "Insercion de 100000 elementos en ms: " << dur100k/20 << endl;
	cout << "Insercion de 500000 elementos en ms: " << dur500k/20 << endl;	
	cout << endl;

	//////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////

	cout<<"Tiempos insert_right():"<<endl;
	cout << endl;
    dur1k = 0 ; dur10k = 0; dur100k = 0 ; dur500k = 0 ;
	cout<<"Con capacidad de 64 elementos por Nodo de Datos:"<<endl;
	for(int i = 0; i < 20 ; ++i){
    	dur1k = dur1k + TestInsertRightListArr(64, 1000);
    	dur10k = dur10k + TestInsertRightListArr(64, 10000);
    	dur100k = dur100k + TestInsertRightListArr(64, 100000);
    	dur500k = dur500k + TestInsertRightListArr(64, 500000);
	}
	cout << "Insercion de 1000 elementos en ms: " << dur1k/20 << endl;
	cout << "Insercion de 10000 elementos en ms: " << dur10k/20 << endl;
	cout << "Insercion de 100000 elementos en ms: " << dur100k/20 << endl;
	cout << "Insercion de 500000 elementos en ms: " << dur500k/20 << endl;
	cout << endl;
	dur1k = 0 ; dur10k = 0; dur100k = 0 ; dur500k = 0 ;

	cout<<"Con capacidad de 128 elementos por Nodo de Datos"<<endl;
	for(int i = 0; i < 20 ; ++i){
    	dur1k = dur1k + TestInsertRightListArr(128, 1000);
    	dur10k = dur10k + TestInsertRightListArr(128, 10000);
    	dur100k = dur100k + TestInsertRightListArr(128, 100000);
    	dur500k = dur500k + TestInsertRightListArr(128, 500000);
	}
	cout << "Insercion de 1000 elementos en ms: " << dur1k/20 << endl;
	cout << "Insercion de 10000 elementos en ms: " << dur10k/20 << endl;
	cout << "Insercion de 100000 elementos en ms: " << dur100k/20 << endl;
	cout << "Insercion de 500000 elementos en ms: " << dur500k/20 << endl;	
	cout << endl;
	dur1k = 0 ; dur10k = 0; dur100k = 0 ; dur500k = 0 ;
	cout<<"Con capacidad de 512 elementos por Nodo de Datos"<<endl;
	for(int i = 0; i < 20 ; ++i){
    	dur1k = dur1k + TestInsertRightListArr(512, 1000);
    	dur10k = dur10k + TestInsertRightListArr(512, 10000);
    	dur100k = dur100k + TestInsertRightListArr(512, 100000);
    	dur500k = dur500k + TestInsertRightListArr(512, 500000);
	}
	cout << "Insercion de 1000 elementos en ms: " << dur1k/20 << endl;
	cout << "Insercion de 10000 elementos en ms: " << dur10k/20 << endl;
	cout << "Insercion de 100000 elementos en ms: " << dur100k/20 << endl;
	cout << "Insercion de 500000 elementos en ms: " << dur500k/20 << endl;
	cout << endl;
	dur1k = 0 ; dur10k = 0; dur100k = 0 ; dur500k = 0 ;
	cout<<"Con capacidad de 1024 elementos por Nodo de Datos:"<<endl;
	for(int i = 0; i < 20 ; ++i){
    	dur1k = dur1k + TestInsertRightListArr(1024, 1000);
    	dur10k = dur10k + TestInsertRightListArr(1024, 10000);
    	dur100k = dur100k + TestInsertRightListArr(1024, 100000);
    	dur500k = dur500k + TestInsertRightListArr(1024, 500000);
	}
	cout << "Insercion de 1000 elementos en ms: " << dur1k/20 << endl;
	cout << "Insercion de 10000 elementos en ms: " << dur10k/20 << endl;
	cout << "Insercion de 100000 elementos en ms: " << dur100k/20 << endl;
	cout << "Insercion de 500000 elementos en ms: " << dur500k/20 << endl;
	cout << endl;
	dur1k = 0 ; dur10k = 0; dur100k = 0 ; dur500k = 0 ;
	cout<<"Con capacidad de 2048 elementos por Nodo de Datos:"<<endl;
	for(int i = 0; i < 20 ; ++i){
    	dur1k = dur1k + TestInsertRightListArr(2048, 1000);
    	dur10k = dur10k + TestInsertRightListArr(2048, 10000);
    	dur100k = dur100k + TestInsertRightListArr(2048, 100000);
    	dur500k = dur500k + TestInsertRightListArr(2048, 500000);
	}
	cout << "Insercion de 1000 elementos en ms: " << dur1k/20 << endl;
	cout << "Insercion de 10000 elementos en ms: " << dur10k/20 << endl;
	cout << "Insercion de 100000 elementos en ms: " << dur100k/20 << endl;
	cout << "Insercion de 500000 elementos en ms: " << dur500k/20 << endl;	
	cout << endl;

	//////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////

	cout<<"Tiempos find():"<<endl;
	cout << endl;
	cout<<"Con capacidad de 64 elementos por Nodo de Datos:"<<endl;
    dur1k = 0 ; dur10k = 0 ; dur100k = 0;
	ListArr* la1 = new ListArr(64);
	ListArr* la2 = new ListArr(64); 
	ListArr* la3 = new ListArr(64);         
	for(int i = 0; i<100000 ; ++i){
		if(i<1000){
			la1->insert_left(7);
		}
		if(i<10000){
			la2->insert_left(7);
		}
		la3->insert_left(7);
	}
    for(int i = 0; i < 20 ; ++i){
    	dur1k = dur1k + TestFindListArr(la1);
		dur10k = dur10k + TestFindListArr(la2);
		dur100k = dur100k + TestFindListArr(la3);
	}
	cout << "Busqueda con 1000 elementos en ms: " << dur1k/20 << endl;
	cout << "Busqueda con 10000 elementos en ms: " << dur10k/20 << endl;
	cout << "Busqueda con 100000 elementos en ms: " << dur100k/20 << endl;	
	cout << endl;
	cout<<"Con capacidad de 128 elementos por Nodo de Datos:"<<endl;
    dur1k = 0 ; dur10k = 0 ; dur100k = 0;
	delete la1, la2, la3;
	la1 = new ListArr(128);
	la2 = new ListArr(128);  
	la3 = new ListArr(128);         
	for(int i = 0; i<100000 ; ++i){
		if(i<1000){
			la1->insert_left(7);
		}
		if(i<10000){
			la2->insert_left(7);
		}
		la3->insert_left(7);
	}
    for(int i = 0; i < 20 ; ++i){
    	dur1k = dur1k + TestFindListArr(la1);
		dur10k = dur10k + TestFindListArr(la2);
		dur100k = dur100k + TestFindListArr(la3);
	}
	cout << "Busqueda con 1000 elementos en ms: " << dur1k/20 << endl;
	cout << "Busqueda con 10000 elementos en ms: " << dur10k/20 << endl;
	cout << "Busqueda con 100000 elementos en ms: " << dur100k/20 << endl;	
	cout << endl;
	cout<<"Con capacidad de 512 elementos por Nodo de Datos:"<<endl;
    dur1k = 0 ; dur10k = 0 ; dur100k = 0;
	delete la1, la2, la3;
	la1 = new ListArr(512);
	la2 = new ListArr(512);  
	la3 = new ListArr(512);         
	for(int i = 0; i<100000 ; ++i){
		if(i<1000){
			la1->insert_left(7);
		}
		if(i<10000){
			la2->insert_left(7);
		}
		la3->insert_left(7);
	}
    for(int i = 0; i < 20 ; ++i){
    	dur1k = dur1k + TestFindListArr(la1);
		dur10k = dur10k + TestFindListArr(la2);
		dur100k = dur100k + TestFindListArr(la3);
	}
	cout << "Busqueda con 1000 elementos en ms: " << dur1k/20 << endl;
	cout << "Busqueda con 10000 elementos en ms: " << dur10k/20 << endl;
	cout << "Busqueda con 100000 elementos en ms: " << dur100k/20 << endl;	
	cout << endl;
	cout<<"Con capacidad de 1024 elementos por Nodo de Datos:"<<endl;
    dur1k = 0 ; dur10k = 0 ; dur100k = 0;
	delete la1, la2, la3;
	la1 = new ListArr(1024);
	la2 = new ListArr(1024);  
	la3 = new ListArr(1024);         
	for(int i = 0; i<100000 ; ++i){
		if(i<1000){
			la1->insert_left(7);
		}
		if(i<10000){
			la2->insert_left(7);
		}
		la3->insert_left(7);
	}
    for(int i = 0; i < 20 ; ++i){
    	dur1k = dur1k + TestFindListArr(la1);
		dur10k = dur10k + TestFindListArr(la2);
		dur100k = dur100k + TestFindListArr(la3);
	}
	cout << "Busqueda con 1000 elementos en ms: " << dur1k/20 << endl;
	cout << "Busqueda con 10000 elementos en ms: " << dur10k/20 << endl;
	cout << "Busqueda con 100000 elementos en ms: " << dur100k/20 << endl;	
	cout << endl;
	cout<<"Con capacidad de 2048 elementos por Nodo de Datos:"<<endl;
    dur1k = 0 ; dur10k = 0 ; dur100k = 0;
	delete la1, la2, la3;
	la1 = new ListArr(2048);
	la2 = new ListArr(2048);   
	la3 = new ListArr(2048);         
	for(int i = 0; i<100000 ; ++i){
		if(i<1000){
			la1->insert_left(7);
		}
		if(i<10000){
			la2->insert_left(7);
		}
		la3->insert_left(7);
	}
	for(int i = 0; i < 20 ; ++i){
    	dur1k = dur1k + TestFindListArr(la1);
		dur10k = dur10k + TestFindListArr(la2);
		dur100k = dur100k + TestFindListArr(la3);
	}
	delete la1, la2, la3;
	cout << "Busqueda con 1000 elementos en ms: " << dur1k/20 << endl;
	cout << "Busqueda con 10000 elementos en ms: " << dur10k/20 << endl;
	cout << "Busqueda con 100000 elementos en ms: " << dur100k/20 << endl;	
	cout << endl;	
	cout<<"----------------------------------------------------------------------------------"<<endl;

	//////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////

	cout << endl;
	cout<<"VectorArray:"<<endl;
	cout << endl;
	cout<<"Tiempos insert() (equivalente a insert_left()):"<<endl;
    dur1k = 0 ; dur10k = 0 ; dur100k = 0; dur500k = 0 ;
    for(int i = 0; i < 20 ; ++i){
    	dur1k = dur1k + TestInsertLeftVectorArray(1000);
    	dur10k = dur10k + TestInsertLeftVectorArray(10000);
    	dur100k = dur100k + TestInsertLeftVectorArray(100000);
    	dur500k = dur500k + TestInsertLeftVectorArray(500000);
	}		
	cout << "Insercion de 1000 elementos en ms: " << dur1k/20 << endl;
	cout << "Insercion de 10000 elementos en ms: " << dur10k/20 << endl;
	cout << "Insercion de 100000 elementos en ms: " << dur100k/20 << endl;
	cout << "Insercion de 500000 elementos en ms: " << dur500k/20 << endl;
	cout << endl;		
	cout<<"Tiempos insertAt() (equivalente a insert_right()):"<<endl;
    dur1k = 0 ; dur10k = 0 ; dur100k = 0; dur500k = 0 ;
    for(int i = 0; i < 20 ; ++i){
    	dur1k = dur1k + TestInsertRightVectorArray(1000);
    	dur10k = dur10k + TestInsertRightVectorArray(10000);
    	dur100k = dur100k + TestInsertRightVectorArray(100000);
    	dur500k = dur500k + TestInsertRightVectorArray(500000);
	}		
	cout << "Insercion de 1000 elementos en ms: " << dur1k/20 << endl;
	cout << "Insercion de 10000 elementos en ms: " << dur10k/20 << endl;
	cout << "Insercion de 100000 elementos en ms: " << dur100k/20 << endl;
	cout << "Insercion de 500000 elementos en ms: " << dur500k/20 << endl;
	cout << endl;
	cout<<"---------------------------------------------------------------------------------"<<endl;

	//////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////

	cout << endl;
	cout<<"VectorList:"<<endl;
	cout << endl;
	cout<<"Tiempos insert(), equivalente a insert_left():"<<endl;
    dur1k = 0 ; dur10k = 0 ; dur100k = 0; dur500k = 0 ;
    for(int i = 0; i < 20 ; ++i){
    	dur1k = dur1k + TestInsertLeftVectorList(1000);
    	dur10k = dur10k + TestInsertLeftVectorList(10000);
    	dur100k = dur100k + TestInsertLeftVectorList(100000);
    	dur500k = dur500k + TestInsertLeftVectorList(500000);
	}		
	cout << "Insercion de 1000 elementos en ms: " << dur1k/20 << endl;
	cout << "Insercion de 10000 elementos en ms: " << dur10k/20 << endl;
	cout << "Insercion de 100000 elementos en ms: " << dur100k/20 << endl;
	cout << "Insercion de 500000 elementos en ms: " << dur500k/20 << endl;
	cout << endl;		
	cout<<"Tiempos insertAt() (equivalente a insert_right()):"<<endl;
    dur1k = 0 ; dur10k = 0 ; dur100k = 0; dur500k = 0 ;
    for(int i = 0; i < 20 ; ++i){
    	dur1k = dur1k + TestInsertRightVectorList(1000);
    	dur10k = dur10k + TestInsertRightVectorList(10000);
    	dur100k = dur100k + TestInsertRightVectorList(100000);
    	dur500k = dur500k + TestInsertRightVectorList(500000);
	}		
	cout << "Insercion de 1000 elementos en ms: " << dur1k/20 << endl;
	cout << "Insercion de 10000 elementos en ms: " << dur10k/20 << endl;
	cout << "Insercion de 100000 elementos en ms: " << dur100k/20 << endl;
	cout << "Insercion de 500000 elementos en ms: " << dur500k/20 << endl;
	cout << endl;	
	cout<<"---------------------------------------------------------------------------------"<<endl;
	return 0;
}
// g++ -o TimeTest TimeTest.cpp ListArr.cpp VectorList.cpp VectorArray.cpp