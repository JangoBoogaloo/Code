#ifndef EVENT_H_
#define EVENT_H_

#include <iostream>

using namespace std;

class Event
{
	private:
		int startTime;

	public:
		virtual void runEvent() = 0;
		Event(int start) : startTime(start) {}
		void printEventInfo(void);
};

#endif
