// Print ASCII Value.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	char a;
	cout << "Enter a character to show the ASCII value \n";
	cin >> a;

	cout << "ASCII value of \"" << a << "\" = " << int(a) << endl;
    return 0;
}

