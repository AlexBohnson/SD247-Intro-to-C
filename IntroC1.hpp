#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


double circleArea()
{

    long double pi = 3.141592653589793238;
    double radius;

    cout << "Radius of circle?";

    cin >> radius;

    cout << "Area of a circle with radius " << radius << " = " << fixed << setprecision(2) << (pi * pow(radius, 2)) << endl;

    return (pi * pow(radius, 2));
}