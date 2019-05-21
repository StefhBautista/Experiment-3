#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main ()
{
	int arr[10], i, max, min;
	float sum=0;
 
    cout << "Enter 10 elements: ";
    cout << endl;

	for (i = 0; i < 10; i++)
    {
		cin >> arr[i];
	}

    for (i = 0; i < 10; i++)
	{
        sum = sum + arr[i];
	}

	max = arr[0];
    for (i = 0; i < 10; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }

    min = arr[0];
    for (i = 0; i < 10; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    
    cout << "Smallest integer : " << min;
	cout << endl;
	cout << "Largest integer  : " << max;
	cout << endl;
	cout << "Total            : " << sum;	
	cout << endl;
	cout << "Average          : " << setprecision(2) << fixed << sum / 10 << endl;
 
_getch();
return 0;
}
 
