// ati problemaGrupProgramatori.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cstring>
#define DMAX 201


using namespace std;

ifstream fin("date.in");

int v[DMAX], sum = 0, min = 99999999, elem;

int main()
{
	int  x, n, i, j;

	fin >> n;
	for (i = 0; i < n; i++) {
		fin >> v[i];
	}

	for (i = 0; i < n; i++) {
		x = v[i];
		sum = 0;
		for (j = 0; j < n; j++) {
			sum += abs(v[j] - x);
		}
		if (sum < min) {
			min = sum;
			
			elem = x;
		}
	}

	cout << elem;
	return 0;
}

