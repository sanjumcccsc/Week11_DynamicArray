#include "DAExample.h"
#include <iostream>
using namespace std;

int main()
{
	DAExample d;
	int size = -1;

	d.generateRN();
	size = d.readRN();
	cout << "size = " << size << endl;
	d.populateDA(size);

	return 0;
}