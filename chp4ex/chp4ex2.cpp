#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	for (int i = 1; i <= 100; i++) {
		cout << i << setw(6);
	}
	cout << endl << setw(0);

	for (int i = 1; i <= 100; i++) {
		cout << i * i << setw(6);
	}

	cout << endl;

	return 0;
}
