// Ten plik wolno modyfikowac, nie wolno jednak korzystac z zadnych
// metod wypisujacych tekst na ekran oprocz tych, ktore sa juz
// zaimplementowane. Mozna zmieniac deklaracje metody PrzedstawSie,
// ale nie wolno zmienic jej implementacji.

#include "Kobieta.h"
#include <iostream>

Kobieta::Kobieta(int value) : Postac(value){

}

void Kobieta::PrzedstawSie() const
{
  std::cout<<"Jestem kobieta i mam "<<m_wiek<<" lat."<<std::endl;
}

