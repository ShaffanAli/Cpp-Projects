#include <iostream>
#include <cmath>
using namespace std;

void displayPoints(double radius, int points)
{
    const double PI = 3.14159;

    for (int i = 0; i < points; i++)
    {
        double angle = (2 * PI * i) / points;

        double x = radius * cos(angle);
        double y = radius * sin(angle);

        cout << "Point " << i + 1 << " = (" << x << ", " << y << ")" << endl;
    }
}

int main()
{
    double radius;
    int points;

    cout << "Enter radius of the circle: ";
    cin >> radius;

    cout << "Enter number of points: ";
    cin >> points;

    cout << "\nCoordinates of points on the circumference:\n";

    displayPoints(radius, points);

    return 0;
}
