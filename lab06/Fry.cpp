// Ten plik wolno modyfikowac, nie wolno jednak korzystac z zadnych
// metod wypisujacych tekst na ekran oprocz tych, ktore sa juz
// zaimplementowane. Mozna zmieniac deklaracje metod, PodajWiek i
// PrzedstawSie, ale nie wolno zmieniac ich implementacji.

#include "Fry.h"
#include <iostream>

void Fry::PrzedstawSie() const
{
  std::cout<<"Jestem Fry i mam "<<m_wiek<<" lat."<<std::endl;
}

Fry::Fry(int value) : Mezczyzna(value){
}

Fry* Fry::Utworz(int value){
	Fry* fry = new Fry(value);
	_tablicaPostaci[_licznik] = fry;
	_licznik++;
	return fry;
}
