#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  string mrSamberg("Andy");
  string &an_alias = mrSamberg;
  string &another_alias = an_alias;

  cout << mrSamberg << endl;
  cout << an_alias << endl;
  cout << another_alias << endl;

  cout << &mrSamberg << endl;
  cout << &an_alias << endl;
  cout << &another_alias << endl;

  return EXIT_SUCCESS;
}