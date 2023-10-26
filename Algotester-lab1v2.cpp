#include <iostream>
using namespace std;

int h1,h2,h3,h4;
int d1,d2,d3,d4;
int i;
float arr1[0];
float arr2[0];
int main (){

    cout << "Enter lenght (4)" << endl;
    cin >> h1;
    cin >> h2;
    cin >> h3;
    cin >> h4;
    cout << "Your lenght " << h1 << " " << h2 << " " << h3 << " " << h4 << endl;

    int stol [4] = {h1, h2, h3, h4};

      for(i = 1;i < 4; ++i) {
     if(arr1[0] < stol[i])
      arr1[0] = stol[i];
      }
    
    for(i = 1;i < 4; ++i) {
     if(arr2[0] = stol[i])
      arr2[0] = stol[i];
      }

    if (h1 > arr2[0]){
       d1 = h1 - arr2[0];
    }else {
    }
    if (h2 > arr2[0]){
        d2 = h2 - arr2[0];
    }else {

    }
    if (h3 > arr2[0]){
        d3 = h3 - arr2[0];
    }else{

    }
    if (h4 > arr2[0]){
        d4 = h4 - arr2[0];
    }
    cout << "Result: " << d1 << " "<<d2 <<" "<<d3 << " " << d4 << endl;

      if (arr1[0] > 2*arr2[0]){
        cout << "NO\n";
      }
    return 0;
}