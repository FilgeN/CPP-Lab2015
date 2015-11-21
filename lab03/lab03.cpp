// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.

// Vector3 i VectorTrans3 to obiekty tylko trojwymiarowe.

// Vector3 to wektor "pionowy", natomiast VectorTrans3, to wektor
// "poziomy". Iloczyny tych obiektow wykonuje sie z godnie z zasadami
// mnozenia macierzy.

// Proszę zwrócić uwagę, że kolumny oddzielone są tabulatorami, a
// symbolem mnożenia jest wielka litera "X".

// UWAGA! Po włączeniu którejkolwiek z linii zawartych w #define
// ERROR_ powinien pojawić się błąd kompilacji. Brak błędu kompilacji
// oznaczna niepoprawną kompilację programu i 0 punktów.

// Makefile dolaczony do rozwiazania powinien tworzyc plik wykonywalny
// o nazwie Lab03. Program nalezy kompilowac z flagami -Wall -g.

// Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.

// Tego pliku nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod). Powinien działać dla dowolnej
// liczby przekształceń.

// Przy wykonaniu zadania nie wolno korzystać z internetu, notatek,
// ani żadnych innych materiałów (w tym własnych wcześniej
// przygotowanych plików)

// Kody źródłowe muszą znajdować się w katalogu ~/oop/lab_LABNR. Prawa
// do tego katalogu muszą być równe 700 (tylko dostęp dla
// właściciela).

// Skonczone zadanie nalezy wyslac uruchamiajac skrypt 
// /home/dokt/dog/WyslijZadanie.sh
// bedac w katalogu zawierajacym rozwiazanie czyli ~/oop/lab_03


#include<iostream>
#include"lab03.h"

//#define ERROR_FIRST
//#define ERROR_SECOND
//#define ERROR_THIRD

using namespace std;
int main ()
{
  const Vector3* speed = Vector3::Factory(1, 2.2, 3);
  Vector3* speed2 = Vector3::Factory(101, 102, 103);
  Vector3* speed3 = Vector3::Factory(201, 202, 203);

  delete speed2;
  delete speed3;
  speed3 = Vector3::Factory(201, 202, 203);
  delete speed3;

#ifdef ERROR_FIRST
  Vector3 speedLimit (1, 1, 1);
#endif
#ifdef ERROR_SECOND
  Vector3 speedLimit2;
#endif

  const VectorTrans3 speedTrans (5, 2, 7);

#ifdef ERROR_THIRD
  VectorTrans3 speedTransLimit2;
#endif

  
  

  speed->Times(speedTrans);
  speedTrans.Times(*speed);

  delete speed;

  return 0;
}
/*
Tworze obiekt nr 1
Tworze obiekt nr 2
Tworze obiekt nr 3
Tworze obiekt nr 2

ILOCZYN SKALARNY
5	2	7
X
1
2.2
3
=
30.4

MACIERZ
1
2.2
3
X
5	2	7
=
5	2	7
11	4.4	15.4
15	6	21
*/
