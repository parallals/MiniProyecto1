#include "ListArr.h"
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int TestInsertLeft(int tamArray, int elementos){
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


int TestInsertRight(int tamArray, int elementos){
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


int TestFind(ListArr* lista){
	auto start = high_resolution_clock::now();
	lista->find(6);
	auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);
	return duration.count();
}


int main(){

	cout<<"ListArr"<<endl;
	cout<<"Tiempo insert_left()"<<endl;

    int dur10k = 0; int dur100k = 0; int dur1M = 0 ; int dur10M = 0; int dur100M = 0;
	cout<<"8 elementos por array"<<endl;
    for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertLeft(8, 10000);
    	dur100k = dur100k + TestInsertLeft(8, 100000);
    	dur1M = dur1M + TestInsertLeft(8, 1000000);
    	dur10M = dur10M + TestInsertLeft(8, 10000000);
    	dur100M = dur100M + TestInsertLeft(8, 100000000);
	}		
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000 elementos: "<<dur100k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;
		
	dur10k = 0; dur100k = 0 ; dur1M = 0 ; dur10M = 0 ; dur100M = 0;
	cout<<"64 elementos por array"<<endl;
    for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertLeft(64, 10000);
    	dur100k = dur100k + TestInsertLeft(64, 100000);
    	dur1M = dur1M + TestInsertLeft(64, 1000000);
    	dur10M = dur10M + TestInsertLeft(64, 10000000);
    	dur100M = dur100M + TestInsertLeft(64, 100000000);
	}	
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000 elementos: "<<dur100k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;

	dur10k = 0; dur100k = 0 ; dur1M = 0 ; dur10M = 0 ; dur100M = 0;
	cout<<"128 elementos por array"<<endl;
    for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertLeft(128, 10000);
    	dur100k = dur100k + TestInsertLeft(128, 100000);
    	dur1M = dur1M + TestInsertLeft(128, 1000000);
    	dur10M = dur10M + TestInsertLeft(128, 10000000);
    	dur100M = dur100M + TestInsertLeft(128, 100000000);
	}	
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000 elementos: "<<dur100k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;

	dur10k = 0; dur100k = 0 ; dur1M = 0 ; dur10M = 0 ; dur100M = 0;
	cout<<"512 elementos por array"<<endl;
    for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertLeft(512, 10000);
    	dur100k = dur100k + TestInsertLeft(512, 100000);
    	dur1M = dur1M + TestInsertLeft(512, 1000000);
    	dur10M = dur10M + TestInsertLeft(512, 10000000);
    	dur100M = dur100M + TestInsertLeft(512, 100000000);
	}	
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000 elementos: "<<dur100k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;

	dur10k = 0; dur100k = 0 ; dur1M = 0 ; dur10M = 0 ; dur100M = 0;
	cout<<"1024 elementos por array"<<endl;
    for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertLeft(1024, 10000);
    	dur100k = dur100k + TestInsertLeft(1024, 100000);
    	dur1M = dur1M + TestInsertLeft(1024, 1000000);
    	dur10M = dur10M + TestInsertLeft(1024, 10000000);
    	dur100M = dur100M + TestInsertLeft(1024, 100000000);
	}	
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000 elementos: "<<dur100k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;

	//////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////

	cout<<"Tiempo insert_right()"<<endl;

    dur10k = 0; dur100k = 0 ; dur1M = 0 ; dur10M = 0 ; dur100M = 0;
	cout<<"8 elementos por array"<<endl;
	for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertRight(8, 10000);
    	dur100k = dur100k + TestInsertRight(8, 100000);
    	dur1M = dur1M + TestInsertRight(8, 1000000);
    	dur10M = dur10M + TestInsertRight(8, 10000000);
    	dur100M = dur100M + TestInsertRight(8, 100000000);
	}
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000 elementos: "<<dur100k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	

	dur10k = 0; dur100k = 0 ; dur1M = 0 ; dur10M = 0 ; dur100M = 0;

	cout<<"64 elementos por array"<<endl;
	for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertRight(64, 10000);
    	dur100k = dur100k + TestInsertRight(64, 100000);
    	dur1M = dur1M + TestInsertRight(64, 1000000);
    	dur10M = dur10M + TestInsertRight(64, 10000000);
    	dur100M = dur100M + TestInsertRight(64, 100000000);
	}
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000 elementos: "<<dur100k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	

	dur10k = 0; dur100k = 0 ; dur1M = 0 ; dur10M = 0 ; dur100M = 0;
	cout<<"128 elementos por array"<<endl;
	for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertRight(128, 10000);
    	dur100k = dur100k + TestInsertRight(128, 100000);
    	dur1M = dur1M + TestInsertRight(128, 1000000);
    	dur10M = dur10M + TestInsertRight(128, 10000000);
    	dur100M = dur100M + TestInsertRight(128, 100000000);
	}
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000 elementos: "<<dur100k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	

	dur10k = 0; dur100k = 0 ; dur1M = 0 ; dur10M = 0 ; dur100M = 0;
	cout<<"512 elementos por array"<<endl;
	for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertRight(512, 10000);
    	dur100k = dur100k + TestInsertRight(512, 100000);
    	dur1M = dur1M + TestInsertRight(512, 1000000);
    	dur10M = dur10M + TestInsertRight(512, 10000000);
    	dur100M = dur100M + TestInsertRight(512, 100000000);
	}
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000 elementos: "<<dur100k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	

	dur10k = 0; dur100k = 0 ; dur1M = 0 ; dur10M = 0 ; dur100M = 0;
	cout<<"1024 elementos por array"<<endl;
	for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertRight(1024, 10000);
    	dur100k = dur100k + TestInsertRight(1024, 100000);
    	dur1M = dur1M + TestInsertRight(1024, 1000000);
    	dur10M = dur10M + TestInsertRight(1024, 10000000);
    	dur100M = dur100M + TestInsertRight(1024, 100000000);
	}
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000 elementos: "<<dur100k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	

	//////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////

	cout<<"Tiempo find()"<<endl;

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
    	dur10k = dur10k + TestFind(la1);
		dur100k = dur100k + TestFind(la2);
		dur1M = dur1M + TestFind(la3);
		dur10M = dur10M + TestFind(la4);
		dur100M = dur100M + TestFind(la5);
	}
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	

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
    	dur10k = dur10k + TestFind(la1);
		dur100k = dur100k + TestFind(la2);
		dur1M = dur1M + TestFind(la3);
		dur10M = dur10M + TestFind(la4);
		dur100M = dur100M + TestFind(la5);
	}
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	

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
    	dur10k = dur10k + TestFind(la1);
		dur100k = dur100k + TestFind(la2);
		dur1M = dur1M + TestFind(la3);
		dur10M = dur10M + TestFind(la4);
		dur100M = dur100M + TestFind(la5);
	}
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	

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
    	dur10k = dur10k + TestFind(la1);
		dur100k = dur100k + TestFind(la2);
		dur1M = dur1M + TestFind(la3);
		dur10M = dur10M + TestFind(la4);
		dur100M = dur100M + TestFind(la5);
	}
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	

	return 0;
}
// g++ -o TimeTest TimeTest.cpp ListArr.cpp