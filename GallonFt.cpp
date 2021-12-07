#include <iostream>

using namespace std;

int main()
{
	float gallons, cufeet;
	cout << "Enter the amount in gallons: ";
	cin >> gallons;
	cufeet = gallons / 7.481;
	cout << "The value in cubic feet: " << cufeet << endl;

	system("pause");
	return 0;
}