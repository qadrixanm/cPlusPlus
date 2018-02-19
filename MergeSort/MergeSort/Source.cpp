#include<iostream>
/***************************************************************************************
*    Title: C++ Program Source Code
*    Date: 16Feb2018
*    Availability: http://www.sanfoundry.com/cpp-program-implement-merge-sort/
*
***************************************************************************************/

using namespace std;

void merge(int arraySortedInTwoHalves[], int startIndex, int length);
void mergeSort(int arrayToSort[], int startIndex, int lengthToSort);

void merge(int arraySortedInTwoHalves[], int startIndex, int length) {

	int mid = (startIndex + length) / 2;

	int i = startIndex;
	int j = mid + 1;
	int k = startIndex;

	int temp[100];

	while (i <= mid && j <= length)
	{
		if (arraySortedInTwoHalves[i] < arraySortedInTwoHalves[j]) {
			temp[k++] = arraySortedInTwoHalves[i++];
		}
		else
		{
			temp[k++] = arraySortedInTwoHalves[j++];
		}

		while (i <= mid)
		{
			temp[k++] = arraySortedInTwoHalves[i++];
		}
		while (j <= length)
		{
			temp[k++] = arraySortedInTwoHalves[j++];
		}


		//we need to copy all element to original arrays

		for (int i = startIndex; i <= length; i++)
		{
			arraySortedInTwoHalves[i] = temp[i];
		}
		delete[] temp;
	}
}

void mergeSort(int arrayToSort[], int startIndex, int lengthToSort) {
	//Base case - 1 or 0 elements
	if (startIndex >= lengthToSort) {
		return;
	}

	//Follow 3 steps
	//1. Divide
	int mid = (startIndex + lengthToSort) / 2;

	//Recursively the arrays - s,mid and mid+1,e
	mergeSort(arrayToSort, startIndex, mid);
	mergeSort(arrayToSort, mid + 1, lengthToSort);

	//Merge the two parts
	merge(arrayToSort, startIndex, lengthToSort);

}

int main() {

	int arr[100];
	int n;
	cout << "\nEnter the number of data element to be sorted: ";
	cin >> n;

	for (int i = 0; i<n; i++) {
		cout << "Enter element " << i + 1 << ": ";
		cin >> arr[i];
	}
	cout << "\nMerge the sorted array " << endl;
	mergeSort(arr, 0, n - 1);

	cout << "\nSorted Data ";
	for (int i = 0; i<n; i++) {
		cout << arr[i] << " , ";
	}


	system("pause");
	return 0;
}

