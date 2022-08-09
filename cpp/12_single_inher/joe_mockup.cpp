#include <iostream>
#include <cstdlib>
using namespace std;

class JoeWithModels {
private:
  double *p1;
public:
  JoeWithModels(int m);
  virtual ~JoeWithModels();
  void run();
  virtual void test();
};

class MyJoe : public JoeWithModels {
private:
  double *p2;
public:
  MyJoe(int m, int n);
  virtual ~MyJoe();
  void test();
  virtual void wall();
};

class MyJoeSA : public MyJoe{
private:
  double reynolds_stresses;
public:
  MyJoeSA(int m, int n);
  ~MyJoeSA();
  //void test();
  void wall();
};

JoeWithModels::JoeWithModels(int m) {
  p1 = new double[m];
  cout << "JoeWithModels(); " << p1 << endl;
}

JoeWithModels::~JoeWithModels() {
  cout << "~JoeWithModels" << p1 << endl;
  delete p1;
}

void JoeWithModels::run() {
  cout << "Running routine run" << endl;
  test();
}

void JoeWithModels::test() {
  cout << "And this is the test for JoeWithModels" << endl;
}

MyJoe::MyJoe(int m, int n) : JoeWithModels(m) {
  p2 = new double[n];
  cout << "MyJoe()" << p2 << endl;
}
MyJoe::~MyJoe() {
  cout << "~MyJoe()" << p2 << endl;
  delete p2;
}

void MyJoe::test() {
  cout << "And this is the test for MyJoe" << endl;
  wall();
}

void MyJoe::wall() {
  cout << "wall function for MyJoe" << endl;
}

MyJoeSA::MyJoeSA(int m, int n) :MyJoe(m,n) {
  cout << "MyJoeSA()" << endl;
}

MyJoeSA::~MyJoeSA() {
  cout << "~MyJoeSA()" << endl;
}
/*
void MyJoeSA:: test(){
  cout << "And this is the test for MyJoeSA" << endl;
  wall();
}*/

void MyJoeSA::wall() {
  cout << "wall function for more MyJoeSA" << endl;
}

int main()
{
  JoeWithModels *pt;
  pt = new MyJoeSA(10,20);
  pt->run();
  delete pt;
  cout << "Test after deleting, this is pt: " << pt << endl;
  return(EXIT_SUCCESS);
}
