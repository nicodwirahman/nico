#include <iostream>
using namespace std;


int a[20];
int n;


void input() {
	while (true) {
		cout << "masukkan banykanya elemen pada array: ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\nAray dapat mempunyai maksimal 20 elemen.\n";
		}
	}
	cout << endl;
	cout << "====================" << endl;
	cout << "masukkan Elemen Array" << endl;
	cout << "====================" << endl;

	for (int j = 0; 1 < n; j++) {
		cout << "{" << (1 + 1) << "}";
		cin >> a[j];
	}
}
	


