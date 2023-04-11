#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

	string pathone = "C:\\Users\\Dines\\source\\repos\\cpp_app_26\\seven_w.txt";
	fstream filein;
	filein.open(pathone, ios::in);

	string line;
	int sharp = 0, dollar = 0, dog = 0, indicative = 0, star = 0, question = 0;
	if (!filein.is_open()) {

		cout << "error" << endl;
		return 1;
	}
	else {
		while (getline(filein, line))
		{
			for (char x : line)
			{
				if (x == '#') 
				{
					sharp += 1;
				}
				else if (x == '$') 
				{
					dollar += 1;
				}
				else if (x == '@')
				{
					dog += 1;
				}
				else if (x == '!')
				{
					indicative += 1;
				}
				else if (x == '*')
				{
					star += 1;
				}
				else if (x == '?') 
				{
					question += 1;
				}
			}
		}
		double all = sharp + dollar + dog + indicative + star + question;
		cout << "# - " << sharp << " - " << (sharp / all) * 100 << "%" << endl;
		cout << "$ - " << dollar << " - " << (dollar / all) * 100 << "%" << endl;
		cout << "@ - " << dog << " - " << (dog / all) * 100 << "%" << endl;
		cout << "! - " << indicative << " - " << (indicative / all) * 100 << "%" << endl;
		cout << "* - " << star << " - " << (star / all) * 100 << "%" << endl;
		cout << "? - " << question << " - " << (question / all) * 100 << "%" << endl;
	}
	filein.close();
	return 0;
}