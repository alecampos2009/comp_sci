#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
  int m = 3;

  // ###############################################################
  double *pt;
  // ###############################################################
  pt = new double;
  /* The above creates a pointer pt, and it points to a double.*/
  delete pt;

  pt = new double[m];
  /* The above creates a dynamically allocated array of size m. */
  delete [] pt;

  // ############################################################### 
  double (*pta)[4];
  // ###############################################################
  // The above creates a pointer to an array of size 4.
  pta = new double [m][4];
  /* The above creates a dynamically allocated array of sized m 
     whose elements are arrays of size 4.
  */

  pta[1][2] = 2.3;

  cout << "Pointer to an array" << endl;
  cout << "pta[1][2]: " << pta[1][2] << endl;
  cout << "*(*(pta+1)+2): " << *(*(pta+1)+2) << endl;
  cout << endl;

  delete [] pta;

  // ############################################################### 
  double *apt[m];
  // ###############################################################
  // The above creates an array of pointers of size m.
  for (int i = 0; i < m; i++)
    apt[i] = new double[4];
  /* In the above, each of the pointers in the array is dynamically
     allocated as an array of size 4. Note that the data in the arrays
     of doubles is not contiguous between arrays.
  */
  
  apt[1][2] = 2.3;

  cout << "Array of pointers " << endl;
  cout << "apt[1][2]: " << apt[1][2] << endl; 
  cout << "*(*(apt+1)+2): " << *(*(apt+1)+2) << endl;
  cout << endl;

  for (int i = 0; i < m; i++)
    delete [] apt[i];

  return EXIT_SUCCESS;
}
