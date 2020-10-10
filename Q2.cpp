#include <iostream>
using namespace std;

int main()
{
	int books;

	cout << "How many books have you purchased : ";
	cin >> books;

	if (books == 0)
	{
		cout << "Points earned : 0 " << endl;
	}
	if (books == 1)
	{
		cout << "Points earned : 5 " << endl;
	}
	if (books == 2)
	{

		cout << "Points earned : 15 " << endl;
	}
	if (books == 3)
	{
		cout << "Points earned : 30 " << endl;
	}
	if (books >= 4)
	{
	
	cout << "Points earned : 50 " << endl;
    }

	return 0;




}
