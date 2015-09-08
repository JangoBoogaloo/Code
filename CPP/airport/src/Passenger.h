#ifndef PASSENGER_H_
#define PASSENGER_H_

#include <iostream>
#include <string>

using namespace std;

class Passenger
{
	private:
		int arriveTime;
		int bagCount;
		int boardingTime;

		bool suspicious;
		bool carryInappropriate;
		bool firstClass;

	public:
		Passenger(string info);
};

#endif
