#include <iostream>
#include <math.h>

using namespace std;

int main () {

    
    float a, b;

    a = 1000;
    b = 0.0001;


    float  plus1 = pow((a + b), 3);

    cout << plus1 << endl;

    float plus2 = pow(a, 3) + 3*pow(a, 2) * b;

    cout << plus2 << endl;

    float num1 = plus1 - plus2;
    float num2 = 3 * a * pow (b, 2) + pow(b, 3);
    cout << num1 << endl;

    cout << num2 << endl;

    cout<< num1/num2 << endl;
    
    
    
    
    
    
    
    return 0;

}