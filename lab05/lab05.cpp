// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.

// Prosze zaimplementowac klase ktora bedzie przechowywala ciag
// znakow. Jezeli przekaze sie te klase na cout, wowczas przechowywany
// ciag znakow wypisywany jest od tylu. Tablica w ktorej klasa bedzie
// przechowywala ciag znakow powinna miec najmniejszy mozliwy rozmiar.

// UWAGA! Nie wolno korzystac z niczego co znajduje sie w bibliotece
// standardowej oprocz cout i endl.

// UWAGA! Za problemy z pamięcią np. wycieki odejmę 1.5 punktu za
// wykonanie.

// Pliku lab05.cpp, nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod). 

// Makefile dolaczony do rozwiazania powinien tworzyc plik wykonywalny
// o nazwie *Lab05*. Program nalezy kompilowac z flagami -Wall -g.

// Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.

// Przy wykonaniu zadania nie wolno korzystać z internetu, notatek,
// ani żadnych innych materiałów (w tym własnych wcześniej
// przygotowanych plików)

// Kody źródłowe muszą znajdować się w katalogu ~/oop/lab_LABNR. Prawa
// do tego katalogu muszą być równe 700 (tylko dostęp dla
// właściciela).

// Skonczone zadanie nalezy wyslac uruchamiajac skrypt 
// ~gach/WyslijZadanie.sh
// bedac w katalogu zawierajacym rozwiazanie czyli ~/oop/lab_05
  
#include "lab05.h"
#include "lab05.h"

int main ()
{
  string firstName = "Kon";
  firstName.print_n_chars();
  firstName<<"sta";
  firstName.print_n_chars();
  firstName<<"nt"<<'y';
  
  string secondName = "Ilde";
  secondName<<"fons";
  std::cout<<"middle letters: "<<secondName(2,7)<<"\n";

  // print backwards
  std::cout<<firstName<<" "<<secondName<<"\n";

  return 0;
}
/*
number of characters: 3
number of characters: 6
middle letters: defon
ytnatsnoK snofedlI
*/
