#include <iostream>

using namespace std;

//template <class T>
//void SwapByReference(T&a, T&b) 
//{
//	T temp = a;
//	a = b;
//	b = temp;
//
//}

//template <class T>
//void SwapByAddress(T *a, T *b)
//{
//	T *temp = a;
//	a = b;
//	b = temp;
//
//}

//template <class T>
//void Multiples(T &sum, T x, int n) {
//
//	sum = 1;
//	for (int i = 1; i <= n; i++) {
//		sum += (i * x);
//	}
//	cout << sum << endl;
//}

//template <class T1, class T2>
//T1 init(T1 num1, T1 num2, T2& start) {
//
//	T1 sum = num1 + num2;
//	start = 1;
//	cout << sum << endl;
//	cout << start << endl;
//	return sum;
//}

template<class T>
T* quicksort(T* array, int start, int end) {
}

int main() {

	//int *a = new int(2);
	//int *b = new int(3);
	//SwapByAddress(a, b);
	//cout << a << endl;
	//cout << b << endl;

	//int c = 8;
	//int d = 7;
	//SwapByReference(c, d);
	//cout << c << endl;
	//cout << d << endl;


	//int sum = 0;
	//int x = 1;
	//int n = 3;
	//Multiples(sum, x, n);

	//double sum = 0;
	//double x = 2;
	//int n = 3.5;
	//Multiples(sum, x, n);

	//int num1 = 2;
	//int num2 = 3;
	//double start = 2.2;
	//init(num1, num2, start);

	system("pause");
	return 0;
}