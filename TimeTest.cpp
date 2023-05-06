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
	auto duration = duration_cast<microseconds>(end - start);
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
	auto duration = duration_cast<microseconds>(end - start);
	return duration.count();
}

int TestFindListArr(ListArr* &lista){
	auto start = high_resolution_clock::now();
	lista->find(6);
	auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);
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
	auto duration = duration_cast<microseconds>(end - start);
	return duration.count();
}

int TestInsertRightVectorArray(int elementos){
	VectorArray* vector = new VectorArray();   
	auto start = high_resolution_clock::now();
	for(int i = 0; i<elementos ; ++i){
   		vector->insertAt(100000001, i);
   	}
	auto end = high_resolution_clock::now();
	delete vector;
	auto duration = duration_cast<microseconds>(end - start);
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
	auto duration = duration_cast<microseconds>(end - start);
	return duration.count();
}

int TestInsertRightVectorList(int elementos){
	VectorList* vector = new VectorList();   
	auto start = high_resolution_clock::now();
	for(int i = 0; i<elementos ; ++i){
   		vector->insertAt(100000001, i);
   	}
	auto end = high_resolution_clock::now();
	delete vector;
	auto duration = duration_cast<microseconds>(end - start);
	return duration.count();
}


int main(){
	cout<<"----------------------------------------------------------------------------------"<<endl;
	cout<<"Todas los siguientes valores son el promedio de veinte veces el mismo experimento:"<<endl;
	cout<<"----------------------------------------------------------------------------------"<<endl;
	cout << endl;
	cout<<"ListArr:"<<endl;
	cout << endl;
	cout<<"Tiempo insert_left()"<<endl;
	cout << endl;
    int dur10k = 0; int dur100k = 0; int dur1M = 0 ; int dur10M = 0; int dur100M = 0;
	cout<<"8 elementos por array"<<endl;
    for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertLeftListArr(8, 10000);
    	dur100k = dur100k + TestInsertLeftListArr(8, 100000);
    	dur1M = dur1M + TestInsertLeftListArr(8, 1000000);
    	dur10M = dur10M + TestInsertLeftListArr(8, 10000000);
    	dur100M = dur100M + TestInsertLeftListArr(8, 100000000);
	}		
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000 elementos: "<<dur100k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;
	cout << endl;	
	dur10k = 0; dur100k = 0 ; dur1M = 0 ; dur10M = 0 ; dur100M = 0;
	cout<<"64 elementos por array"<<endl;
    for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertLeftListArr(64, 10000);
    	dur100k = dur100k + TestInsertLeftListArr(64, 100000);
    	dur1M = dur1M + TestInsertLeftListArr(64, 1000000);
    	dur10M = dur10M + TestInsertLeftListArr(64, 10000000);
    	dur100M = dur100M + TestInsertLeftListArr(64, 100000000);
	}	
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000 elementos: "<<dur100k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;
	cout << endl;
	dur10k = 0; dur100k = 0 ; dur1M = 0 ; dur10M = 0 ; dur100M = 0;
	cout<<"128 elementos por array"<<endl;
    for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertLeftListArr(128, 10000);
    	dur100k = dur100k + TestInsertLeftListArr(128, 100000);
    	dur1M = dur1M + TestInsertLeftListArr(128, 1000000);
    	dur10M = dur10M + TestInsertLeftListArr(128, 10000000);
    	dur100M = dur100M + TestInsertLeftListArr(128, 100000000);
	}	
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000 elementos: "<<dur100k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;
	cout << endl;
	dur10k = 0; dur100k = 0 ; dur1M = 0 ; dur10M = 0 ; dur100M = 0;
	cout<<"512 elementos por array"<<endl;
    for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertLeftListArr(512, 10000);
    	dur100k = dur100k + TestInsertLeftListArr(512, 100000);
    	dur1M = dur1M + TestInsertLeftListArr(512, 1000000);
    	dur10M = dur10M + TestInsertLeftListArr(512, 10000000);
    	dur100M = dur100M + TestInsertLeftListArr(512, 100000000);
	}	
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000 elementos: "<<dur100k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;
	cout << endl;
	dur10k = 0; dur100k = 0 ; dur1M = 0 ; dur10M = 0 ; dur100M = 0;
	cout<<"1024 elementos por array"<<endl;
    for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertLeftListArr(1024, 10000);
    	dur100k = dur100k + TestInsertLeftListArr(1024, 100000);
    	dur1M = dur1M + TestInsertLeftListArr(1024, 1000000);
    	dur10M = dur10M + TestInsertLeftListArr(1024, 10000000);
    	dur100M = dur100M + TestInsertLeftListArr(1024, 100000000);
	}	
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000 elementos: "<<dur100k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;
	cout << endl;
	//////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////

	cout<<"Tiempo insert_right()"<<endl;
	cout << endl;
    dur10k = 0; dur100k = 0 ; dur1M = 0 ; dur10M = 0 ; dur100M = 0;
	cout<<"8 elementos por array"<<endl;
	for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertRightListArr(8, 10000);
    	dur100k = dur100k + TestInsertRightListArr(8, 100000);
    	dur1M = dur1M + TestInsertRightListArr(8, 1000000);
    	dur10M = dur10M + TestInsertRightListArr(8, 10000000);
    	dur100M = dur100M + TestInsertRightListArr(8, 100000000);
	}
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000 elementos: "<<dur100k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	
	cout << endl;
	dur10k = 0; dur100k = 0 ; dur1M = 0 ; dur10M = 0 ; dur100M = 0;

	cout<<"64 elementos por array"<<endl;
	for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertRightListArr(64, 10000);
    	dur100k = dur100k + TestInsertRightListArr(64, 100000);
    	dur1M = dur1M + TestInsertRightListArr(64, 1000000);
    	dur10M = dur10M + TestInsertRightListArr(64, 10000000);
    	dur100M = dur100M + TestInsertRightListArr(64, 100000000);
	}
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000 elementos: "<<dur100k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	
	cout << endl;
	dur10k = 0; dur100k = 0 ; dur1M = 0 ; dur10M = 0 ; dur100M = 0;
	cout<<"128 elementos por array"<<endl;
	for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertRightListArr(128, 10000);
    	dur100k = dur100k + TestInsertRightListArr(128, 100000);
    	dur1M = dur1M + TestInsertRightListArr(128, 1000000);
    	dur10M = dur10M + TestInsertRightListArr(128, 10000000);
    	dur100M = dur100M + TestInsertRightListArr(128, 100000000);
	}
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000 elementos: "<<dur100k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	
	cout << endl;
	dur10k = 0; dur100k = 0 ; dur1M = 0 ; dur10M = 0 ; dur100M = 0;
	cout<<"512 elementos por array"<<endl;
	for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertRightListArr(512, 10000);
    	dur100k = dur100k + TestInsertRightListArr(512, 100000);
    	dur1M = dur1M + TestInsertRightListArr(512, 1000000);
    	dur10M = dur10M + TestInsertRightListArr(512, 10000000);
    	dur100M = dur100M + TestInsertRightListArr(512, 100000000);
	}
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000 elementos: "<<dur100k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	
	cout << endl;
	dur10k = 0; dur100k = 0 ; dur1M = 0 ; dur10M = 0 ; dur100M = 0;
	cout<<"1024 elementos por array"<<endl;
	for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertRightListArr(1024, 10000);
    	dur100k = dur100k + TestInsertRightListArr(1024, 100000);
    	dur1M = dur1M + TestInsertRightListArr(1024, 1000000);
    	dur10M = dur10M + TestInsertRightListArr(1024, 10000000);
    	dur100M = dur100M + TestInsertRightListArr(1024, 100000000);
	}
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000 elementos: "<<dur100k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	
	cout << endl;
	//////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////

	cout<<"Tiempo find()"<<endl;
	cout << endl;
	cout<<"Para 8 elementos en array"<<endl;
    dur10k = 0; dur100k = 0 ; dur1M = 0 ; dur10M = 0 ; dur100M = 0;
	ListArr* la1 = new ListArr(8);
	ListArr* la2 = new ListArr(8);
	ListArr* la3 = new ListArr(8);
	ListArr* la4 = new ListArr(8);   
	ListArr* la5 = new ListArr(8);         
	for(int i = 0; i<100000000 ; ++i){
		if(i<10000){
			la1->insert_right(7);
		}
		if(i<100000){
			la2->insert_right(7);
		}
		if(i<1000000){
			la3->insert_right(7);
		}
		if(i<10000000){
			la4->insert_right(7);
		}
		la5->insert_right(7);
	}
    for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestFindListArr(la1);
		dur100k = dur100k + TestFindListArr(la2);
		dur1M = dur1M + TestFindListArr(la3);
		dur10M = dur10M + TestFindListArr(la4);
		dur100M = dur100M + TestFindListArr(la5);
	}
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	
	cout << endl;
	cout<<"Para 64 elementos en array"<<endl;
    dur10k = 0; dur100k = 0 ; dur1M = 0 ; dur10M = 0 ; dur100M = 0;
	delete la1, la2, la3, la4, la5;
	la1 = new ListArr(64);
	la2 = new ListArr(64);
	la3 = new ListArr(64);
	la4 = new ListArr(64);   
	la5 = new ListArr(64);         
	for(int i = 0; i<100000000 ; ++i){
		if(i<10000){
			la1->insert_right(7);
		}
		if(i<100000){
			la2->insert_right(7);
		}
		if(i<1000000){
			la3->insert_right(7);
		}
		if(i<10000000){
			la4->insert_right(7);
		}
		la5->insert_right(7);
	}
    for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestFindListArr(la1);
		dur100k = dur100k + TestFindListArr(la2);
		dur1M = dur1M + TestFindListArr(la3);
		dur10M = dur10M + TestFindListArr(la4);
		dur100M = dur100M + TestFindListArr(la5);
	}
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	
	cout << endl;
	cout<<"Para 512 elementos en array"<<endl;
    dur10k = 0; dur100k = 0 ; dur1M = 0 ; dur10M = 0 ; dur100M = 0;
	delete la1, la2, la3, la4, la5;
	la1 = new ListArr(512);
	la2 = new ListArr(512);
	la3 = new ListArr(512);
	la4 = new ListArr(512);   
	la5 = new ListArr(512);         
	for(int i = 0; i<100000000 ; ++i){
		if(i<10000){
			la1->insert_right(7);
		}
		if(i<100000){
			la2->insert_right(7);
		}
		if(i<1000000){
			la3->insert_right(7);
		}
		if(i<10000000){
			la4->insert_right(7);
		}
		la5->insert_right(7);
	}
    for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestFindListArr(la1);
		dur100k = dur100k + TestFindListArr(la2);
		dur1M = dur1M + TestFindListArr(la3);
		dur10M = dur10M + TestFindListArr(la4);
		dur100M = dur100M + TestFindListArr(la5);
	}
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	
	cout << endl;
	cout<<"Para 1024 elementos en array"<<endl;
    dur10k = 0; dur100k = 0 ; dur1M = 0 ; dur10M = 0 ; dur100M = 0;
	delete la1, la2, la3, la4, la5;
	la1 = new ListArr(1024);
	la2 = new ListArr(1024);
	la3 = new ListArr(1024);
	la4 = new ListArr(1024);   
	la5 = new ListArr(1024);         
	for(int i = 0; i<100000000 ; ++i){
		if(i<10000){
			la1->insert_right(7);
		}
		if(i<100000){
			la2->insert_right(7);
		}
		if(i<1000000){
			la3->insert_right(7);
		}
		if(i<10000000){
			la4->insert_right(7);
		}
		la5->insert_right(7);
	}
    for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestFindListArr(la1);
		dur100k = dur100k + TestFindListArr(la2);
		dur1M = dur1M + TestFindListArr(la3);
		dur10M = dur10M + TestFindListArr(la4);
		dur100M = dur100M + TestFindListArr(la5);
	}
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;
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
	cout<<"Tiempo insert(), equivalente a insert_left()"<<endl;
    dur10k = 0; dur100k = 0; dur1M = 0 ; dur10M = 0; dur100M = 0;
    for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertLeftVectorArray(10000);
    	dur100k = dur100k + TestInsertLeftVectorArray(100000);
    	dur1M = dur1M + TestInsertLeftVectorArray(1000000);
    	dur10M = dur10M + TestInsertLeftVectorArray(10000000);
    	dur100M = dur100M + TestInsertLeftVectorArray(100000000);
	}		
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000 elementos: "<<dur100k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;
	cout << endl;		
	cout<<"Tiempo insertAt(), usado como insert_right()"<<endl;
    dur10k = 0; dur100k = 0; dur1M = 0 ; dur10M = 0; dur100M = 0;
    for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertRightVectorArray(10000);
    	dur100k = dur100k + TestInsertRightVectorArray(100000);
    	dur1M = dur1M + TestInsertRightVectorArray(1000000);
    	dur10M = dur10M + TestInsertRightVectorArray(10000000);
    	dur100M = dur100M + TestInsertRightVectorArray(100000000);
	}		
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000 elementos: "<<dur100k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;
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
	cout<<"Tiempo insert(), equivalente a insert_left()"<<endl;
    dur10k = 0; dur100k = 0; dur1M = 0 ; dur10M = 0; dur100M = 0;
    for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertLeftVectorList(10000);
    	dur100k = dur100k + TestInsertLeftVectorList(100000);
    	dur1M = dur1M + TestInsertLeftVectorList(1000000);
    	dur10M = dur10M + TestInsertLeftVectorList(10000000);
    	dur100M = dur100M + TestInsertLeftVectorList(100000000);
	}		
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000 elementos: "<<dur100k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;
	cout << endl;		
	cout<<"Tiempo insertAt(), usado como insert_right()"<<endl;
    dur10k = 0; dur100k = 0; dur1M = 0 ; dur10M = 0; dur100M = 0;
    for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertRightVectorList(10000);
    	dur100k = dur100k + TestInsertRightVectorList(100000);
    	dur1M = dur1M + TestInsertRightVectorList(1000000);
    	dur10M = dur10M + TestInsertRightVectorList(10000000);
    	dur100M = dur100M + TestInsertRightVectorList(100000000);
	}		
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000 elementos: "<<dur100k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;
	cout << endl;	
	cout<<"---------------------------------------------------------------------------------"<<endl;
	return 0;
}
// g++ -o TimeTest TimeTest.cpp ListArr.cpp VectorList.cpp VectorArray.cpp