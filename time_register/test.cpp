#include "stdafx.h"
#include "iostream"
#include "CTimeRegister.h"
#include "string.h"
int main()
{
	using namespace std;
	CTimeRegister<int> time_register_A;
	time_register_A.timeUp();
	time_register_A.valueWrite(30);
	time_register_A.destinationWrite(false);
	cout << time_register_A.valueA() << endl;
	time_register_A.timeDown();
	time_register_A.timeUp();
	time_register_A.valueWrite(1000);
	time_register_A.destinationWrite(false);
	cout << time_register_A.valueA() << endl;
    return 0;
}

