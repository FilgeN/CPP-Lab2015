// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.

// Prosze zaimplementowac klase odpowiadajaca wielkosci fizycznej,
// ktora przechowuje nazwe zmiennej i jej wartosc. Kazdy z utworzonych
// obiektow tej klasy otrzymuje unikalny numer id. Pierwszy obiekt
// otrzymuje numer 1, drugi numer 2, itd. Gdy obiekt tej klasy jest
// tworzony na ekran jest wypisywany odpowiedni komunikat zawierajacy
// nazwe numer id tego obiektu i jego nazwe. Gdy obiekt jest niszczony
// rowniez wypisywany jest komunikat na ekran.

// UWAGA! Nie wolno przeładowywac operatorow "<<" i
// przypisania. Przeładowanie, któregos z tych operatorow jest
// rownoznaczne z otrzymaniem 0 punktów.

// UWAGA! Zarzadzanie pamiecia w tym przypadku moze okazac sie
// nietrywialne, wiec prosze zwrocic na nie uwage. Za problemy z
// pamiecia w tym zadaniu odejme do 1.5 punktu za wykonanie.

// Nie wolno korzystac z internetu, a wiec i z dokumentacji do
// biblioteki standardowej. Pytania zwiazane z biblioteka prosze
// zglaszac prowadzacemu zajecia.

// Pliku lab04.cpp, nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod). 

// Makefile dolaczony do rozwiazania powinien tworzyc plik wykonywalny
// o nazwie Lab04. Program nalezy kompilowac z flagami -Wall -g.

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
// bedac w katalogu zawierajacym rozwiazanie czyli ~/oop/lab_04


#include"lab04.h"
#include<iostream>

int main ()
{
  float distVal (15), timeVal (3);
  Variable distance ("distance", distVal);
  Variable time ("time", timeVal);

	
  std::cout<<"----- original -----\n";
  distance.print();
  time.print();

  distVal = 300;
  timeVal = 100;
  
  std::cout<<"----- changed -----\n";
  distance.print();
  time.print();
  std::cout<<"========================================\n";
 
  float speed = distance.divide(time);   
  float acceleration = distance.divide(time).divide(time);

  std::cout<<"speed: "<<speed<<" acceleration: "<<acceleration<<"\n";

  return 0;
}
/*
creating variable no. 1 named: distance
creating variable no. 2 named: time
----- original -----
distance = 15
time = 3
----- changed -----
distance = 300
time = 100
========================================
creating variable no. 3 named: time
creating variable no. 4 named: distance/time
Deleting variable no. 4
Deleting variable no. 3
creating variable no. 5 named: time
creating variable no. 6 named: time
creating variable no. 7 named: distance/time
creating variable no. 8 named: distance/time/time
Deleting variable no. 8
Deleting variable no. 7
Deleting variable no. 6
Deleting variable no. 5
speed: 3 acceleration: 0.03
Deleting variable no. 2
Deleting variable no. 1
*/
