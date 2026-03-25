#include <iostream>
#include "Calculator.h"

using namespace std;

void main()
{
	cout << "My Calculators" << endl;

	float input1, input2;
	while (true)
	{
		cout << "Input the first value (0 to exit): ";
		cin >> input1;
		if (input1 == 0)
		{
			break;
		}

		cout << "Input the second value (0 to exit): ";
		cin >> input2;
		if (input2 == 0)
		{
			break;
		}

		int a = input1;
		int b = input2;
		
		if (a == input1 && b == input2)
		{
			int result = Add(a, b);
			cout << "Integer addition: " << a << " + " << b << " = "
				<< result
				<< std::endl;
		}
		else
		{
			float result = Add(input1, input2);
			cout << "float addition: "
				<< input1 << " + " << input2 << " = "
				<< result
				<< std::endl;
		}
	}
	std::cout << "Finished!";
}