// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal sie
// i dzialal zgodnie z ponizszym opisem, a wynik jego dzialania byl
// taki sam jak podany na końcu tego pliku.

// Prosze zaimplementowac klasy, ktore beda reprezentowaly
// osoby. Kazda osoba ma imie i wiek.

// Po odkomentowaniu ktorejkolwiek z linii definiujących makra ERROR_
// powinien pojawic sie blad kompilacji w uruchomionej linii i tylko w
// tej lnii. Jezeli taki blad sie nie pojawi kod zostanie uznany za
// niekompilujacy sie poprawnie, co bedzie rownoznaczne z otrzymaniem
// 0 punktow.

// UWAGA! Nie wolno korzystac z zadnych metod wypisujacych tekst na
// ekran oprocz, tych ktore sa juz zaimplementowane.

// UWAGA! W przypadku zlego wyjscia programu (wypiswaniu na ekran
// tekstu niezgodnego z wzorcem) ani kod ani dokumentacja nie beda
// ocenione, poniewaz w tym zadaniu kluczowe jest poprawne dzialanie
// programu.

// Makefile dolaczony do rozwiazania powinien tworzyc plik wykonywalny
// o nazwie Lab06. Program nalezy kompilowac z flagami -Wall -g.

// Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.

// Pliku Lab6.cpp, nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod). Prosze utrzymac spojnosc
// nazewnictwa w programie oraz jezyka w komentarzach.

// Przy wykonaniu zadania nie wolno korzystać z internetu, notatek,
// ani żadnych innych materiałów (w tym własnych wcześniej
// przygotowanych plików)

// Kody źródłowe muszą znajdować się w katalogu ~/oop/lab_LABNR. Prawa
// do tego katalogu muszą być równe 700 (tylko dostęp dla
// właściciela).

// Skonczone zadanie nalezy wyslac uruchamiajac skrypt 
// ~gach/WyslijZadanie.sh
// bedac w katalogu zawierajacym rozwiazanie.

#include"Lab6.h"
#include<iostream>

//#define ERROR_FIRST
//#define ERROR_SECOND


int main ()
{
  using namespace std;
  
 Leela* pierwszaLeela =  Leela::Utworz(26);
 const Leela drugaLeela (28);
 const Kobieta* pierwszaKobieta = pierwszaLeela;
  Postac* pierwszaPostac = pierwszaLeela;

  cout<<"========== Wskazniki Leela ==========\n";
  (*pierwszaPostac).PrzedstawSie();
  (*pierwszaKobieta).PrzedstawSie();
  (*pierwszaLeela).PrzedstawSie();
  (*pierwszaLeela).PodajWiek();

  cout<<"========== Wypisz Kobieta ==========\n";
  Wypisz(*pierwszaLeela, &Postac::PrzedstawSie);
  Wypisz(*pierwszaLeela, &Postac::PodajWiek);
  Wypisz(drugaLeela, &Postac::PrzedstawSie);
  Wypisz(drugaLeela, &Postac::PodajWiek);

  cout<<"========== Wypisz dobrze Leela ==========\n";
  WypiszDobrze(*pierwszaLeela, &Postac::PrzedstawSie);
  WypiszDobrze(*pierwszaLeela, &Postac::PodajWiek);
  WypiszDobrze(drugaLeela, &Postac::PrzedstawSie);
  WypiszDobrze(drugaLeela, &Postac::PodajWiek);

#ifdef ERROR_FIRST
  Leela nielegalnaLeela = 16;
#endif
  
  Fry pierwszyFry (1030);
  Mezczyzna* pierwszyMezczyzna = &pierwszyFry;
  Postac* drugaPostac = &pierwszyFry;

  Fry* drugiFry = Fry::Utworz (1025);
  
  cout<<"========== Wskazniki Fry ==========\n";
  (*drugaPostac).PrzedstawSie();
  (*pierwszyMezczyzna).PrzedstawSie();
  pierwszyFry.PrzedstawSie();
  pierwszyFry.PodajWiek();

  cout<<"========== Wypisz Mezczyzna ==========\n";
  Wypisz(pierwszyFry, &Postac::PrzedstawSie);
  Wypisz(pierwszyFry, &Postac::PodajWiek);
  Wypisz(*drugiFry, &Postac::PrzedstawSie);
  Wypisz(*drugiFry, &Postac::PodajWiek);

#ifdef ERROR_SECOND
  Fry nielegalnyFry = 1030;
#endif

  cout<<"========== Wypisz dobrze Fry ==========\n";
  WypiszDobrze(pierwszyFry, &Postac::PrzedstawSie);
  WypiszDobrze(pierwszyFry, &Postac::PodajWiek);
  WypiszDobrze(*drugiFry, &Postac::PrzedstawSie);
  WypiszDobrze(*drugiFry, &Postac::PodajWiek);

  Postac::Posprzataj();

  return 0;
}
/*
========== Wskazniki Leela ==========
Jestem Leela i mam 26 lat.
Jestem Leela i mam 26 lat.
Jestem Leela i mam 26 lat.
Mam 26 lat.
========== Wypisz Kobieta ==========
Jestem kobieta i mam 26 lat.
Mam 26 lat.
Jestem kobieta i mam 28 lat.
Mam 28 lat.
========== Wypisz dobrze Leela ==========
Jestem Leela i mam 26 lat.
Mam 26 lat.
Jestem Leela i mam 28 lat.
Mam 28 lat.
========== Wskazniki Fry ==========
Jestem Fry i mam 1030 lat.
Jestem Fry i mam 1030 lat.
Jestem Fry i mam 1030 lat.
Mam 1030 lat.
========== Wypisz Mezczyzna ==========
Jestem mezczyzna i mam 1030 lat.
Mam 1030 lat.
Jestem mezczyzna i mam 1025 lat.
Mam 1025 lat.
========== Wypisz dobrze Fry ==========
Jestem Fry i mam 1030 lat.
Mam 1030 lat.
Jestem Fry i mam 1025 lat.
Mam 1025 lat.
*/
