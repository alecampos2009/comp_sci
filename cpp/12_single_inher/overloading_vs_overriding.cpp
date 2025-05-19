#include <iostream>
#include <cstdlib>

using namespace std;

/*

Overloading: 

This is the definition of multiple functions with the same name but with 
different signatures, i.e. changing number or datatype of input parameters 
(return type doesn't matter). This feature is independent of inheritance.

When defining a derived-class function with the same name as a base-class 
function, overloading will not work, whether the signatures of the base and 
derived functions differ or not. Instead, an object of the derived class will 
only see the derived-class function, rather than both the derived- and base- 
class functions. This is also called hiding the base-class function.

Overriding:

This is the redefinition of a base-class function in a derived class. It can 
only be done in derived classes, using the same signature in the derived class
as the base class, and with the base-class member set as virtual. This is 
essentially how polymorphysm works.

If by accident the derived-class function is defined with a different signature
than the base-class function it is meant to override, or the keyword `virtual` 
is not included in the definition of the base-class function, then the derived-
class function will hide the base-class function (instead of overriding it). 
That is, as mentioned earlier, an object of the derived class will only see 
the derived-class function, rather than both the derived- and base-class 
functions. Additionally, since overriding did not work, a base-class pointer 
that points to a derived-class function will only be able to call the base- 
class function. Use the keyword `override` in the derived-class function so 
that the compiler gives an error if you actually wanted to override a base-
class function but made any of the mistakes above.

*/

class base {
public:
  float area;
public:
  float give_circumference(){return 1.0;}
  virtual float give_area(){return 2.0;}
};

class derived : public base {
public:
  double radius;
public:
  float give_circumference(double circ){return 3.0;}
  float give_area(){return 4.0;}
};

int main(){
  base b;
  cout << b.give_circumference() << endl; // gives 1
  cout << b.give_area() << endl;          // gives 2
  cout << endl;

  derived d;
  // the line below does not compile because the base class function has been
  // hidden
  // cout << d.give_circumference() << endl;
  cout << d.give_circumference(1.0) << endl; // gives 3
  cout << d.give_area() << endl;             // gives 4
  cout << endl;

  base *ptr = new derived;
  cout << ptr->give_circumference() << endl; // gives 1
  // the line below does not compile because it is not overriding a base class
  // function with the same signature
  // cout << ptr->give_circumference(1.0) << endl; 
  cout << ptr->give_area() << endl;          // gives 4
  cout << endl;
  
  return EXIT_SUCCESS;
}
