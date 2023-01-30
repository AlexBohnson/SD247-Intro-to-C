#include<iostream> 
using namespace std;



void numberGrid() {
	int endNumber;

	cout << "Write to what number?";
	cin >> endNumber;


	for (int i = 1; i <= endNumber; i++) {
		for (int j = 0; j < 10; j++) {
			if (i % 6 != 0 && i % 17 != 0) {
				cout << setw(4) << i << " ";
				i++;
			}
			else {
				j--;
				i++;
			}
		}
		cout << endl;
	}
}
