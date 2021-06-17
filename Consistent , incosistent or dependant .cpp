#include <iostream>
#include <math>

using namespace std;
// Program to find if The Equation is Consistent , Incosistent or Dependant

int main () {
    float a , b, c , d , e , f , g, h , i , j , k , l , m ;
    cout << "Enter the Coefficents of a1 , b1 , c1 Respectively " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << "Enter the Coefficents of a2 , b2 , c2 Respectively " << endl;
    cin >> d;
    cin >> e;
    cin >> f;

    g = a/d ;
    h = b/e ;
    i = c/f ;

    if (g = h = i ){
        cout << "The Two Equations are Dependant " << endl;
    }

    else {
        cout << "Moving to Next step " << endl;

    }
    if (g != h ) { 
        cout << "The Two Eqautions are Intersecting" << endl;
        
    }

    

}
