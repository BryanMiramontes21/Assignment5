#include<iostream>
using namespace std;

int main()
{
	int Grade;

	cout << "Input Grade(Integar) : "; cin >> Grade;
	cout << endl;

	if (Grade >= 60)
	{
		cout << "Pass" << endl;
	}

	if(Grade < 60)
	{
		cout << "Fail"<<endl;
	}

	return 0;



}