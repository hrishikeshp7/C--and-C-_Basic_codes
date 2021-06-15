#include <iostream>
#include <math.h>

using namespace std;

int main () {
    float a , b , c , d , e ;
    cout << "Enter the Number of Terms In AP whose Sum you Want" << endl;
    cin >> a;
    cout << "Enter the First number in the AP" << endl;
    cin >> b;
    cout << "Enter the Common Difference between two numbers in AP " <<endl;
    cin >> c;

    d = 2*b + (a-1)*c ;
    e = (a/2)*(d);

    cout << "The sum of n terms in AP is " << e << endl;

    return 0 ;
    


}
