#include "IntroC1.hpp"
#include "IntroC2.hpp"
#include "IntroC3.hpp"
#include "IntroC4.hpp"
#include "IntroC5.hpp"
#include "IntroC6.hpp"
#include "IntroC7.hpp"
#include "IntroC8.hpp"
#include <iostream>






int main() {
	bool running = true;
	int programNumber;





	while (running) {
		cout << "Enter 1-8 to run programs 1-8. Number three is broken....";
		cin >> programNumber;

		switch (programNumber)
		{
		case 1:
			cout << "Program 1" << endl;
			circleArea();
			break;

		case 2:
			cout << "Program 2" << endl;
			preciseCircleArea();
			break;

		case 3:
			cout << "Program 3" << endl;
			meetsQualifications();
			break;

		case 4:
			cout << "Program 4" << endl;
			numberGrid();
			break;

		case 5:
			cout << "Program 5" << endl;
			programFive();
			break;

		case 6:
			cout << "Program 6" << endl;
			programSix();
			break;

		case 7: {
			cout << "Program 7" << endl;
			int x = 5;
			int y = 10;

			swap(x, y);

			cout << "x: " << x << "y: " << y << endl;

		}
			  break;

		case 8:
			cout << "Program 8" << endl;
			program8();
			break;
		}

	}
}
