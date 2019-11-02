// This is a program that calculates the occupancy rate for a hotel.
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int floors, numFloor = 0, numOfRoom, roomOccupied;
	double sumRoomOccupied = 0, sumOfRoom = 0;
	cout << "how many floors the hotel has? ";
	cin >> floors;
	while (++numFloor <= floors)
	{
		cout << "how many number rooms in floor" << numFloor << "? ";
		cin >> numOfRoom;
		sumOfRoom += numOfRoom;
		cout << "how many rooms on that floor are occupied ? ";
		cin >> roomOccupied;
		sumRoomOccupied += roomOccupied;
		
	}
	cout << "sum of the rooms in this hotel is " << sumOfRoom << endl;
		cout << "sum of the rooms that occupied is " << sumRoomOccupied <<endl;
		cout << "sum of the rooms that unoccupied is " << sumOfRoom - sumRoomOccupied <<endl;
		cout << "The percentage of rooms that are occupied is " << sumRoomOccupied/ sumOfRoom * 100 << "%" ;
		return 0;

}