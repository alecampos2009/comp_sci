#include "matrix.hpp"

int main()
{
  int rows, columns;
  cout << "Enter the number of rows: ";
  cin >> rows;
  cout << "Enter the number of columns: ";
  cin >> columns;

  //Create matrix:
  matrix m(rows,columns);

  //Assign values to elements of the matrix:
  for (int i = 1; i <= rows; ++i)
    for (int j = 1; j <= columns; ++j)
      m(i,j) = 10.0*i*j;

  //Test assignment:
  for (int i = 1; i <= rows; ++i)
    for (int j = 1; j <= columns; ++j)
      cout << "m(" << i << ", " << j << ") = " << m(i,j) << "\n";

  return EXIT_SUCCESS;
}
