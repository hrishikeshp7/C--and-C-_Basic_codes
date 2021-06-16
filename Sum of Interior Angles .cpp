#include <iostream>
using namespace std;

// C++ Program to find Total Sum of Interor Angles with only Number of sides

int main () {
    int a ;
    cout << "Enter the number of Sides the Polygon has" << endl;
    cin >> a;
    int b = (a-2)*180;
    cout << "The Sum of All Interior Angles of Polygon is " << b << endl;

    return 0;



}
