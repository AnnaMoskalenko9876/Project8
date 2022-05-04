#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	int count = 0, n = 0;
	string line;
	string alltxt;
	ifstream file1;
	file1.open("zadanie4.txt");
	if (!file1.is_open())
		cout << "Error" << endl;
	else
	{
		while (getline(file1, line))
			alltxt += line;

		n = alltxt.length();
		for (int i = 0; i < n / 2; i++)
			swap(alltxt[i], alltxt[n - i - 1]);
	}
	cout << "all invers txt: " << alltxt;
}