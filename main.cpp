
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

	string pathone = "ex1.txt";
	fstream firstfile;
	string line;
	firstfile.open(pathone, ios::in);
	if (firstfile.is_open()) {
		while (getline(firstfile, line)) {
			cout << line << endl;

		}
		firstfile.close();
	}
	else {
		cout << "File can`t open!" << endl;
	}

	return 0;
}