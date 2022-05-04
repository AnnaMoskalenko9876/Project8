#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

	int count = 0, count2 = 0, n = -1, m = -1;
	string line;
	ifstream file1;
	file1.open("zadanie3.txt");
	if (!file1.is_open())
		cout << "Error" << endl;
	else
	{
		while (getline(file1, line))
		{
			while (true) 
			{
				n = line.find(".", ++n);
				if (n != string::npos)
					count++;
				else break;
			}
			while (true) 
			{
				m = line.find(",", ++m);
				if (m != string::npos)
					count2++;
				else break;
			}
		}
	}
	cout << "kol-vo toshek: " << count;
	cout << "\nkol-vo zapyatih: " << count2;
}