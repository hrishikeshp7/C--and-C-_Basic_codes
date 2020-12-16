#include <iostream>
using namespace std;
int main() {
   float a,b,c;
   cout << "Enter the Three Numbers"<<endl;
   cin >>a >> b >>c;
   if (a <= b && a <= c)
      cout << a << " is smallest" << endl;
   else if (b <= a && b <= c)
      cout << b << " is smallest" << endl;
   else
      cout << c << " is smallest" << endl;
      return 0;
}
