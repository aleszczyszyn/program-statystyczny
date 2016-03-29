/*
1. Stwórz klasê, która bêdzie odpowiedzialna za proste rachunki statystyczne na tablicach liczb:
a) klasa w konstruktorze ma przyjmowaæ liczbê elementów N;
b) na podstawie liczby elementów stworzy dynamiczn¹ tablicê o wielkoœci N oraz wype³ni tablicê losowymi liczbami z przedzia³u 0-100;
c) tablica ma byæ niemodyfikowalna po utworzeniu - wszystkie dzia³ania maj¹ odbywaæ siê na tej samej tablicy;
d) klasa ma mieæ pola / metody, które umo¿liwi¹ dostêp do: elementów tablicy oraz do liczby elementów:
- metoda wyœwietlaj¹ca liczbê elementów,
- metoda wyœwietlaj¹ca element pod danym indeksem (niech rzuca wyj¹tek zdefiniowany przez ciebie wyj¹tek przy podaniu b³êdnego indeksu);
e) klasa ma mieæ metody statystyczne:
- œrednia elementów,
- suma elementów,
- medianê elementów,
- wariancjê,
- odchylenie standardowe,
- min i max spoœród wszystkich wartoœci.
f) dodatkowo zaimplementuj jakieœ sortowanie (mo¿e nie bubble sort, tylko coœ trudniejszego ;) ).
e) wyœwietlanie zdefiniuj w innej klasie - klasê do rachunków potraktuj jako model danych, który daje tylko dostêp do danych elementów (ale nie do ich modyfikacji); zdefiniuj klasê presenter, która bêdzie wyœwietlaæ tablicê z klasy rachunków - prezentacja niech odbywa siê tutaj cout’em albo printem - chodzi mi tylko o pokazanie Ci koncepcji oddzielania warstwy modelu danych od prezentacji; jak wejdziemy na jak¹œ konkretn¹ technologiê mobiln¹, bêdê stara³ od samego pocz¹tku zwracaæ Ci uwagê na poprawn¹ architekturê oprogramowania oraz wykorzystywanie wzorców projektowych.
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