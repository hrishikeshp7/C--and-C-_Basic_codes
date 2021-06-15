#include <iostream>
using namespace std;

int main () {
    float a ;
    cout << "Enter which number of term you would like to find " <<endl;
    cin >> a;
    float b ;
    cout << "Enter the first Number of The Series (Should Be in AP)" <<endl;
    cin >> b;
    float c;
    cout << "Enter the Common Difference between the numbers" <<endl;
    cin >> c;

    float n;
    n =   b + (a-1)*c ;

    cout << "The Nth Term of The AP is " <<n << endl;

    return 0 ;

}
