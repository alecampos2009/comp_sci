#include <iostream>
#include <cstdlib>
#include <climits>

using namespace std;

int main()
{
  int i;
  
  i = INT_MAX + 10;
  cout << "i = " << i << "\n";

  i = INT_MIN - 1;
  cout << "i = " << i << "\n";

  cout << "max unsigned int: " << UINT_MAX << endl;

  return(EXIT_SUCCESS);
}
