#include<iostream> 
using namespace std;

void programFive() {
	int arraySize;

	cout << "Array size?";
	cin >> arraySize;

	float *numArray = new float[arraySize];
	float *p;

	p = numArray;

	int size = sizeof(numArray);
	float sum = 0;

	for (int i = 0; i < arraySize; i++) {
		*(p + i) = (float) 1 / pow(i + 1, 2);
		sum += 1 / pow(i + 1, 2);
		cout << "numArray " << i << " = " << numArray[i] << endl;

	}
	cout << "Square root of sum = " << sqrt(sum);
}