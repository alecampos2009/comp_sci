#include <iostream>
#include <cstdlib>
#include <cstddef>

using namespace std;

int main()
{
  size_t size;
  cout << "\nRelative storage sizes are: \n\n";
  size = sizeof(char);
  cout << "char: \t\t" << size << endl;
  size = sizeof(short);
  cout << "short: \t\t" << size << endl;
  size = sizeof(int);
  cout << "int: \t\t" << size << endl;
  size = sizeof(long);
  cout << "long: \t\t" << size << endl;
  size = sizeof(float);
  cout << "float: \t\t" << size << endl;
  size = sizeof(double);
  cout << "double: \t\t" << size << endl;
  size = sizeof(long double);
  cout << "long double: \t\t" << size << endl;
  
  return(EXIT_SUCCESS);
}
