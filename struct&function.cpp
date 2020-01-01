// The usage of struct in structure 
#include "pch.h"
#include <iostream>
using namespace std;

struct data {
	char name[20];
	int height;
};
void passing(struct  data abu);
void main()
{
	struct  data abu;
	cout << "height is ";
	cin >> abu.height;
	
	passing(abu);
}
void passing(struct  data abu)
{
	cout << abu.height;
}