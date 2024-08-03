#pragma once
#include <iostream>
using namespace std;

namespace myLib
{
	void test() {
		cout << "This is my first function in my custom library" << endl;
	}

	int sumTwoNumbers(int num1, int num2)
	{
		return num1 + num2;
	}

}