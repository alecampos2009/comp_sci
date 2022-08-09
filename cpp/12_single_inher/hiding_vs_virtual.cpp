#include <iostream>
#include <cstdlib>

using namespace std;

/*
Overloading: provides multiple definitions of the function by changing the signature, i.e.
changing number or datatype of input parameters (return type doesn't play any role). This 
feature is independent of inheritance. However, overloading a base class function with a 
derived class function that has a different signature does not work. That is, an object of
the derived class will only see the derived class function, rather than both the derived
and the overloaded base class function. This is also called hiding the base class function.

Overriding: it is the redefinition of base class function in its derived class with the
same signature. It can only be done in derived classes, with the base class member set
as virtual. This is how polymorphysm works.
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
  cout << b.give_circumference() << endl;
  cout << b.give_area() << endl;
  cout << endl;

  derived d;
  cout << d.give_circumference(1.0) << endl;
  cout << d.give_area() << endl;
  cout << endl;

  base *ptr = new derived;
  cout << ptr->give_circumference() << endl;
  cout << ptr->give_area() << endl;
  
  return EXIT_SUCCESS;
}
