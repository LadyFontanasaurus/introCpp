//Mikaela Van Vooren
//CSCI 123 - T/Th 2:40-5:30
//Homework 2
//Due March 12th 2015
//Microsoft Visual Studios 2010

#include <iostream>
using namespace std;

const double	TAXPERGAL = 0.529,
		TAXPERMILE = 0.05;

void Input(double& Miles, double& Gals)
{
	bool invalid = false;
	
		cout<< "Please enter the miles driven." << endl;
		cin >> Miles;
		invalid = cin.fail();
		while (invalid == true)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout<< "This is not a valid input value, please try again and enter a number." << endl;
			cout<< "Please enter the miles driven." << endl;
			cin >> Miles;
			cin.ignore();
			invalid = cin.fail();
		} 

	cout<< "Please enter the gallons used." << endl;
	cin >> Gals;
	invalid = cin.fail();
		while (invalid == true)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout<< "This is not a valid input value, please try again and enter a number." << endl;
			cout<< "Please enter the gallons used." << endl;
			cin >> Gals;
			cin.ignore();
			invalid = cin.fail();
		} 
}

void CalcAndDisplay(double MilesDriven, double GalsUsed)
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	double TotalTaxForMilesDriven;
	double TotalTaxForFuel;

	TotalTaxForMilesDriven = MilesDriven*TAXPERMILE;
	TotalTaxForFuel = GalsUsed*TAXPERGAL;

	cout << "The total fuel tax is $" << TotalTaxForFuel << "." << endl;
	cout << "The total miles tax is $" << TotalTaxForMilesDriven << "." << endl;
}


int main()
{
	double	MilesDriven = 0, 
		GalsUsed = 0, 
		miles = 0,
		gallons = 0;
	char	menu,
		running = 'y',
		dataExists = 'n';

	while (running !='q')
	{
		cout<< "(E)nter the miles driven and the number of gals used"<< endl;
		cout<< "(C)alculate the two tax rates and display them" << endl;
		cout<< "(Q)uit the program" << endl;
		cin >> menu;

		switch(menu)
		{
			case 'E':
			case 'e':
				Input(MilesDriven, GalsUsed);
				dataExists = 'y';
				system("pause");
				system("cls");
				break;
			case 'C':
			case 'c':
				if (dataExists == 'y')
				{
					CalcAndDisplay(MilesDriven, GalsUsed);
					system("pause");
					system("cls");
				}
				else
				{
					cout<< "There is no data on file about the miles and gallons used. Please enter that first."<< endl;
					system("pause");	
					system("cls");
				}
				break;
			case 'q':
			case 'Q':
				running = 'q';
				system("cls");
				break;
			default:
				cout<< "That was not an acceptable option, please try one of the listed options.";
				system("pause");
				system("cls");
				break; 
		}
		//the return was originally here
	}
	return 0;
}