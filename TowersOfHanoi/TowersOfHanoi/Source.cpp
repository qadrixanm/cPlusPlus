#include <iostream>
#include <string>

using namespace std;

void TOH(int  n, string start, string end, string temp) {
	if (n == 1) {
		cout << "Move Disk " << n << " from " << start << " to " << end << endl;
		return;
	}
	TOH(n - 1, start, end, temp);
	cout << "Move Disk " << n << " from " << start << " to " << end << endl;
	TOH(n -1,end, start, temp);
}

//main program
int main()
{
	int n;

	cout << "Enter no. of disks:";
	cin >> n;
	//calling the TOH 
	TOH(n, "A", "B", "C");

	system("pause");
	return 0;
}