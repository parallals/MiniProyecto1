#include "ListArr.h"
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int TestInsertLeft(int tamArray, int cantNod, int elementos){
	ListArr* lista = new ListArr(tamArray, cantNod);
	auto start = high_resolution_clock::now();
	for(int i=0 ; i<elementos ; ++i){
        lista->insert_left(i);
    }
	auto end = high_resolution_clock::now();
	delete lista;
	auto duration = duration_cast<microseconds>(end - start);
 	return duration.count();	
} 


int TestInsertRight(int tamArray, int cantNod, int elementos){
	ListArr* lista = new ListArr(tamArray, cantNod);
	auto start = high_resolution_clock::now();
	for(int i = 0; i<elementos ; ++i){
   		lista->insert_right(i);
   	}
	auto end = high_resolution_clock::now();
	delete lista;
	auto duration = duration_cast<microseconds>(end - start);
	return duration.count();
}


int TestFind(int tamArray, int cantNod, ListArr* lista){
	return 1;
}


int main(){

	cout<<"ListArr"<<endl;
	cout<<"Tiempo insert_left()"<<endl;

    int dur10k = 0; int dur100k = 0; int dur1M = 0 ; int dur10M = 0; int dur100M = 0;
	cout<<"8 elementos por array"<<endl;
    for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertLeft(8, 8, 10000);
    	dur100k = dur100k + TestInsertLeft(8, 8, 100000);
    	dur1M = dur1M + TestInsertLeft(8, 8, 1000000);
    	dur10M = dur10M + TestInsertLeft(8, 8, 10000000);
    	dur100M = dur100M + TestInsertLeft(8, 8, 100000000);
	}		
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000 elementos: "<<dur100k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;
		
	dur10k = 0; dur100k = 0 ; dur1M = 0 ; dur10M = 0 ; dur100M = 0;
	cout<<"64 elementos por array"<<endl;
    for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertLeft(64, 8, 10000);
    	dur100k = dur100k + TestInsertLeft(64, 8, 100000);
    	dur1M = dur1M + TestInsertLeft(64, 8, 1000000);
    	dur10M = dur10M + TestInsertLeft(64, 8, 10000000);
    	dur100M = dur100M + TestInsertLeft(64, 8, 100000000);
	}	
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000 elementos: "<<dur100k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;

	dur10k = 0; dur100k = 0 ; dur1M = 0 ; dur10M = 0 ; dur100M = 0;
	cout<<"128 elementos por array"<<endl;
    for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertLeft(128, 8, 10000);
    	dur100k = dur100k + TestInsertLeft(128, 8, 100000);
    	dur1M = dur1M + TestInsertLeft(128, 8, 1000000);
    	dur10M = dur10M + TestInsertLeft(128, 8, 10000000);
    	dur100M = dur100M + TestInsertLeft(128, 8, 100000000);
	}	
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000 elementos: "<<dur100k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;

	dur10k = 0; dur100k = 0 ; dur1M = 0 ; dur10M = 0 ; dur100M = 0;
	cout<<"512 elementos por array"<<endl;
    for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertLeft(512, 8, 10000);
    	dur100k = dur100k + TestInsertLeft(512, 8, 100000);
    	dur1M = dur1M + TestInsertLeft(512, 8, 1000000);
    	dur10M = dur10M + TestInsertLeft(512, 8, 10000000);
    	dur100M = dur100M + TestInsertLeft(512, 8, 100000000);
	}	
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000 elementos: "<<dur100k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;

	dur10k = 0; dur100k = 0 ; dur1M = 0 ; dur10M = 0 ; dur100M = 0;
	cout<<"1024 elementos por array"<<endl;
    for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertLeft(1024, 8, 10000);
    	dur100k = dur100k + TestInsertLeft(1024, 8, 100000);
    	dur1M = dur1M + TestInsertLeft(1024, 8, 1000000);
    	dur10M = dur10M + TestInsertLeft(1024, 8, 10000000);
    	dur100M = dur100M + TestInsertLeft(1024, 8, 100000000);
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
    	dur10k = dur10k + TestInsertRight(8, 8, 10000);
    	dur100k = dur100k + TestInsertRight(8, 8, 100000);
    	dur1M = dur1M + TestInsertRight(8, 8, 1000000);
    	dur10M = dur10M + TestInsertRight(8, 8, 10000000);
    	dur100M = dur100M + TestInsertRight(8, 8, 100000000);
	}
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000 elementos: "<<dur100k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	

	dur10k = 0; dur100k = 0 ; dur1M = 0 ; dur10M = 0 ; dur100M = 0;

	cout<<"64 elementos por array"<<endl;
	for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertRight(64, 8, 10000);
    	dur100k = dur100k + TestInsertRight(64, 8, 100000);
    	dur1M = dur1M + TestInsertRight(64, 8, 1000000);
    	dur10M = dur10M + TestInsertRight(64, 8, 10000000);
    	dur100M = dur100M + TestInsertRight(64, 8, 100000000);
	}
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000 elementos: "<<dur100k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	

	dur10k = 0; dur100k = 0 ; dur1M = 0 ; dur10M = 0 ; dur100M = 0;
	cout<<"128 elementos por array"<<endl;
	for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertRight(128, 8, 10000);
    	dur100k = dur100k + TestInsertRight(128, 8, 100000);
    	dur1M = dur1M + TestInsertRight(128, 8, 1000000);
    	dur10M = dur10M + TestInsertRight(128, 8, 10000000);
    	dur100M = dur100M + TestInsertRight(128, 8, 100000000);
	}
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000 elementos: "<<dur100k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	

	dur10k = 0; dur100k = 0 ; dur1M = 0 ; dur10M = 0 ; dur100M = 0;
	cout<<"512 elementos por array"<<endl;
	for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertRight(512, 8, 10000);
    	dur100k = dur100k + TestInsertRight(512, 8, 100000);
    	dur1M = dur1M + TestInsertRight(512, 8, 1000000);
    	dur10M = dur10M + TestInsertRight(512, 8, 10000000);
    	dur100M = dur100M + TestInsertRight(512, 8, 100000000);
	}
	cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000 elementos: "<<dur100k/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
	cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
	cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	

	dur10k = 0; dur100k = 0 ; dur1M = 0 ; dur10M = 0 ; dur100M = 0;
	cout<<"1024 elementos por array"<<endl;
	for(int i = 0; i < 20 ; ++i){
    	dur10k = dur10k + TestInsertRight(1024, 8, 10000);
    	dur100k = dur100k + TestInsertRight(1024, 8, 100000);
    	dur1M = dur1M + TestInsertRight(1024, 8, 1000000);
    	dur10M = dur10M + TestInsertRight(1024, 8, 10000000);
    	dur100M = dur100M + TestInsertRight(1024, 8, 100000000);
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

    ListArr* la2;     ListArr* la3;     ListArr* la4;
	cout<<"Para 64 elementos en array"<<endl;
	ListArr* la1 = new ListArr(8,64);la2 = new ListArr(8,64);la3 = new ListArr(8,64);la4 = new ListArr(8,64);      
	for(int i = 0; i<100000000 ; ++i){
		if(i<10000){
			la1->insert_left(5);
		}
		if(i<1000000){
			la2->insert_left(5);
		}
		if(i<10000000){
			la3->insert_left(5);
		}
		la4->insert_left(5);
	}
    dur10k = 0; dur1M = 0 ; dur10M = 0; dur100M = 0;
    for(int i = 0; i < 20 ; ++i){
        auto start = high_resolution_clock::now();
		la1->find(6);
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur10k = dur10k + duration.count();
	}

    for(int i = 0; i < 20 ; ++i){
        auto start = high_resolution_clock::now();
        	la2->find(6);
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur1M = dur1M + duration.count();
	}
	    for(int i = 0; i < 20 ; ++i){
        auto start = high_resolution_clock::now();
			la3->find(6);
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur10M = dur10M + duration.count();
	}	
    for(int i = 0; i < 20 ; ++i){
        auto start = high_resolution_clock::now();
			la4->find(6);
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur100M = dur100M + duration.count();
	}	
cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	

cout<<"Para 128 elementos en array"<<endl;
	la1 = new ListArr(8,128);la2 = new ListArr(8,128);la3 = new ListArr(8,128);la4 = new ListArr(8,128);      
	for(int i = 0; i<100000000 ; ++i){
		if(i<10000){
			la1->insert_left(5);
		}
		if(i<1000000){
			la2->insert_left(5);
		}
		if(i<10000000){
			la3->insert_left(5);
		}
		la4->insert_left(5);
	}
    dur10k = 0; dur1M = 0 ; dur10M = 0; dur100M = 0;
    for(int i = 0; i < 20 ; ++i){
        auto start = high_resolution_clock::now();
		la1->find(6);
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur10k = dur10k + duration.count();
	}

    for(int i = 0; i < 20 ; ++i){
        auto start = high_resolution_clock::now();
        	la2->find(6);
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur1M = dur1M + duration.count();
	}
	    for(int i = 0; i < 20 ; ++i){
        auto start = high_resolution_clock::now();
			la3->find(6);
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur10M = dur10M + duration.count();
	}	
    for(int i = 0; i < 20 ; ++i){
        auto start = high_resolution_clock::now();
			la4->find(6);
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur100M = dur100M + duration.count();
	}	
cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	

cout<<"Para 512 elementos en array"<<endl;
	la1 = new ListArr(8,512);la2 = new ListArr(8,512);la3 = new ListArr(8,512);la4 = new ListArr(8,512);      
	for(int i = 0; i<100000000 ; ++i){
		if(i<10000){
			la1->insert_left(5);
		}
		if(i<1000000){
			la2->insert_left(5);
		}
		if(i<10000000){
			la3->insert_left(5);
		}
		la4->insert_left(5);
	}
    dur10k = 0; dur1M = 0 ; dur10M = 0; dur100M = 0;
    for(int i = 0; i < 20 ; ++i){
        auto start = high_resolution_clock::now();
		la1->find(6);
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur10k = dur10k + duration.count();
	}

    for(int i = 0; i < 20 ; ++i){
        auto start = high_resolution_clock::now();
        	la2->find(6);
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur1M = dur1M + duration.count();
	}
	    for(int i = 0; i < 20 ; ++i){
        auto start = high_resolution_clock::now();
			la3->find(6);
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur10M = dur10M + duration.count();
	}	
    for(int i = 0; i < 20 ; ++i){
        auto start = high_resolution_clock::now();
			la4->find(6);
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur100M = dur100M + duration.count();
	}	
cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	

cout<<"Para 1024 elementos en array"<<endl;
	la1 = new ListArr(8,1024);la2 = new ListArr(8,1024);la3 = new ListArr(8,1024);la4 = new ListArr(8,512);      
	for(int i = 0; i<100000000 ; ++i){
		if(i<10000){
			la1->insert_left(5);
		}
		if(i<1000000){
			la2->insert_left(5);
		}
		if(i<10000000){
			la3->insert_left(5);
		}
		la4->insert_left(5);
	}
    dur10k = 0; dur1M = 0 ; dur10M = 0; dur100M = 0;
    for(int i = 0; i < 20 ; ++i){
        auto start = high_resolution_clock::now();
		la1->find(6);
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur10k = dur10k + duration.count();
	}

    for(int i = 0; i < 20 ; ++i){
        auto start = high_resolution_clock::now();
        	la2->find(6);
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur1M = dur1M + duration.count();
	}
	    for(int i = 0; i < 20 ; ++i){
        auto start = high_resolution_clock::now();
			la3->find(6);
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur10M = dur10M + duration.count();
	}	
    for(int i = 0; i < 20 ; ++i){
        auto start = high_resolution_clock::now();
			la4->find(6);
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur100M = dur100M + duration.count();
	}	
cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	

return 0;
}
// g++ -o TimeTest TimeTest.cpp ListArr.cpp