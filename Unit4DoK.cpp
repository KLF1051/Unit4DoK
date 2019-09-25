/* Unit4DoK.cpp : This file contains the 'main' function. Program execution begins and ends there.

Author: Kevin Feldhaus
Date: September 24th, 2019
COP2220 C++ Programming, Instructor Roberto Chapa, Unit 4 Demonstration of Knowledge

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s, g;
	bool isNotX = true;
	int sint = 0;

	while (isNotX == true)
	{
		cout << "Please enter your number score: ";
		cin >> s;

		if (s == "x" || s == "X")
		{
			cout << "Bye bye!" << endl;

			isNotX = false;
		}
		else
		{
			sint = atoi(s.c_str());

			if (sint >= 90)
			{
				g = "A";
				cout << g << endl;
			}

			else if (sint >= 80)
			{
				g = "B";
				cout << g << endl;
			}

			else if (sint >= 70)
			{
				g = "C";
				cout << g << endl;
			}

			else if (sint >= 60)
			{
				g = "D";
				cout << g << endl;
			}

			else if (sint >= 0)
			{
				g = "F";
				cout << g << endl;
			}
			else if (sint < 0)
			{
				cout << "Not a valid grade, please try again." << endl;
			}
		}
	}
}