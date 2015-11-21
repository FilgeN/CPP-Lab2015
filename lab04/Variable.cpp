//Variable.cpp
#include <iostream>
#include "Variable.h"
#include <cstring>

/*
float speed = distance.divide(time);   
float acceleration = distance.divide(time).divide(time);
*/

int Variable::licznik = 0;
/**
 * Konstruktor tworzocy obiekt nowej 'zmiennej'
 *
 */
Variable::Variable(const char* nazwa, float& wartosc){
	//std::cout << strlen(nazwa) << std::endl;
	_nazwa = new char[ strlen(nazwa) +1 ];
	strcpy(_nazwa, nazwa);
	_nazwa[ strlen(nazwa) ] = '\0';
	_wartosc = &wartosc;

	licznik++;
	_ID = licznik;
	std::cout << "creating variable no. "<< _ID
			  <<" named: "<< _nazwa << "\n";
}

Variable::Variable(const Variable& oryginal){
	_nazwa = new char[ strlen(oryginal._nazwa) ];
	strcpy(_nazwa, oryginal._nazwa);
	_wartosc = oryginal._wartosc;
	
	licznik++;
	_ID = licznik;
	std::cout << "creating variable no. "<< _ID
			  <<" named: "<< _nazwa << "\n";
}

Variable::~Variable(){
	std::cout << "Deleting variable no. "<< _ID << "\n";
	delete [] _nazwa;
}

void Variable::print(){
	std::cout << _nazwa << " = " << *_wartosc << "\n";
}

Variable Variable::divide(Variable variable){
	char *tempNazwa = new char[20];
	float tempWartosc;

	strcpy( tempNazwa, _nazwa );
	tempNazwa[strlen(_nazwa)] = '/';
	strcpy( tempNazwa+strlen(_nazwa)+1, variable._nazwa);
	//std::cout << tempNazwa << std::endl;

	tempWartosc = *_wartosc / *variable._wartosc;
	Variable temp = Variable(tempNazwa, tempWartosc);
	
	//*temp._wartosc = *temp._wartosc/ *variable._wartosc;

	delete [] tempNazwa;
	return temp;
}



