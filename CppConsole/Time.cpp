#include <iostream>
#include <ctime>

using namespace std;


int main(int argc, char* argv[])
{

	//returns the number of seconds since 00:00, Jan 1 1970 UTC
	time_t current_cal_time = time(nullptr);

	#pragma region Using ctime
	//returns a pointer to a string of the form "day month year hours::minutes::seconds year\n\0"
	cout << ctime(&current_cal_time);

	#pragma endregion 

	#pragma region Using asctime  

	//localtime() function converts the given time since epoch to calendar time
	struct tm* tm_local = localtime(&current_cal_time);

	cout << "Current local time is = "
		<< tm_local->tm_hour << ":"
		<< tm_local->tm_min << ":"
		<< tm_local->tm_sec << endl;

	cout << "Date is " << tm_local->tm_mday << "/"
		<< tm_local->tm_mon + 1<< "/"
		<< tm_local->tm_year + 1900 << endl;
	
	//asctime returns a pointer to a string that contains the information stored in structure pointed by tmStruct
	cout << asctime(tm_local) << endl;

	#pragma endregion 

}
