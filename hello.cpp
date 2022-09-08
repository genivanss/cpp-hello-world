/* Class Implementation */
#include "hello.h"

//Getter
string Hello::getText() const {
  return text;
}

//Setter
void Hello::setText(string text) {
  this->text = text;
}

//contructors
Hello::Hello(string s) : text(s) {
}

// Method
void Hello::print() const {
  cout << text << "!" << endl;
}