#include <iostream>
#include <math.h>
using namespace std;

unsigned long long factorial(int n) {
    if (n == 0) {
        return 1; // Факторіал 0 дорівнює 1
    } else {
        return n * factorial(n - 1);
    }
}


int main () {
    int n;
    float c = 0;
    unsigned long long b;
    cout << "Enter num n" << endl;
    cin >> n;

    if (n < 0) {

        cout << "Can`t find factorial of 0" << endl;
    } else {
        b = factorial(n);
        cout << b << endl;
    }

    float a = pow(2, n);

    float num1 = a * b;

    float num2 = pow (n, n);

    float result = num1/num2;

    cout << result << endl;

    for (int i = 1; i <= n; i++) {
        // Додайте до суми поточний елемент ряду (за формулою)
        c = c + result; 
        continue;
    }

    cout <<"Result is:"<< endl << c << endl;


    return 0;
}