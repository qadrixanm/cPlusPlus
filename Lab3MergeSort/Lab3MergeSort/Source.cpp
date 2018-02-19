#include <iostream>
#include <string>
#include <random>
#include <ctime>

void mergeSort(int arrayToSort[], int startIndex, int lengthToSort);
void merge(int arraySortedInTwoHalves[], int startIndex, int length);

int main() {

	// setup an array of random numbers of size n
	const int arrSize = 10000;
	int nums[arrSize];

	for (int i = 0; i <= arrSize; i++) {
		nums[i] = rand() % arrSize;
	}

	// just a timer to measure performance
	int start_s = clock();

	mergeSort(nums, 0, arrSize - 1);

	for (int i = 0; i < arrSize; i++) {
		std::cout << nums[i] << " ";
	}

	// stop timer
	int stop_s = clock();
	std::cout << std::endl << std::endl << "Executed In: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) << "s\n" << std::endl;

	system("pause");
	return(0);
}

void mergeSort(int arrayToSort[], int startIndex, int lengthToSort) {

	int midIndex = 0;

	if (startIndex < lengthToSort) { // if base case not reached
		midIndex = (startIndex + lengthToSort) / 2;
		mergeSort(arrayToSort, startIndex, midIndex);
		mergeSort(arrayToSort, (midIndex + 1), lengthToSort);
		merge(arrayToSort, startIndex, lengthToSort);
	}
}

void merge(int arraySortedInTwoHalves[], int startIndex, int length) {

	int size = (length - startIndex) + 1;
	int *temp = new int[size]; // temp array to hold elements

	int left = startIndex; // left side of the array
	int midIndex = (startIndex + length) / 2; // border
	int right = midIndex + 1; // right side of the array
	int i = 0;

	while ((left <= midIndex) && (right <= length)) { // while there are elements in both sides...

		if (arraySortedInTwoHalves[left] < arraySortedInTwoHalves[right]) { // add whichever is lower from the appropriate side
			temp[i++] = arraySortedInTwoHalves[left++];
		}
		else {
			temp[i++] = arraySortedInTwoHalves[right++];
		}
	}
	while (left <= midIndex) // if one runs out... 
	{
		temp[i++] = arraySortedInTwoHalves[left++];
	}
	while (right <= length) // if one runs out... 
	{
		temp[i++] = arraySortedInTwoHalves[right++];
	}

	for (i = 0; i < size; i++) { // copy elements to the original array
		arraySortedInTwoHalves[startIndex + i] = temp[i]; // startIndex + i because of recursion
	}
	delete[]temp; // delete temp array
}