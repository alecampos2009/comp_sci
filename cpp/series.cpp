#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int n;
  double sum = 0, pi;
  cout << "Enter the number of terms for the series: " << endl;
  cin >> n;
  for (int i = 1; i <= n; ++i)
    {
      sum += 1.0/(i*i*i*i);
    }
  pi = sqrt(sqrt(90*sum));
  cout << "The approximate value of pi is: " << pi << endl;
  return (0);
}
