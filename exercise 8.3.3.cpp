// This is a program lets user enter 5 subjects marks for a class of 30 students.
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	double marks[30][5], lowestMarks,highestMarks, sumColumn=0;
	for (int i = 0; i < 30; i++)
	{	
		cout << "student " << i + 1<< ": ";
		cout << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "Please key in the marks for subject " << j+1 << ":";
			cin >> marks[i][j];
		}
	}
	for (int i = 0; i < 30; i++)
	{
		double sumRow = 0;
		for (int j = 0; j < 5;)
		{			
			sumRow += marks[i][j++];
		}
		cout << "Total marks for student " << i + 1<< " is " << sumRow << endl;
		cout << "The average marks for student " << i + 1 << ":" << sumRow / 5 << endl;
	}
	lowestMarks = marks[0][0];
	for (int j = 0; j< 5 ; j++)
	{		
		for (int i = 0; i < 30; i++)
		{
			if (marks[i][j] < lowestMarks)
				lowestMarks = marks[i][j];
		}
		cout << "The lowest marks for subject  " << j +1<< "is" << lowestMarks << endl;
	}
	highestMarks = marks[0][0];
	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 30; i++)
		{
			if (marks[i][j] > highestMarks)
				highestMarks = marks[i][j];
		}
		cout << "The highest marks for subject " << j+1 << "is" << highestMarks << endl;
	}
	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 30; i++)
		{
			sumColumn += marks[i][j];
		}
		cout << "The average marks of subject " << j + 1  << ":" << sumColumn / 3 << endl;
		sumColumn = 0;
	}
}