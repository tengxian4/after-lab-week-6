// returning pointers from functions
#include "pch.h"
#include <iostream>
using namespace std;
char* output()
{
	int alphabet;
	cout << "pls enter the alphabet : ";
	cin >> alphabet;// dynamic memory allocation is used because the alphabet is not constant, normal array that we hv learned before, must hv a constant for alphabet
	char *array1;
	array1 = new char[alphabet];
	cout << "Enter ur name : ";
	cin.ignore(); // to ignore the previous cin
	cin.getline(array1, alphabet);
	return array1;

}
int main()
{
	char *output1;
	output1 = output();
	int i = 0;
	while (output1[i] != '\0')
	{
		cout << output1[i];
		i++;
	}
	delete[] output1; // free the allocated memory
	output1 = 0;// must write this, it prevent the code from accidentally using the pointer to access the area of memory that was freed 
		// second, it prevents errors from occuring if delete is accidentally called on the pointer again
	return 0;
}
// returning pointers from functions
#include "pch.h"
#include <iostream>
using namespace std;
char *input(int);
int main()
{
	char *name;
	int integer;
	cout << "pls key in the integer ";
	cin >> integer;
	name = input(integer);
	cout << name;
	
}
char *input(int inte)
{
	char *name;
	cout << "pls key in ur name : ";
	name = new char[inte];
	cin.ignore();
	cin.getline(name, inte);
	return name;
}