#include <iostream>
#include <cstdlib>
#include <math.h>
#include <random>

using namespace std;

int main()
{
  int nt = 512;
  
  double t0 = 0.0;
  double t1 = 1.0;
  double delta = (t1 - t0)/nt;
  double sqdelta = sqrt(delta);

  double ti = 0.0;
  double wi = 0.0;

  FILE *fid;
  fid = fopen("history.dat", "w");
  if (fid == NULL)
  {
    cout << "Could not open file history.dat" << endl;
    return 0;
  }
  fprintf(fid,"Variables = \"t\" \"w\"\n");
  fprintf(fid,"Zone T = \"wiener\" F = point\n");

  default_random_engine generator(time(NULL)) ;
  normal_distribution<double> distribution (0.0, 1.0);

  for (int i = 0; i < nt; i++)
  {
    ti += delta;
    wi += distribution(generator)*sqdelta;
    
    cout << ti << "   " << wi << endl;
    fprintf(fid,"%.8e\t%.8e\n", ti, wi);
  }
  
  fclose(fid);

  return EXIT_SUCCESS;
}
