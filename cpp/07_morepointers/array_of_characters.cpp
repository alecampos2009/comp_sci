#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  char question[] = "Please, enter your first name: ";
  char greeting[] = {'H','e','l','l','o',',',' ','\0'};
  char yourname[80];
  cout << question;
  cin >> yourname;
  cout << greeting << yourname << "!" << endl;

  return EXIT_SUCCESS;
}
  
