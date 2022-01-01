#include <iostream>
using namespace std;

int main() 
{  
								
	int age;
	cout << "enter your age (don't write a false age): ";
	cin >> age;
	cout << "\nYour age is: " << age << ".\n";

	if (age < 12) {
		cout << "you are not allowed to create an account. \n\n\n\n\n\n\n\n\a";
	}
	else if (age > 100) {
		cout << "This is a false age.\n\n\n\n\n\n\n\n\n\a";
	}
	else { cout << "you are allowed to create an account"; }
    return 0
    }
