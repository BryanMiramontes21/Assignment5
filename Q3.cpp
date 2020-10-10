#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int UserInput, Cradius, lenght, width, base, height;
	float PI = 3.14159, area;
	
	cout << "1. Calculate the Area of a Circle" << endl;
	cout << "2. Calculate the Area of a Rectangle" << endl;
	cout << "3. Calculate the Area of a Triangle" << endl;
	cout << "4. Quit" << endl;
	
	
	
	do
	{
		cout << endl;
		cout << "Enter your choice : "; cin >> UserInput;
		cout << endl;
		
		switch (UserInput) {
		case 1:
		{
			cout << "Input radius of circle : "; cin >> Cradius;
			area = PI * pow(Cradius, 2);
			cout << "Area of the circle is : " << area << endl;

		}
		break;
		
		case 2:
		{
			cout << "Input the length of the rectangle : "; cin >> lenght;
			cout << "Input the width of the rectangle : "; cin >> width;
			area = lenght * width;
			cout << "Area of the Rectangle is : " << area << endl;
		}
		break;

		case 3:
		{
			cout << "Input the Height of the triangle : "; cin >> height;
			cout << "Input the  length of the triangle’s base : "; cin >> base;
			area = (height * base) / 2;
			cout << "Area of the triangle is : " << area << endl;
		}
		break;

		case 4:
		{
			return 0;
		}
		break;

		}
	
	} while (UserInput <= 4);

	if (UserInput > 4)
		cout << "Error. Use numbers 1 - 4.";
	cout << endl;


		return 0;
		
}
