#include <iostream>
#include <cstdlib>

using namespace std;

int addition(int a, int b)
{
  int r;
  r = a + b;
  return(r);
}

int main()
{
  int x, y, z;
  cout << "Enter two values" << endl;
  cin >> x >> y;
  z = addition(x,y);
  cout << "The value of the sum is " << z << endl;

  return(EXIT_SUCCESS);
}
