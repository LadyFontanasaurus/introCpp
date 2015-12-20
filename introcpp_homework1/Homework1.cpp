//Mikaela Van Vooren
//CSCI 123 T/Th 2:40-5:30pm
//Homework 1
// Due Feb. 19th 2015
//Visual Studio 2012

//This program calulates the miles per gallon of a trip based on the user given 
//values from miles and gallons. It also loops forever so long as the user does not enter 'q'

#include <iostream>
using namespace std;

int main()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	double miles = 0.0, gallons = 0.0, mpg = 0.0;
	char run = 'y';

	cout<<"Welcome, this program takes the number of miles traveled a trip and the corresponding number of gallons and gives your miles per gallon."<<endl;

	while (run != 'q' ||  run != 'Q')
	{
		cout<<"Please enter the miles traveled on this trip."<<endl;
		cin>> miles;
		cout<<"Please enter the total gallons used on this trip."<<endl;
		cin>>gallons;

		mpg = miles/gallons;

		cout<<"Your miles per gallon was "<< mpg << endl;
		cout<<"If you would like to quit please enter 'q', otherwise press any button to continue." << endl;
		cin>>run;

	}

	system("pause");

	return 0;
}