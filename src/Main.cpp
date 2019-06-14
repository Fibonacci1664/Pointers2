/*
 * Main.cpp
 *
 *  Created on: 14 Jun 2019
 *      Author: Dave
 */

#include<iostream>

using namespace std;

void changeString(string *ptrNewString)
{
	cout << "2. " << *ptrNewString << endl;

	*ptrNewString = "Now i have changed the string by dereferencing!";

	cout << "3. " << *ptrNewString << endl;

}

int main()
{
	string myString = "This is a string!";

	cout << "1. " << myString << endl;

	changeString(&myString);

	cout << "4. " << myString << endl;



	return 0;
}


