// Ten plik wolno modyfikowac, nie wolno jednak korzystac z zadnych
// metod wypisujacych tekst na ekran oprocz tych, ktore sa juz
// zaimplementowane. Mozna zmieniac deklaracje metody PrzedstawSie,
// ale nie wolno zmienic jej implementacji.

#include "Leela.h"
#include <iostream>

Leela::Leela(int value) : Kobieta(value){
}

void Leela::PrzedstawSie() const
{
  std::cout<<"Jestem Leela i mam "<<m_wiek<<" lat."<<std::endl;
}

Leela* Leela::Utworz(int value){
	Leela* leela = new Leela(value);
	_tablicaPostaci[_licznik] = leela;
	_licznik++;
	return leela;
}
