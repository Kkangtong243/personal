#pragma once
#include <iostream>
using namespace std;

class Calculator
{
protected:

	string _name;

public:
	Calculator(); //생성자(컨스트럭터)

	string GetName();

	int Add(int a, int b);

	float Add(float a, float b);
};