#include <iostream>
#include <cstdlib>

using namespace std;

class base_1 {
public:
  virtual ~base_1() { cout << "base_1 destructor called" << endl; }
};

class derived_1: public base_1 {
public:
  ~derived_1() { cout << "derived_1 destructor called" << endl; }
};

class base_2 {
public:
  ~base_2() { cout << "base_2 destructor called" << endl; }
};

class derived_2: public base_2 {
public:
  ~derived_2() { cout << "derived_2 destructor called" << endl; }
};

int main() {
  base_1* obj_1 = new derived_1();
  delete obj_1; // Calls the drived_1 destructor and then the base_1 destructor.

  base_2* obj_2 = new derived_2();
  delete obj_2; // Since I forgot the keyword virtual in the base_2 destructor,
                // the derived_2 destructor does not override the base_2
                // desctructor and hence only the base_2 desctructor is called.
                // To avoid mistakes like this, you can use the override keyword
                // in the definition of the derived_2 destructor.

  return 0;
}
