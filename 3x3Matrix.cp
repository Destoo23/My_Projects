#include <iostream>
#include <string>
using namespace std;

void fill_Arr(int a [ ], string s, int length) {
  int ntest = 0; 
  int n = 0; 
  n = stoi(s); // n = 123456789
  cout << n << endl; // 123456789
  
  for (int i = (length - 1); i >= 0; i--) { // explanation below
    ntest = n; // 123456789
    ntest = ntest % 10; // 9
    a[i] = n % 10; // a[9] = 9, a[8] = 8, a[7] = 7, ...
    n = n / 10 ; // 12345678
  }
  for (int i = 0; i < length; i++) {
    if (i % 3 == 0) { 
      cout << endl;
    }
    cout << a[i] << " "; // 9
  }
}

int main ( ) {
  int arr [9] = {0};
  fill_Arr (arr, "123456789", 9);

  return 0;
}


// LINE 11
/*
what its essentially is 
"for (int i = 8; i >= 0; i--) "  because we are counting down
I ran into a problem that printed the numbers in the opposite order, to fix this order, I reverse the counting and used a different loop to print arr's values.
ntest is a variable I created to mock 'n' so that when we change the number within the loop, we can still use n to get the next number other than the last/first digit.
's' in the fill_Arr() is for the input.

*/