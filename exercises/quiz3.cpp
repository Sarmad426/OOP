/*
    Program to add two distances in inch-feet using structure.
    The value of distance is to be taken from user.
*/
#include <iostream>
using namespace std;

struct Distance
{
    int feet;
    float inch;
};

Distance add_distances(Distance d1, Distance d2)
{
    Distance result;
    result.inch = d1.inch + d2.inch;
    result.feet = d1.feet + d2.feet + (int)(result.inch / 12);
    result.inch = result.inch - (int)(result.inch / 12) * 12;
    return result;
}

int main()
{
    Distance d1, d2, result;
    cout << "Enter first distance in feet and inches: ";
    cin >> d1.feet >> d1.inch;
    cout << "Enter second distance in feet and inches: ";
    cin >> d2.feet >> d2.inch;
    result = add_distances(d1, d2);
    cout << "Result distance = " << result.feet << " feet " << result.inch << " inches" << endl;
    return 0;
}

