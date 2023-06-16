#include <iostream>
#include <string>
using namespace std;

class StackArray {
private:
	int stack_array[5];
	int top;
public:
	StackArray() { //construktor
		top = -1;
	}

	void push() {
		cout << "\nEnter an Element";
		int element;
		cin >> element;

		if (top == 4) {
			cout << "Number of data exeeds the limit. " << endl;
			return;
		}
		top++;

	}

};