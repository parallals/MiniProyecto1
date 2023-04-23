#include "ListArr.h"
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main(){
	srand(time(NULL));
	cout<<"2. ListArr"<<endl;
	cout<<"Tiempo insert_left"<<endl;
    ListArr* la1; 	ListArr* la1_64;ListArr* la1_128;ListArr* la1_512;ListArr* la1_1024;
    int dur10k = 0; int dur1M = 0 ; int dur10M = 0; int dur100M = 0;
	cout<<"8 elementos por array"<<endl;
    for(int i = 0; i < 20 ; ++i){
        la1 = new ListArr(6,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 10000 ; ++j ){
        		la1->insert_left(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur10k = dur10k + duration.count();
    	delete la1;
	}

    for(int i = 0; i < 20 ; ++i){
        la1 = new ListArr(6,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 1000000 ; ++j ){
        		la1->insert_left(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur1M = dur1M + duration.count();
    	delete la1;
	}
	    for(int i = 0; i < 20 ; ++i){
        la1 = new ListArr(6,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 10000000 ; ++j ){
        		la1->insert_left(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur10M = dur10M + duration.count();
    	delete la1;
	}	
    for(int i = 0; i < 20 ; ++i){
        la1 = new ListArr(6,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 100000000 ; ++j ){
        		la1->insert_left(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur100M = dur100M + duration.count();
    	delete la1;
	}	
cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	

dur10k = 0; dur1M = 0; dur10M = 0; dur100M = 0;

cout<<"64 elementos por array"<<endl;

    for(int i = 0; i < 20 ; ++i){
        la1_64 = new ListArr(64,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 10000 ; ++j ){
        		la1_64->insert_left(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur10k = dur10k + duration.count();
    	delete la1_64;
	}

    for(int i = 0; i < 20 ; ++i){
        la1_64 = new ListArr(64,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 1000000 ; ++j ){
        		la1_64->insert_left(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur1M = dur1M + duration.count();
    	delete la1_64;
	}
	    for(int i = 0; i < 20 ; ++i){
		la1_64 = new ListArr(64,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 10000000 ; ++j ){
        		la1_64->insert_left(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur10M = dur10M + duration.count();
    	delete la1_64;
	}	
    for(int i = 0; i < 20 ; ++i){
        la1_64 = new ListArr(64,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 100000000 ; ++j ){
        		la1_64->insert_left(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur100M = dur100M + duration.count();
    	delete la1_64;
	}	
cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	

dur10k = 0; dur1M = 0; dur10M = 0; dur100M = 0;

cout<<"128 elementos por array"<<endl;

    for(int i = 0; i < 20 ; ++i){
        la1_128 = new ListArr(128,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 10000 ; ++j ){
        		la1_128->insert_left(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur10k = dur10k + duration.count();
    	delete la1_128;
	}

    for(int i = 0; i < 20 ; ++i){
        la1_128 = new ListArr(128,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 1000000 ; ++j ){
        		la1_128->insert_left(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur1M = dur1M + duration.count();
    	delete la1_128;
	}
	    for(int i = 0; i < 20 ; ++i){
		la1_128 = new ListArr(128,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 10000000 ; ++j ){
        		la1_128->insert_left(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur10M = dur10M + duration.count();
    	delete la1_128;
	}	
    for(int i = 0; i < 20 ; ++i){
        la1_128 = new ListArr(128,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 100000000 ; ++j ){
        		la1_128->insert_left(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur100M = dur100M + duration.count();
    	delete la1_128;
	}	
cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	

dur10k = 0; dur1M = 0; dur10M = 0; dur100M = 0;

cout<<"512 elementos por array"<<endl;

    for(int i = 0; i < 20 ; ++i){
        la1_512 = new ListArr(512,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 10000 ; ++j ){
        		la1_512->insert_left(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur10k = dur10k + duration.count();
    	delete la1_512;
	}

    for(int i = 0; i < 20 ; ++i){
        la1_512 = new ListArr(512,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 1000000 ; ++j ){
        		la1_512->insert_left(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur1M = dur1M + duration.count();
    	delete la1_512;
	}
	    for(int i = 0; i < 20 ; ++i){
		la1_512 = new ListArr(512,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 10000000 ; ++j ){
        		la1_512->insert_left(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur10M = dur10M + duration.count();
    	delete la1_512;
	}	
    for(int i = 0; i < 20 ; ++i){
        la1_512 = new ListArr(512,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 100000000 ; ++j ){
        		la1_512->insert_left(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur100M = dur100M + duration.count();
    	delete la1_512;
	}	
cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	

dur10k = 0; dur1M = 0; dur10M = 0; dur100M = 0;

cout<<"1024 elementos por array"<<endl;

    for(int i = 0; i < 20 ; ++i){
        la1_1024 = new ListArr(1024,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 10000 ; ++j ){
        		la1_1024->insert_left(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur10k = dur10k + duration.count();
    	delete la1_1024;
	}

    for(int i = 0; i < 20 ; ++i){
        la1_1024 = new ListArr(1024,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 1000000 ; ++j ){
        		la1_1024->insert_left(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur1M = dur1M + duration.count();
    	delete la1_1024;
	}
	    for(int i = 0; i < 20 ; ++i){
        la1_1024 = new ListArr(1024,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 10000000 ; ++j ){
        		la1_1024->insert_left(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur10M = dur10M + duration.count();
    	delete la1_1024;
	}	
    for(int i = 0; i < 20 ; ++i){
        la1_1024 = new ListArr(1024,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 100000000 ; ++j ){
        		la1_1024->insert_left(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur100M = dur100M + duration.count();
    	delete la1_1024;
	}	
cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	



//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////



cout<<"Tiempo insert_right"<<endl;

    dur10k = 0; dur1M = 0 ; dur10M = 0; dur100M = 0;
	cout<<"8 elementos por array"<<endl;
    for(int i = 0; i < 20 ; ++i){
        la1 = new ListArr(6,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 10000 ; ++j ){
        		la1->insert_right(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur10k = dur10k + duration.count();
    	delete la1;
	}

    for(int i = 0; i < 20 ; ++i){
        la1 = new ListArr(6,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 1000000 ; ++j ){
        		la1->insert_right(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur1M = dur1M + duration.count();
    	delete la1;
	}
	    for(int i = 0; i < 20 ; ++i){
        la1 = new ListArr(6,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 10000000 ; ++j ){
        		la1->insert_right(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur10M = dur10M + duration.count();
    	delete la1;
	}	
    for(int i = 0; i < 20 ; ++i){
        la1 = new ListArr(6,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 100000000 ; ++j ){
        		la1->insert_right(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur100M = dur100M + duration.count();
    	delete la1;
	}	
cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	

dur10k = 0; dur1M = 0; dur10M = 0; dur100M = 0;

cout<<"64 elementos por array"<<endl;

    for(int i = 0; i < 20 ; ++i){
        la1_64 = new ListArr(64,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 10000 ; ++j ){
        		la1_64->insert_right(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur10k = dur10k + duration.count();
    	delete la1_64;
	}

    for(int i = 0; i < 20 ; ++i){
        la1_64 = new ListArr(64,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 1000000 ; ++j ){
        		la1_64->insert_right(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur1M = dur1M + duration.count();
    	delete la1_64;
	}
	    for(int i = 0; i < 20 ; ++i){
		la1_64 = new ListArr(64,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 10000000 ; ++j ){
        		la1_64->insert_right(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur10M = dur10M + duration.count();
    	delete la1_64;
	}	
    for(int i = 0; i < 20 ; ++i){
        la1_64 = new ListArr(64,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 100000000 ; ++j ){
        		la1_64->insert_right(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur100M = dur100M + duration.count();
    	delete la1_64;
	}	
cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	

dur10k = 0; dur1M = 0; dur10M = 0; dur100M = 0;

cout<<"128 elementos por array"<<endl;

    for(int i = 0; i < 20 ; ++i){
        la1_128 = new ListArr(128,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 10000 ; ++j ){
        		la1_128->insert_right(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur10k = dur10k + duration.count();
    	delete la1_128;
	}

    for(int i = 0; i < 20 ; ++i){
        la1_128 = new ListArr(128,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 1000000 ; ++j ){
        		la1_128->insert_right(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur1M = dur1M + duration.count();
    	delete la1_128;
	}
	    for(int i = 0; i < 20 ; ++i){
		la1_128 = new ListArr(128,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 10000000 ; ++j ){
        		la1_128->insert_right(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur10M = dur10M + duration.count();
    	delete la1_128;
	}	
    for(int i = 0; i < 20 ; ++i){
        la1_128 = new ListArr(128,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 100000000 ; ++j ){
        		la1_128->insert_right(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur100M = dur100M + duration.count();
    	delete la1_128;
	}	
cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	

dur10k = 0; dur1M = 0; dur10M = 0; dur100M = 0;

cout<<"512 elementos por array"<<endl;

    for(int i = 0; i < 20 ; ++i){
        la1_512 = new ListArr(512,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 10000 ; ++j ){
        		la1_512->insert_right(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur10k = dur10k + duration.count();
    	delete la1_512;
	}

    for(int i = 0; i < 20 ; ++i){
        la1_512 = new ListArr(512,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 1000000 ; ++j ){
        		la1_512->insert_right(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur1M = dur1M + duration.count();
    	delete la1_512;
	}
	    for(int i = 0; i < 20 ; ++i){
		la1_512 = new ListArr(512,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 10000000 ; ++j ){
        		la1_512->insert_right(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur10M = dur10M + duration.count();
    	delete la1_512;
	}	
    for(int i = 0; i < 20 ; ++i){
        la1_512 = new ListArr(512,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 100000000 ; ++j ){
        		la1_512->insert_right(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur100M = dur100M + duration.count();
    	delete la1_512;
	}	
cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
cout<<"Tiempo promedio en ms con insercion de 1000000 elementos: "<<dur1M/20<<endl;	
cout<<"Tiempo promedio en ms con insercion de 10000000 elementos: "<<dur10M/20<<endl;
cout<<"Tiempo promedio en ms con insercion de 100000000 elementos: "<<dur100M/20<<endl;	

dur10k = 0; dur1M = 0; dur10M = 0; dur100M = 0;

cout<<"1024 elementos por array"<<endl;

    for(int i = 0; i < 20 ; ++i){
        la1_1024 = new ListArr(1024,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 10000 ; ++j ){
        		la1_1024->insert_right(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur10k = dur10k + duration.count();
    	delete la1_1024;
	}

    for(int i = 0; i < 20 ; ++i){
        la1_1024 = new ListArr(1024,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 1000000 ; ++j ){
        		la1_1024->insert_right(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur1M = dur1M + duration.count();
    	delete la1_1024;
	}
	    for(int i = 0; i < 20 ; ++i){
        la1_1024 = new ListArr(1024,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 10000000 ; ++j ){
        		la1_1024->insert_right(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur10M = dur10M + duration.count();
    	delete la1_1024;
	}	
    for(int i = 0; i < 20 ; ++i){
        la1_1024 = new ListArr(1024,8);
        auto start = high_resolution_clock::now();
        	for(int j = 0; j < 100000000 ; ++j ){
        		la1_1024->insert_right(5);
        	}
        auto end = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(end - start);
    	dur100M = dur100M + duration.count();
    	delete la1_1024;
	}	
cout<<"Tiempo promedio en ms con insercion de 10000 elementos: "<<dur10k/20<<endl;
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
	la1 = new ListArr(8,64);la2 = new ListArr(8,64);la3 = new ListArr(8,64);la4 = new ListArr(8,64);      
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
}