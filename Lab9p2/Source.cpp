#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool isSortedIncreasing(int values[], int size);

bool isSortedDecreasing(int values[], int size);

bool hasAdjacentDuplicates(int values[], int size);

bool hasDuplicates(int values[], int size);

int main() {

	const int SIZE = 6;
	int numbers[SIZE];

	for (int i = 0; i < SIZE; i++) {
		cout << "Enter integer #" << i << ": ";
		cin >> numbers[i];
	}

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

	if (hasAdjacentDuplicates(numbers, SIZE)) {
		cout << "The data has adjcaent duplicates." << endl;
	}
	else {
		cout << "The data does not have adjacent duplicates." << endl;
	}
		cout << endl;
		
		if (hasDuplicates(numbers, SIZE)) {
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
		}
				return true;
	}
	
	

	
	bool isSortedDecreasing(int values[], int size){

		for (int i = 0; i < size - 1; i++) {

			if (values[i] < values[i + 1]) {
				return false; //had to fix it again but should be good now. curly brackets were all over
			}
		}
				return true;
			}

	bool hasAdjacentDuplicates(int values[], int size){
		for (int i = 0; i < size - 1; i++) {
			if (values[i] == values[i + 1]) {
				return true;
			}
		}
				return false;
			}


	
	bool hasDuplicates(int values[], int size) {
		for (int i = 0; i < size - 1; i++) {
			for (int j = i + 1; j < size; j++) {
				if (values[i] == values[j]) {
					return true;
				}
			}
		}
					return false;
				}
			



	