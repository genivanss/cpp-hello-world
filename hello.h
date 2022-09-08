/* Class Declaration */
#ifndef HELLO_H   // If Not Defined: avoid repeted define and run time error
#define HELLO_H 

//includes
#include <iostream>
#include <string>

//namespaces
using namespace std;

class Hello {

  // private section
  private:
    string text;

  // public section
  public:
    Hello(string text = "Hello World");
    string getText() const;
    void setText(string text);
    void print() const;
};

#endif