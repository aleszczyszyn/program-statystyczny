/*
1. Stw�rz klas�, kt�ra b�dzie odpowiedzialna za proste rachunki statystyczne na tablicach liczb:
a) klasa w konstruktorze ma przyjmowa� liczb� element�w N;
b) na podstawie liczby element�w stworzy dynamiczn� tablic� o wielko�ci N oraz wype�ni tablic� losowymi liczbami z przedzia�u 0-100;
c) tablica ma by� niemodyfikowalna po utworzeniu - wszystkie dzia�ania maj� odbywa� si� na tej samej tablicy;
d) klasa ma mie� pola / metody, kt�re umo�liwi� dost�p do: element�w tablicy oraz do liczby element�w:
- metoda wy�wietlaj�ca liczb� element�w,
- metoda wy�wietlaj�ca element pod danym indeksem (niech rzuca wyj�tek zdefiniowany przez ciebie wyj�tek przy podaniu b��dnego indeksu);
e) klasa ma mie� metody statystyczne:
- �rednia element�w,
- suma element�w,
- median� element�w,
- wariancj�,
- odchylenie standardowe,
- min i max spo�r�d wszystkich warto�ci.
f) dodatkowo zaimplementuj jakie� sortowanie (mo�e nie bubble sort, tylko co� trudniejszego ;) ).
e) wy�wietlanie zdefiniuj w innej klasie - klas� do rachunk�w potraktuj jako model danych, kt�ry daje tylko dost�p do danych element�w (ale nie do ich modyfikacji); zdefiniuj klas� presenter, kt�ra b�dzie wy�wietla� tablic� z klasy rachunk�w - prezentacja niech odbywa si� tutaj cout�em albo printem - chodzi mi tylko o pokazanie Ci koncepcji oddzielania warstwy modelu danych od prezentacji; jak wejdziemy na jak�� konkretn� technologi� mobiln�, b�d� stara� od samego pocz�tku zwraca� Ci uwag� na poprawn� architektur� oprogramowania oraz wykorzystywanie wzorc�w projektowych.
*/
# include <iostream>
# include "Count.h"
# include "Presenter.h"

using namespace std;


int main()
{
	Presenter obiekt;
	obiekt.display(5, 3);// argumenty: liczba elementow tablicy oraz nr indeksu tablicy do wyswietlenia

	system("Pause");
	return 0;
}