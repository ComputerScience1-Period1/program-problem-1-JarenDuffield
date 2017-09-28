/*
Jaren Duffield- 9/26/17 Period 1

Display Text : *

Create a project that displays name and Hello World
*/
// Libraries
#include <iostream> 
#include <conio.h>
// Namespace
using namespace std; //*
// Functions()
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
// MAIN
void main() {
	cout << "Hello World!" << endl;
	cout << "My name is Jaren Duffield" << endl;
	int first;
	cout << "What period do you have CompSci in? ";
	cin >> first;
	pause(); 

	}
