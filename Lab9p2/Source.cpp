#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool isSortedIncreasing(int values[], int size);

bool isSortedDecreasing(int values[], int size);

bool hasAdjacentDuplicants(int values[], int size);

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

	if (isSortedDecreasing(numbers, SIZE)) {
		cout << "The data are decreasing." << endl;
	}
	else {
		cout << "The data are not decreasing." << endl;

	}
	cout << endl;
	if (hasAdjacentDuplicants(numbers, SIZE)) {
		cout << "The data has duplicates." << endl;
	}
	else {
		cout << "The data does not have duplicates." << endl;

	}
}

	bool isSortedIncreasing(int values[], int size) {

		for (int i = 0; i < size - 1; i++) {

			if (values[i] > values[i + 1]) {
				return false;
			
			}
			else {
				return true;
			}
		}
	}
	
	bool isSortedDecreasing(int values[], int size){

		for (int i = 0; i < size - 1; i++) {

			if (values[i] < values[i+1]) {
				return false; //had to fix how I did this part from last commit
			}
			else {
				return true;
			}
		}
	}
	bool hasAdjacentDuplicants(int values[], int size){
		for (int i = 0; i < size - 1; i++) {
			if (values[i] == values[i + 1]) {
				return true;
			}
			else {
				return false;
			}
		}


	}