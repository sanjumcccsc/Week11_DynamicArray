#include "DAExample.h"
#include <iostream>;
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

void DAExample::generateRN()
{
	int minValue = 900, maxValue = 1500;
	int size = -1, number = -1;
	ofstream oFile("myData.txt");

	cout << "How many random numbers to generate: ";
	cin >> size;

	srand(time(0));

	for (int i = 0; i < size; i++)
	{
		number = rand() % (maxValue - minValue + 1) + minValue;
		cout << i << ": " << number << endl;
		oFile << number << endl;
	}
	oFile.close();
}

int DAExample::readRN()
{
	ifstream iFile("myData.txt");
	int tempNumber = -1;
	int counter = -1;

	while (!iFile.eof())
	{
		iFile >> tempNumber;
		counter++;
	}
	cout << "Number of numbers in the file is: " << counter << endl;
	iFile.close();
	return counter;
}

void DAExample::populateDA(int s)
{
	ifstream iFile("myData.txt");
	int* myNumbers = new int[s];

	for (int i = 0; i < s; i++)
	{
		iFile >> myNumbers[i];
	}
	iFile.close();
	displayArray(myNumbers, s);
}

void DAExample::displayArray(int *myNumbers, int size)
{
	cout << "Displaying dynamic array on the heap: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << myNumbers[i] << " ";
	}
}
