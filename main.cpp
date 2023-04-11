#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() 
{

    string pathone = "C:\\Users\\Dines\\source\\repos\\cpp_app_26\\work.txt";
    string pathtwo = "C:\\Users\\Dines\\source\\repos\\cpp_app_26\\work_2.txt";
    string paththree = "C:\\Users\\Dines\\source\\repos\\cpp_app_26\\work_3.txt";
    fstream fir(pathone, ios::in);
    fstream sec(pathtwo, ios::in);
    fstream three(paththree, ios::out);
    string firline, secline;
    if (!fir.is_open() && !sec.is_open() && !three.is_open())
    {
        cout << "error" << endl;
        return 1;
    }
    else {
        while (getline(fir, firline) && getline(sec, secline))
        {
            three << firline << endl;
            three << secline << endl;

        }
    }

    fir.close();
    sec.close();
    three.close();

    return 0;
}