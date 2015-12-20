#include <iostream>
using namespace std;
#include "Homework5.h"
int main()
{
	primeNums random;
	random.input();
	random.output();
    cout << endl << "Press any key to quit." << endl;
	cin.get();
	return 0;
};

void primeNums::output()
{
	for (int k = 0; k <= MAXSIZE-1; k++)
	{
			if (numList[k] != 0)
				cout << numList[k] << '\t';
	}
	cout << endl << "Are the prime numbers from 1 - 1000." << endl;
}

void primeNums::input()
{
	for (int i = 2; i <= MAXDIVISOR; i++)
	{
		for (int j = 0; j <= MAXSIZE-1 ; j++)
		{
			if (numList[j] != 0 && i != 0)
			{
				if((numList[j]%i == 0 && numList[j] != i) && numList[j] != 0) 
				{
					numList[j] = 0;
				}
			}
		}
	}
}
primeNums::primeNums()
{
	for (int index = 0; index<=MAXSIZE-1; index++)
	{
		numList[index] = index+2;
	}
}