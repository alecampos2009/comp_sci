#include <iostream>
#include <cstdlib>

using namespace std;

/*****************************************************************************
-Below is a table depicting the diffrences between public, protected, and
private members of a class

                      accessed within class      accessed through class object
public member                 Yes                             Yes
protected member              Yes                             No
private member                Yes                             No

-You might ask, then, what's the point of a protected member since it behaves 
just like a private one. It's difference comes in when it comes to inheritance

                       accessed within derived class      accessed through derived-class object    
public base member                Yes                                   Yes
protected base member             Yes                                   No
private base member               No                                    No

-Note that within the derived class, one can manipulate base-class private
member variables using public and protected base-class member functions.

-A derived-class object, however, can only manipulate base-class private 
member variables using public base-class member functions (e.g. set_base_3 and 
return_base_3 below).

-If the class access specifier is public, all base-class members are inherited as 
they are.

-If the class access specifier is protected, public base class members are inherited
as protected, and the rest as they are.

-If the class access specifier is private, all base class members are inherited
as private.

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

class derived1 : public base{
public:
  int der_1;
protected:
  int der_2;
private:
  int der_3;
public:
  void der_set_base_2(){ base_2 = 2; };
  int der_return_base_2(){ return base_2;};
};

class derived2 : private base{
public:
  int der_1;
protected:
  int der_2;
private:
  int der_3;
public:
  void der_set_base_2(){ base_2 = 2; };
  int der_return_base_2(){ return base_2;};
};

int main(){
  // ---------------------------------
  derived1 test;

  test.der_1 = 10;
  cout << test.der_1 << endl;

  test.base_1 = 1;
  cout << test.base_1 << endl;

  test.der_set_base_2();
  cout << test.der_return_base_2() << endl;

  test.set_base_3();
  cout << test.return_base_3() << endl;

  cout << endl;

  // ---------------------------------
  derived2 another_test;

  another_test.der_1 = 10;
  cout << another_test.der_1 << endl;

  // another_test.base_1 = 1;  this doesn't work anymore because base_1 is now private in the derived class
  // cout << another_test.base_1 << endl; this doesn't work anymore because base_1 is now private in the derived class

  another_test.der_set_base_2();
  cout << another_test.der_return_base_2() << endl;

  // another_test.set_base_3(); this doesn't work anymore because set_base_3 is now private in the derived class
  // cout << another_test.return_base_3() << endl; this doesn't work anymore because return_base_3 is now private in the derived class

  return EXIT_SUCCESS;
}
