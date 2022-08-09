// The Savage benchmark tests for the speed and accuracy of some common mathematical functions.
#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
  int loops;
  double test = 1.0;
  cout << "Enter the number of loops" << endl;
  cin >> loops;
  while (loops <= 0){
    cout << "Enter a possitive number of loops." << endl;
    cin >> loops;
  }
  
  clock_t start_time = clock();
  for ( int i = 1; i < loops; ++i)
    test = tan(atan(exp(log(sqrt(test*test))))) + 1.0;
  clock_t stop_time = clock();
  cout << "test = " << test << endl;
  cout << "time taken = " <<
    (double)(stop_time - start_time)/CLOCKS_PER_SEC << " secs." << endl;
    
  return (EXIT_SUCCESS);
}
