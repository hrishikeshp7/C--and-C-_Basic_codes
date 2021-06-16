#include <iostream>
#include <math.h>

using namespace std;
// A program to check whether given three numbers are Pytagorean Triplet are not 
/// https://hriship.live

float a , b , c , d , e , f ,  g ;


int main () {
    cout << "Enter the Three Numbers (In Sequence from small to large only )" << endl;
    cin >> a; 
    cin >> b;
    cin >> c;

    d = pow(a , 2);
    e = pow(b , 2);
    f = pow(c , 2);
    g = d + e;

    if(f == g ) {
        cout << "The Given Three Numbers Are Pythagorean Triplets " << endl;

    }
    else {
        cout << "The Given Numbers are Not Pythagorean Triplets " << endl;
    }

    return 0 ;


}
