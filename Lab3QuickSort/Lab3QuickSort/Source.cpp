/********************************************************************************
* Title:		Quick Sort 
* Date-Time:	7Feb2018, @ 20:40
* Availability: http://www.cplusplus.com/forum/general/42003/
* Availability: http://www.techiedelight.com/quicksort/
*********************************************************************************/

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

//void print(int theArray[], int);

int partition(int theArray[], int first, int last);
void quickSort(int theArray[], int first, int last);
void print(int list[], int length);

int partition(int theArray[], int first, int last) {

	int pivotValue = theArray[first]; // holds the position of a random number generated between 0 to 10000
	int pivotPosition = first;

	// Re-arrange the rest of the array elements to
	// partition the subrange from start to end.
	for (int position = first + 1; position <= last; position++) {
		if (theArray[position] < pivotValue) {
			// arr[position] is the current item.
			// Swap the current item with the item to the right
			// of the pivot element.
			swap(theArray[pivotPosition + 1], theArray[position]);

			// Swap the current item with the pivot element.
			swap(theArray[pivotPosition], theArray[pivotPosition + 1]);

			// Adjust the pivot position so it stays with the pivot element.
			pivotPosition++;
		}
	}
	return pivotPosition;
}


void quickSort(int theArray[], int first, int last)
{
	int pivot;
	if (first < last) {
		pivot = partition(theArray, first, last);
		//gives us the lower sublist of the array
		quickSort(theArray, first, (pivot - 1));
		//gives us the upper sublist of the array
		quickSort(theArray, (pivot + 1), last);
	}
}

void print(int list[], int length) {
	int count = 0;
	//print the array to be sorted
	for (int i = 0; i < length; i++) {
		cout << setw(5) << list[i];
		count++;
		if (count % 10 == 0)
			cout << endl;
	}
}

int main() {
	int intList[100];
	int num;

	//print the array to be sorted
	for (int i = 0; i < 100; i++) {
		num = (rand() + time(0)) % 10000;
		intList[i] = num;
	}
	cout << "Array before quick sorting:" << endl << endl;
	print(intList, 100);
	quickSort(intList,0, 100 - 1);
	cout << endl;
	cout << "array after qucik sort: " << endl << endl;
	print(intList, 100);
	cout << endl;

	system("pause");
	return 0;
}

