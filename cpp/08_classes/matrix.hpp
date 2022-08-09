#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

class matrix {
private:
  double *p;
  int m,n;

public:
  matrix(matrix &a);
  matrix(int rows, int columns);
  double &operator()(int i, int j);
};
