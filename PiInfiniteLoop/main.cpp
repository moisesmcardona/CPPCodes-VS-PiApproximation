#include <iostream>
using namespace std;

int main()
{
	int i, aproximations;
	int count = 0;
	double pi = 4.0;
	do{
		cout << "Enter a number to try to aproximate pi. It must be larger than 3: ";
		cin >> aproximations;
	} while (aproximations <= 3);
	for (i = 3; i <= aproximations; i += 2) {
		if (count % 2 == 0) {
			pi -= 4.0 / (double)i;
		}
		else {
			pi += 4.0 / (double)i;
		}
		
		count++;

	}
	cout << "The approximation of pi is " << pi << endl;
	system("pause");
	return 0;
}