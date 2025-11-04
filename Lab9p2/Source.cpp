#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool isSortedIncreasing(int values[], int size);



int main() {

	const int SIZE = 6;
	int numbers[SIZE] = { 1, 2, 2, 4, 6, 7 }; // test
	
	if (isSortedIncreasing(numbers, SIZE)) {
		cout << "The data are increasing." << endl;
	}
	else {
		cout << "The data are not increasing." << endl;
	}
	cout << endl;



}


bool isSortedIncreasing(int values[], int size) {
	
	for (int i = 0; i < size - 1; i++) {

		if (values[i] > values[i + 1]) {
			int sorted = false;
			break;
		}
		else {
		int sorted = true;
	}
	}
}