#include "Count.h"
# include <iostream>
# include <string.h>
# include <cstdlib>


using namespace std;

Count::Count(int _n)
{
	n = _n;
	tab = new float[n];
	float tmp;

	for (int i = 0; i < n; i++)
	{
		tmp = (float)rand() / RAND_MAX;
		tab[i] = (float)min_value + ((float)max_value - (float)min_value) * tmp;
	}
}


float Count::sum()
{
	float _sum = 0;
	for (int i = 0; i < n; i++)
		_sum += tab[i];
	return _sum;
}


float Count::min()
{
	float _min = max_value;
	for (int i = 0; i < n; i++)
	{
		if (tab[i] < _min)
			_min = tab[i];
	}
	return _min;
}


float Count::max()
{
	float _max = min_value;
	for (int i = 0; i < n; i++)
	{
		if (tab[i] > _max)
			_max = tab[i];
	}
	return _max;
}


float Count::variance()
{
	float _var = 0;
	float _aver = average();
	for (int i = 0; i < n; i++)
	{
		_var += pow(tab[i] - _aver, 2);
	}

	_var /= n;
	return _var;
}



float Count::median()
{
	float _med;
	if (n % 2 == 0)
		_med = (tab[n / 2] + tab[(n / 2) - 1]) / 2;
	else
		_med = tab[n / 2];
	return _med;
}


void Count::quickSort(int _left, int _right)
{
	int l = _left;
	int r = _right;
	float x = tab[_left];
	do {
		while (tab[l]<x)
			l++;
		while (tab[r]>x)
			r--;
		if (l <= r)
		{
			swap(tab[l], tab[r]);
			l++;
			r--;
		}
	} while (l <= r);

	if (_left < r)
		quickSort(_left, r);
	if (_right > l)
		quickSort(l, _right);
}