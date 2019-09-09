/* GitHub_Hello_World.cpp
This program is for GitHub, to learn the platform
This program is a simple Hello World program*/

#include <iostream>

using namespace std;

inline void keep_window_open()
{
	cin.clear();
	cout << "\nPlease enter a character to exit\n";
	char ch;
	cin >> ch;
	return;
}

int main()
{
	cout << "Hello World\n";

	keep_window_open();

	return 0;
}