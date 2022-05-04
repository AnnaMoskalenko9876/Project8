#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	int count = 0, n = -1;
	string line;
	string slovo;
	ifstream file1;
	cout << "Enter word: \n";
	getline(cin, slovo);
	file1.open("zadanie1.txt");
	if (!file1.is_open())
		cout << "Error" << endl;
	else
	{
		while (getline(file1, line))
		{
			while (true) {
				n = line.find(slovo, ++n);
				if (n != string::npos) {
					count++;
				}
				else break;
			}
		}
	}
	cout << count;
}