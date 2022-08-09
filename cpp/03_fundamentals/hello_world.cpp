// Hello world

#include <iostream>
#include <cstdlib>
#include <climits>

using namespace std;

int main ()
{
  int a = 3;
  
  cout << "Hello World!"<<endl;
  cout << "Integer variable a: " << a << endl;
  cout << "Maximum of 2.0 and 3.0: " << max(2.0, 3.0) << endl;
  cout << "0.0 / 0.0: " << 0.0 / 0.0 << endl;
  cout << " 1.2 / 0.0: " << 1.2 / 0.0 << endl;
  cout << "INT_MAX: " << INT_MAX << endl;

  return EXIT_SUCCESS;
}
