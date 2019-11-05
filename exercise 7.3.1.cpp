//This program is to calculate the multiplication and division of two numbers
#include "pch.h"
#include <iostream>
using namespace std;
void calMulAndDiv(int num1, int num2, int& mul, int& div);
int main()
{
	int num1, num2,mul=0,div=0 ;
	cout << "Input 2 integer numbers :";
	cin >> num1 >> num2;
	calMulAndDiv( num1, num2,mul,div);
	
	cout << num1 << " multiplied by " << num2 << " is " << mul << endl;
	cout << num1 << " divided by " << num2 << " is " << div;
}
void calMulAndDiv(int num1, int num2, int& mul, int& div)
{
	mul = num1 * num2;
	div = num1 / num2;
	
}

