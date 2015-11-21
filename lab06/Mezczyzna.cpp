// Ten plik wolno modyfikowac, nie wolno jednak korzystac z zadnych
// metod wypisujacych tekst na ekran oprocz tych, ktore sa juz
// zaimplementowane. Mozna zmienic deklaracje metody PrzedstawSie ale
// nie wolno zmieniac jej implementacji.

#include "Mezczyzna.h"
#include <iostream>


Mezczyzna::Mezczyzna(int value) : Postac(value){

}

void Mezczyzna::PrzedstawSie() const
{
  std::cout<<"Jestem mezczyzna i mam "<<m_wiek<<" lat."<<std::endl;
}


