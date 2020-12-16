#include <iostream>
using namespace std;

int main () {
  int a,b,c,d;
  cout << "Enter the First Number"<<endl;
  cin >> a;
  cout << "Enter the Second Number" <<endl;
  cin >> b;
  

  c= a/b;
  d= a%b;

  cout << "The Quotient is "<<c<<endl;
  cout << "The Remainder is " << d << endl;

  return 0;
  
}
