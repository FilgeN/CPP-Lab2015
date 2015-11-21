// Ten plik wolno modyfikowac, nie wolno jednak korzystac z zadnych
// metod wypisujacych tekst na ekran oprocz tych, ktore sa juz
// zaimplementowane. Mozna zmieniac deklaracje metod, PodajWiek i
// PrzedstawSie, ale nie wolno zmieniac ich implementacji.

#include "Postac.h"
#include <iostream>

Postac** Postac::_tablicaPostaci = new Postac*[2] ;
int Postac::_licznik = 0;

void Postac::PrzedstawSie() const
{
std::cout<<"Jestem postacia i mam "<<m_wiek<<" lat."<<std::endl;
}

void Postac::PodajWiek() const
{
  std::cout<<"Mam "<<m_wiek<<" lat."<<std::endl;
}

Postac::Postac(){
	m_wiek = 0;
}

Postac::Postac(int value){
	m_wiek = value;
}

Postac::~Postac() {}

void Postac::Posprzataj(){
	delete _tablicaPostaci[0];
	delete _tablicaPostaci[1];
	delete [] _tablicaPostaci;
}






void Wypisz(const Postac& p, drukFunkcja fun ){
	(p.*fun)();
}
void WypiszDobrze(const Postac& p, drukFunkcja fun ){
	(p.*fun)();
}