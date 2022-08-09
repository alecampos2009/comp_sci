#include <iostream>
#include <cstdlib>

using namespace std;

/*****************************************************************************
-A derived class inherits all members of a base class. When the access specifier
is public, all base class members are inherited as they are, that is, either
public, protected, or private. 

-If the access specifier is protected, public base class members are inherited
as protected, and the rest are inherited as they are.

-If the access specifier is private, all base class members are inherited as
private. 

-Below is a table depicting the differences between public, protected, and
private base-class members
                       accessed within derived class     accessed in main
public base member                 Yes                           Yes
protected base member              Yes                           No
private base member                No                            No

Note that within the derived class, one can manipulate base-class private
members using public and protected base-class member functions.

In main, an instance of a derived class can only manipulate base-class private 
members using public base-class member functions (e.g. set_base_3 and 
return_base_3 below).
*******************************************************************************/

class base {
public:
  int base_1;
protected:
  int base_2;
private:
  int base_3;
public:
  void set_base_3(){ base_3 = 3; };
  int return_base_3(){ return base_3;};
};

class derived : public base{
public:
  int der_1;
protected:
  int der_2;
private:
  int der_3;
public:
  void der_set_base_2(){ base_2 = 5; };
  int der_return_base_2(){ return base_2;};
};

int main(){
  derived test;

  test.der_1 = 10;
  cout << test.der_1 << endl;

  test.der_set_base_2();
  cout << test.der_return_base_2() << endl;

  test.set_base_3();
  cout << test.return_base_3() << endl;

  return EXIT_SUCCESS;
}
