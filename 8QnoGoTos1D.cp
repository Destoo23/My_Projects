#include <iostream>
#include <cmath>
using namespace std;

bool OK (int q [ ], int length, int col) {
  for (int i = 0; i < col; i++) {
    // Row Test
    if (q[col] == q[i] || (col - i) == abs(q[col] - q[i])) { // if we find a q to our left
      return false;
    } 
  }
  return true;
}

void backtrack (int q [ ], int length, int col, int &numOfSolutions) {
  // Print
  if (col == 8) { // length = 8
    cout << "Solution #" << numOfSolutions++ << endl;
    for (int r = 0; r < 8; r++) { 
      for (int j = 0; j < 8; j++) {
        if (q[j] == r) cout << "1 "; 
        else cout << "0 ";
      }
      cout << endl;
    }
    cout << endl;
    return;
  }
  // Backtrack
  for (int i = 0; i < 8; i++) {
    q[col] = i;
    if (OK (q, 8, col)) {
      backtrack (q, 8, col + 1, numOfSolutions); // recursion to call itself again but while we proceed to NC using col + 1
    }
  }
}

int main () { 
  int q[8] = {0};
  int c = 0;
  int numOfSolutions = 1;
  backtrack (q, 8, c, numOfSolutions); // Recursion in the fct definition ensures that we 

return 0;
}

/*
EXPLANATION:

Line 40 is all we need because in the function definition we are making recursion calls that uses line 31 to move through the columns for each iteration / each solution. It also handles our printing for us. This was tricky because when I used col++, I got stuck in Segmentation Fault. probably because the program kept changing col = col + 1 and maybe when it got to col8 it did 8+1 and 9 is bigger than the arr size.

*/