#include <iostream>
#include <cstdlib>
#include <string>
#include <memory>

// base class
class shape {
public:
  shape(const std::string &my_shape_type) {
    shape_type = my_shape_type;
    std::cout << "shape constructor for " << this << " with shape " << shape_type << std::endl;
  }

  virtual ~shape(){
    std::cout << "shape destructor for " << this << " with shape " << shape_type << std::endl;
  }

  void print_shape(){
    std::cout << shape_type << std:: endl;
  }

  virtual void print_color(){}

protected:
  std::string shape_type;
};

// derived class
class colored_shape: public shape {
public:
  colored_shape(std::string my_color_value, std::string my_shape_type) : shape(my_shape_type){ 
    color_value = my_color_value;
    std::cout << "colored_shape constructor for " << this << " with color " << color_value << std::endl;
  }

  ~colored_shape(){
    std::cout << "colored_shape destructor for " << this << " with color " << color_value << std::endl;
  }

  void print_color(){
    std::cout << color_value << std::endl;
  }

protected:
  std::string color_value;
  };

int main()
{
  std::string red = "red";
  std::string green = "green";
  std::string square = "square";
  std::string rectangle = "rectangle";

  // dynamic allocation with regular pointers
  shape *red_square;
  red_square = new colored_shape(red, square);
  red_square->print_shape();
  red_square->print_color();
  delete red_square;
  std::cout << std::endl;

  // dynamic allocation with smart pointers
  std::shared_ptr<shape> green_rectangle;
  green_rectangle = std::make_shared<colored_shape>(green, rectangle);
  std::cout << "green_rectangle.use_count() == " << green_rectangle.use_count() << std::endl;
  green_rectangle->print_shape();
  green_rectangle->print_color();

  return EXIT_SUCCESS;
}
