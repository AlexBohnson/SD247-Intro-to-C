#include<iostream> 
using namespace std;


void program8() {
	
	int* chunk = new int[6];

	for (int i = 0; i < 6; i++) {
		cout << "Enter integer " << i + 1 << endl;
		cin >> chunk[i];
	}

	cout << endl;

	for (int i = 5; i >= 0; i--) {
		cout << chunk[i] << endl;
	}
	delete[6] chunk;
}