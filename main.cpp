#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

	string pathone = "mywork.txt";
	fstream firstfile;
	int len = 1;
	string line;
	firstfile.open(pathone, ios::in);
	if (firstfile.is_open()) {
		while (getline(firstfile, line))
		{
			for (char x : line) {
				if (x == ' ' || x == '\0' || x == '\n' || x == '\t') 
				{
					len += 1;
				}

			}
		}
		cout << "word - " << len;
		firstfile.close();
	}
	else 
	{
		cout << "file not open" << endl;
	}

	return 0;
}