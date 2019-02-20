#include <iostream>
using namespace std;

int computeDifference(int startHour, int futureHour, bool startAm, int startMinute, int futureMinute, bool futureAm);

	int startTime = startHr * 60 + startMinute;
	futureTime = futureHour * 60 + futureMinute;
	if (startAm == futureAm)
	{
		of (startTime)
		diffMin == futureTime - startTime;
		else 
			diffMin = futureTime + 1440 - startTime;
			return diffMin;
	}
	else
	{
		if (futureHour == 12)
			diffMin = futureTime - startTime;
		else
			diffMin = futureTime + 720 - startTime;
		return diffMin;
	}
	}
		
int main ()
{
	int startHr, futureHr, startMin, futureMin, diffMin;
	char choice;
	char a_char = ' ';
	char m_char = ' ';
	bool startAm, futureAm;
	do{
		cout << "Please enter a start time in 12 hour"
		<< "format;" << endl;
		cout << " enter Hours:";
		cin >> startHr;
		cout << "Please enter Minutes: ";
		cin >> startMin;
		cout << " Please enter (a)m or (p)m:";
		cin >> a_char >> m_char;
		
		if (a_char == 'A' || a_char == 'a')
			startAm = true;
		else
			startAm = false;
		cout << endl;
		
		cout << " Please ehter the future time details" << endl;
		cout << "Please enter the Hour: ";
		cin >> futureHr;
		cout << " Please enter the fututre minutes: ";
		cin >> futureMin;
		cout <<" Please enter (a)m or (p)m: ";
		cin  >> a_char >> m_char;
		
		if (a_char =='A' || a_char == 'a')
			futureAm == true;
		else
			futureAm = false;
		
		diffMin = computeDifference(startHr, futureHr, startAm, startMin, futureMin, futureAm);
		 cout << endl << " The diffrence between the two times"
		 << "are:" << diffMin << "Minutes" << endl;
		 
		 cout<< endl << "Press Y to enter new times";
		 cin >> choice;
	} while (choice == 'y' || choice == 'Y');
	
	return 0;
	
}
				