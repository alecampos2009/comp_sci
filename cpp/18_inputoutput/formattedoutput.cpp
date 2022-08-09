#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

// setw() : applies only to the one right after
// left/right, fixed/scientific, setprecision() : apply to all, everything, even if using diff couts.

int main(){
  double n[4],a[4],b[4];
  n[0] = 0;
  n[1] = 10;
  n[2] = 100;
  n[3] = 1373;
  a[0] = 0.23;
  a[1] = 0.2342;
  a[2] = 0.348;
  a[3] = 0.349864;
  b[0] = 2489.23;
  b[1] = 3987.5;
  b[2] = 400.2874;
  b[3] = 39.38729;

  // setprecition(), when also used with fixed/scientific, sets the number of decimal points. If 
  // there are less decimal points in the variable, then setprecision compensates by adding zeros.
  // setw() sets the width (in characters) for the following outputted element only.
  
  cout << right << fixed << setprecision(3);
  cout << setw(10) << n[0] << setw(8) << a[0] << setw(10) << b[0] << endl;
  cout << setw(10) << n[1] << setw(8) << a[1] << setw(10) << b[1] << endl;
  cout << setw(10) << n[2] << setw(8) << a[2] << setw(10) << b[2] << endl;
  cout << setw(10) << n[3] << setw(8) << a[3] << setw(10) << b[3] << endl;
  
  cout << endl;

  cout << right << scientific << setprecision(4);
  cout << setw(12) << n[0] << setw(14) << a[0] << setw(16) << b[0] << endl;
  cout << setw(12) << n[1] << setw(14) << a[1] << setw(16) << b[1] << endl;
  cout << setw(12) << n[2] << setw(14) << a[2] << setw(16) << b[2] << endl;
  cout << setw(12) << n[3] << setw(14) << a[3] << setw(16) << b[3] << endl;

  return EXIT_SUCCESS;
}
