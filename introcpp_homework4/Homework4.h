//Mikaela Van Vooren
//CSCI 123 - T/Th 2:40-5:30
//Homework 4
//Due April 23th 2015
//Microsoft Visual Studios 2010
#ifndef HOMEWORK4
#define HOMEWORK4
using namespace std;
const int MAXSIZE = 132;

class Scrambler {
	char inbuff[MAXSIZE];
public:
	Scrambler()
	{
		for(int i=0; i<=MAXSIZE-1; i++)
		{
			inbuff[i] = '\0';
		}
	}
	int input();
	void output();
	void reverser(int actualSize);
};
#endif