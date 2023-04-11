#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{

	string pathone = argv[1];
	fstream fin, fout;
	string pathtwo = argv[2];
	fin.open(pathone, ios::in);
	fout.open(pathtwo, ios::out);
	string line;
	if (!fin.is_open() && !fout.is_open())
	{
		cout << "error" << endl;
		return 1;
	}
	else {
		while (getline(fin, line))
		{

			fout << line << endl;
		}
	}

	fin.close();
	fout.close();
	return 0;
}