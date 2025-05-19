#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
  size_t size;
  
  int a = 5; // 101
  int b = 7; // 111
  int c = 0; // 000
  
  c = a & b; // 101
  cout << "a & b: " << c << endl;
  
  c = a | b; // 111
  cout << "a | b: " << c << endl;
  
  return EXIT_SUCCESS;
}
