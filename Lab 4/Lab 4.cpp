// Lab 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	// I recommend writing your factorial code here
	int number;
	int total = 1;
	cout << "Factorial: " << endl;
	cout << "Enter a Number: " << endl;
	cin >> number;
	if (number < 0) {
		cout << "Nice try. Positive number, please and thank you";
	}
	else if (number > 0) {
		//cout << number << "1 =";
		for (int x = 1; x < number; x++)
			total *= x;
		for (int x = 1; x < number; x++)
			cout << x << "x";
	}
	cout << number << "=" << total << endl;
}
void arithmetic() {
	// I recommend writing your arithmetic series code here
	int start; //starting number
	int pattern; //difference between numbers
	int series; //number of elements in the series
	int sequence; //uuuuh
	cout << "Please enter starting number: ";
	cin >> start;
	cout << "Please enter number to add each time: ";
	cin >> pattern;
	cout << "Please enter number of elements in the series: ";
	cin >> series;

	cout << start;
	int total = start;

	for (int x = 1; x < series; x++) {
		sequence = start * pow(pattern, x);
		total += sequence;
		cout << " + " << start;
	}
	cout << " = " << total << endl;

} 

void geometric() {
	// I recommend writing your geometric series code here
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}