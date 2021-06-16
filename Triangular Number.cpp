#include <iostream>
#include <math.h>

using namespace std;

// CPP program to find nth Triangular Number

int main () {
    cout << "Enter which number of Triangular Number you would like to find " << endl;
    int a;
    cin >> a;
    int b , c ,d ;
    b = a*(a+1);
    c = b/2;

    cout << "The Nth Triangular Number is " << c << endl;

    return 0;

}
