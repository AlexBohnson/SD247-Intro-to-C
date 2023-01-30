



void programSix() {
	
	int intX = 33;
	string stringX = "Stringy";
	double doubleX = 22.22;

	cout << "Double Address: " << &doubleX << " " << "Value: " << doubleX << endl;
	cout << "Int Address: " << &intX << " " << "Value: " << intX << endl;
	cout << "String Address: " << &stringX << " " << "Value: " << stringX << endl;


}


/*
	They are in allocated in the order I declared them.
	I think any empty space is due to memory alignment protocol.

	After changing the order, they are still allocated in the order declared.


*/