// Lista_Zamowien.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conio.h"
#include <string>
#include <iostream>

using namespace std;
int main()
{
	srand(510);
	string str = "lel";
	cout << str << "\n";
	for (size_t i = 0; i<str.length(); ++i)
	{
		str[i] += rand()%100;
	}
	cout << str << "\n";
	srand(510);
	for (size_t i = 0; i<str.length(); ++i)
	{
		str[i] -= rand() % 100;
		
	}
	cout << str << "\n";

	cin.get();
    return 0;
}

