




void swap(int& x, int& y) {

	cout << "x initial: " << x << endl << "y initial: " << y << endl;

	int temp = x;
	x = y;
	y = temp;


	cout << "x after: " << x << endl << "y after: " << y <<endl;

}


/*
	At first function only swapped within the function.
	
	Changing input to pass an address to the variable gets it to work as intended.

*/


