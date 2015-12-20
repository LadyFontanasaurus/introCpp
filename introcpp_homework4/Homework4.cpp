//Mikaela Van Vooren
//CSCI 123 - T/Th 2:40-5:30
//Homework 4
//Due April 23th 2015
//Microsoft Visual Studios 2010

#include <iostream>
#include "Homework4.h"


 int main()
 {
	 int actualSize = 0;
	 Scrambler random = Scrambler();
	 actualSize = random.input();
	 actualSize--;
	 random.reverser(actualSize);
	 random.output();
	 system("pause");
	 return 0;
 }

 int Scrambler::input()
 {
	 int actualSize;
	cout << "Please enter a sentance for me to reverse." << endl;
	cin.get(inbuff, MAXSIZE);
	actualSize = cin.gcount();
	cin.ignore();
	return actualSize;
 }

 void Scrambler::output()
 {
	 cout << inbuff << endl;
 }

 void Scrambler::reverser(int actualSize)
 {
	char	temp;
	int		last = 0,
			iterations = actualSize/2;
	for(int i=0; i<=iterations; i++) 
		{
			last = actualSize - i; 
			temp = inbuff[last]; 
			inbuff[last] = inbuff[i];
			inbuff[i]=temp;
			
		}
 }