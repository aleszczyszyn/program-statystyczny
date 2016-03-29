#pragma once

# include <iostream>
using namespace std;


class Count
{
	float *tab;
	int n;						// liczba elementow
	const int max_value = 100;
	const int min_value = 0;

public:
	Count(int _n);
	~Count() { delete[] tab; }

	float tabElement(int _el) { return tab[_el]; }
	int tabLenght() { return n; }
	float average() { return sum() / n; }
	float sum();
	float min();
	float max();
	float variance();
	float sd() { return sqrt(variance()); }
	float median();
	void quickSort(int _left, int _right);
};

