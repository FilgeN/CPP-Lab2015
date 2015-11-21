#include <iostream>
#include "string.h"




string::string(const char *oryginal){
	int size = 0;

	while( oryginal[size] != '\0'){
		size++;
	}
	_chars = new char[size+1];
	for(int i=0; i<size; i++){
		_chars[i] = oryginal[i];
	}
	_size = size;

}

string::~string(){
	delete [] _chars;
}

void string::print_n_chars(){
	std::cout<<"number of characters: "<<_size<<std::endl;
}

string& string::operator<<(const char *add){
	int size = 0;
	while( add[size] != '\0'){
		size++;
	}
	char *temp = new char[_size+1];

	for(int i=0; i<_size; i++){
		temp[i] = _chars[i];
	}

	delete [] _chars;
	_chars = new char[_size+size+1];
	for(int i=0; i<_size; i++){
		_chars[i] = temp[i];
	}
	for(int i=_size; i<_size+size+1; i++){
		_chars[i] = add[i-_size];
	}
	_size += size;
	delete [] temp;

	return *this;
}

void string::operator<<(const char addOne){

	char *temp = new char[_size+1];

	for(int i=0; i<_size; i++){
		temp[i] = _chars[i];
	}

	delete [] _chars;

	_chars = new char[_size+1+1];
	for(int i=0; i<_size; i++){
		_chars[i] = temp[i];
	}
	_chars[_size] = addOne;
	_size += 1;
	delete [] temp;
}

string string::operator()(const int start,const int stop){

	char *temp = new char[stop-start+1];
	for(int i=0; i<stop-start; i++){
		temp[i] = _chars[stop-i-1];
	}
	temp[stop-start] = '\0';
	string newOne(temp);
	delete [] temp;

	return newOne;
}

std::ostream& operator<<(std::ostream& wyjscie,const string &str){
	for(int i=str._size-1; i>=0; i--){
		wyjscie<< str._chars[i];
	}
	return wyjscie;
}

