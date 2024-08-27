// include libraries
#include <iostream>
#include <string>
using namespace std;

class Hello {
public:
  void HelloFunction();
  void AssignHelloVariable(string Hello);

private:
  string Hello;
};

void Hello::HelloFunction() {
  // output the contents of the parameter
  cout << Hello << endl;
}

void Hello::AssignHelloVariable(string Hello) { this->Hello = Hello; }

int main() {

  /*
  First ensure this particular window is opened by typing code . -n in the terminal
  To execute this file in CMD, save via Cntrl + S, then type:
  g++ [file name].cpp 
  And then, type: .\a.exe
  To clear the console, type: cls
  To go back to a directory, type: cd ..
  To open terminal, type: CNTRL + J
  To make a new terminal, type: CNTRL + SHIFT + `
  */

  Hello myHello;
  string Hello = "Hello World";

  // call functions
  myHello.AssignHelloVariable(Hello);
  myHello.HelloFunction();

  return 0;
}