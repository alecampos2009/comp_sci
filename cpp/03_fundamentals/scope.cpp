#include<iostream>
using namespace std;

int main()
{
  int i = 1;
  double x = 1.111;
  cout << i << " " << x << "\n";
  {
    int x = 2;
    double i = 2.222;
    cout << i << " " <<x << "\n";
  }
  cout << i << " " << x << " \n";
  { 
    char i ='i';
    char x ='x';
    cout << i << " " << x << "\n";
    {  
      int x = 3;
      double i = 3.333;
      cout << i << " " << x << "\n";
    }
    cout << i << " " << x << "\n";
  }
  return(0);
}
