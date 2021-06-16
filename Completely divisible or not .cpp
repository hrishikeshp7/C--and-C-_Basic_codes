#include <iostream>
#include <math.h>

using namespace std;
// CPP Program to find if the number is completely Divisible or not 
int main () {
    cout << "Enter the Number which you would like to test " << endl;
    int a ,b , c ;
    cin >> a;
    cout << "Enter the Number which you would like to divide with the previous number " << endl;
    cin >> b;

    c = a%b;

    if( c == 0) {
        cout << "Yes the given Number is completely divisible by " << b << endl;

    }
    else {
        cout << "The Given Nummber is not completely Divisible by " << b <<endl;

    }
}
