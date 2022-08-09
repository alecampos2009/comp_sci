#include "matrix.hpp"

matrix::matrix(matrix &a) 
{
  m = a.m;
  n = a.n;
  p = new double[m*n];
  memcpy(p, a.p, m*n*sizeof(double));
}

matrix::matrix(int rows, int columns)
{
  m = rows;
  n = columns;
  p = new double[m*n];
  cout << "Initialized matrix with " << m << " rows and " << n
       << " columns." << endl;
}

double &matrix::operator()(int i, int j)
{
  return p[i-1+m*(j-1)];
}
