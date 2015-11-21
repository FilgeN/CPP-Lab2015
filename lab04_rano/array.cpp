#include <iostream>
#include "array.h"

array::array(float tab[], int size){
	_table = new float[size];
	for(int i=0; i<size; i++){
		_table[i] = tab[i];
	}
	_size = size;

}

array::~array(){
	delete [] _table;
}

array::array(const array &oryginal){
	_size = oryginal._size;
	_table = new float[_size];
	for(int i=0; i<_size; i++){
		_table[i] = oryginal._table[i];
	}
}

void array::print() const{	
	for(int i=0; i<_size; i++) 
		std::cout<<_table[i]<<" ";
	std::cout << std::endl;	
}

void array::squared() const{


}
