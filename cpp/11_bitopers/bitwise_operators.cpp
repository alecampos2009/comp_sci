#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
  size_t size;
  
  short int a = 5; // 101
  size = sizeof(a);
  cout << "size of a: " << size << endl;
  
  short int b = 7; // 111
  int c = 0;
  
  c = a & b;
  size = sizeof(a);
  cout << "size of a: " << size << endl;
  cout << "c: " << c << endl;
  
  char test = 72;
  cout << "test: " << test << endl;

  return EXIT_SUCCESS;
}
