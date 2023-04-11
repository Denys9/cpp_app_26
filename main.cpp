
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main() 
{

	string pathone = "C:\\Users\\Dines\\source\\repos\\cpp_app_26\\6work.txt";
	string pathtwo = "C:\\Users\\Dines\\source\\repos\\cpp_app_26\\6work/1.txt";
	fstream filein, fileout;

	filein.open(pathone, ios::in);
	fileout.open(pathtwo, ios::out);
	string line;
	bool inside_comment = false;
	if (!filein.is_open() && !fileout.is_open())
	{
		cout << "error" << endl;
		return 1;
	}
	else {
		while (getline(filein, line))
		{
			for (int i = 0; i < line.length(); i++)
			{
				if (!inside_comment && line[i] == '/' && i < line.length() - 1 && line[i + 1] == '/')
				{
					break;
				}
				else if (!inside_comment && line[i] == '/' && i < line.length() - 1 && line[i + 1] == '*')
				{
					inside_comment = true;
					i++;
				}
				else if (inside_comment && line[i] == '*' && i < line.length() - 1 && line[i + 1] == '/')
				{
					inside_comment = false;
					i++;
				}
				else if (!inside_comment) 
				{
					fileout << line[i];
				}
			}
			fileout << '\n';
		}
	}
	filein.close();
	fileout.close();
	return 0;
}