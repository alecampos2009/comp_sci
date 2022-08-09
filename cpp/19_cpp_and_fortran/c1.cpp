//
// Calling Fortran routines from C++. A sample
// C++ file
// Benigno 990205
//

#include <stream.h>

// Def. a structure type to access external Fortran common area... 
typedef struct { int a[6][5]; int b[2][2]; 
                 char c1[80]; char c2[80]; } forcommon;

// List of all modules not written in C/C++ language... 
extern "C" { 
   double test_( double& );   
   void testmore_( const char*, const int&, const char*, const int& ); 
}

int main()
{
   double d1, d2;
   char s1[]="just a test", s2[]="really a test";
   extern forcommon fcom_; // To access the external /fcom/ fortran common...
   int i, j;
   
   d1 = 10.0;
   d2 = test_( d1 ); // test is an external Fortran function 

   int sizs1 = sizeof(s1);
   int sizs2 = sizeof(s2);
   testmore_( s1, sizs1, s2, sizs2 ); // testmore is an external Fortran subroutine
   cout << d1 << " " << d2 << endl;

   for( i=0; i<5; i++ ) {
      for( j=0; j<6; j++ ) {
	 cout << fcom_.a[j][i] << " ";
      }
      cout << endl;
   }

   for( i=0; i<2; i++ ) {
      for( j=0; j<2; j++ ) {
	 cout << fcom_.b[j][i] << " ";
      }
      cout << endl;
   }

   cout << fcom_.c1 << " " << fcom_.c2 << endl;

   return ( 0 );
}
