#include "Presenter.h"
#include <iostream>
#include "Count.h"

using namespace std;


void Presenter::display(int _n, int _el)
{
	Count obiekt(_n);

	cout << "dlugosc tablicy: " << obiekt.tabLenght() << endl;

	for (int i = 0; i < _n; i++)
		cout << obiekt.tabElement(i) << " ";
	cout << endl;

	if (_el < 0 || _el >= _n)
		cout << "Niepoprawny indeks tablicy!" << endl;
	else
		cout << "tab[" << _el << "] = " << obiekt.tabElement(_el) << endl;

	cout << "suma: " << obiekt.sum() << endl;
	cout << "srednia: " << obiekt.average() << endl;
	cout << "min: " << obiekt.min() << endl;
	cout << "max: " << obiekt.max() << endl;
	cout << "wariancja: " << obiekt.variance() << endl;
	cout << "odchylenie: " << obiekt.sd() << endl;
	obiekt.quickSort(0, _n - 1);

	cout << "quick sort: ";
	for (int i = 0; i < _n; i++)
		cout << obiekt.tabElement(i) << " ";
	cout << endl;

	cout << "mediana: " << obiekt.median() << endl;
}
