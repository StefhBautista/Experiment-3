#include <iostream>
#include <conio.h>
using namespace std;

const int Province = 3;
const int Week = 7;

int main()
{
	char province[3][3] = {"A", "B", "C"};
	int temperature[Province] [Week];

    cout << "Enter all temperature for a week of Province A, Province B and then Province C.";
	cout << endl;

    for (int i = 0; i < Province; ++i)
    {
        for(int j = 0; j < Week; ++j)
        {
            cout << "Province " << province[i] << ", Day " << j + 1 << " : ";
            cin >> temperature[i][j];
        }
    }

    cout << endl;
	cout << endl;
	cout << "Displaying Values:";
	cout << endl;

    for (int i = 0; i < Province; ++i)
    {
        for(int j = 0; j < Week; ++j)
        {
            cout << "Province " << province[i] << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
        }
    }

cout << endl;
system ("pause");
_getch();
return 0;
}