#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


double preciseCircleArea()
{

    long double pi = 3.141592653589793238;
    double radius;
    int precision;

    cout << "Radius of circle?";

    cin >> radius;

    cout << "Precision of answer?";

    cin >> precision;

    

    cout << "Area of a circle with radius " << radius << " = " << fixed << setprecision(precision) << (pi * pow(radius, 2)) << endl;

    return pi * pow(radius, 2);
}