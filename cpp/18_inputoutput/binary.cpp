#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main() {
  // OUTPUTING DATA TO FILE  
  //char * outdata = new char [4];
  //outdata[0] = 'a';
  //outdata[1] = 'b';
  //outdata[2] = '3';
  //outdata[3] = 'd';
  
  double (*number)[2];
  number = new double [3][2];

  number[0][0] = 42.34;
  number[1][0] = 0.3;
  number[2][0] = 98.6;
  number[0][1] = 345.765;
  number[1][1] = 000;
  number[2][1] = 028.0;
 
  ofstream outfile ("binary.dat", ofstream::binary);
  if (outfile.is_open()){
    outfile.write((char *) (number),6*sizeof(double));
  }
  outfile.close();
  //delete outdata;
  delete [] number;
  
  // EXTRACTING DATA FROM FILE
  //char *indata;
  /*double **othernumber;
  othernumber = new double *[3];
  for (int i = 0; i < 3; i++) othernumber[i] = new double [2];*/
  double (*othernumber)[2];
  othernumber = new double [3][2];
  ifstream::pos_type size;

  ifstream infile("binary.dat",ifstream::binary);
  infile.seekg(0,ifstream::end);
  size = infile.tellg();
  infile.seekg(0,ifstream::beg);
  
  //indata = new char[size]; 
 
  infile.read((char*)(othernumber),size);
  infile.close();
  
  //cout <<indata[0] << indata[1] << indata[2] << endl;
  cout << othernumber[0][0] << "\t" << othernumber[0][1] << endl;
  cout << othernumber[1][0] << "\t" << othernumber[1][1] << endl;
  cout << othernumber[2][0] << "\t" << othernumber[2][1] << endl;
  
  delete [] othernumber;
  /*
  //delete indata;
  for (int i = 0; i < 3; i++) delete [] othernumber[i];
  delete [] othernumber;
  */
  return EXIT_SUCCESS;
}
