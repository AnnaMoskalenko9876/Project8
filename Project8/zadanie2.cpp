#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	int count = 0, n = -1;
	string line;
	ifstream file1;
	file1.open("zadanie2.txt");
	if (!file1.is_open())
		cout << "Error" << endl;
	else
	{
		while (getline(file1, line))
		{
			while (true) {
				n = line.find_first_of("!?.;", ++n);
				if (n != string::npos) 
					count++;

				else break;
			}
		}
	}
	cout << "kol-vo predlojeniy: " << count;
}