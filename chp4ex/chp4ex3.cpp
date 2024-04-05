#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	int maxlen = log10(1000 * 1000) + 2;

	for (int i = 1; i <= 1000; i++) {
		cout << i << setw(maxlen);
	}
	cout << endl << setw(0);

	for (int i = 1; i <= 1000; i++) {
		cout << i * i << setw(maxlen);
	}

	cout << endl;

	return 0;
}
