#include <cstdlib>
#include <ctime>
#include <iostream>
#include "AnSig.h"

double AnSig::operator ()(unsigned int time) const {
	if (time < 0) return -1;
	if (time == 0) return 0;
	return arr[time];
}

void AnSig::input_r(int x)
{
	for (int i = 0; i < x; i++)
		arr.push_back(rand());
}

void AnSig::print() const
{
	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] << " ";
	cout << "\n";
}

size_t AnSig::get_size_array() const
{
	return arr.size();
}