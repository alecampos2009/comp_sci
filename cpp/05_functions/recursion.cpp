#include <cstdlib>
#include <iostream>

using namespace std;

long recursion(long a)
{
  if (a > 1)
    return(a*recursion(a-1));
  else
    return(1);
}

int main()
{
  long number;
  cout << "Enter a long integer" << endl;
  cin >> number;
  cout << recursion(number) << endl;

  return EXIT_SUCCESS;
}
