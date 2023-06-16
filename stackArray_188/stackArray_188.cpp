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
		stack_array[top] = element; // step 3
		cout << endl;
		cout << element << "ditambahkan(pushed)" << endl;

	}

	void pop() {
		if (empty()) {//step 1
			cout << "\nStack is empty. cannot pop." << endl;//1.a
			return;	//1b

		}

		cout << "\nThe popped element is:" << stack_array[top] << endl; //step 2
		top--; //step 3 decrement
	}

	//method for check if data empty
	bool empty() {
		return (top == -1);
	}

	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}
	}


};