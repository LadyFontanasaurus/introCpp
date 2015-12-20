//Mikaela Van Vooren
//CSCI 123 - T/Th 2:40-5:30
//Homework 3
//Due April 7th 2015
//Microsoft Visual Studios 2010

#include <iostream>
#include "Homework3.h"
using namespace std;

void Input(char InputBuffer[]);

int main()

{
	char	menu,
			running = 'w',
			dataExists = 'n',
			inbuff[MAXSIZE]; 

	while (running !='q')
	{
			cout<< "(E)nter the sentance to process"<< endl;
			cout<< "(C)ount the letters and display them" << endl;
			cout<< "(Q)uit the program" << endl;
			cin >> menu;
			cin.ignore();

			switch(menu)
			{
				case 'E':
				case 'e':
					Input(inbuff);
					dataExists = 'y';
					system("pause");
					system("cls");
					break;
				case 'C':
				case 'c':
					if (dataExists == 'y')
					{
						CountAndDisplay(inbuff);
						//[; was in the paper that I sent for some reason
						//so the hard copy is ever so slightly different
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
			} //end of switch
	}//end of while
			return 0;
}; 
void Input (char InputBuffer[])
{
	cout << "Please enter a sentance for me to analyze." << endl;
	cin.get(InputBuffer, MAXSIZE);
}
//This program will say that there are x amonut of a, b, c, ect...
void CountAndDisplay(char InputBuffer[])
{
	char asciiCount = ' ';
	int numCount = static_cast<int>(asciiCount); 
	int total = 0;
	while (asciiCount <= 'z')
	{
		if ((asciiCount >= 'a' && asciiCount <= 'z') || (asciiCount >= 'A' && asciiCount <='Z') || (asciiCount <= '0' && asciiCount >= '9') || asciiCount == ' ')
		{	
			for(int i = 0; i <= MAXSIZE; i++)
			{
				if(InputBuffer[i] == asciiCount)
					total++;
			}
			if (total != 0)
			cout << "There are " << total << ", " << asciiCount << "'s " << endl;
			total = 0;
			numCount++;
			asciiCount++;
		}
		else
			asciiCount++;
	}
}; 




