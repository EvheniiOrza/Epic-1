#include <iostream>
using namespace std;
int i; // допоміжні змінні
int N[0]; // масив клітинок
int a; // прискорення
int k;
int main ( ) {

    cout << "Enter number of zones" << endl;
    cin >> i;
    const int sizezone = i;
    int N[sizezone];

     for (int n = 1; n <= sizezone; n++){
        cout << "Enter a number for element " << n << ": ";
        cin >> N[sizezone];
     }
     
      for (int n = 0; n < sizezone; n++) {
        cout << N[sizezone] << " ";
    }



    return 0;
}