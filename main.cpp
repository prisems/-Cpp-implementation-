// Author == earthrulerr ([[User:Earthrulerr]])
// A C++ implementation of *.
#include <iostream>
#include <string>
using namespace std;
int main() {
  string input;
  int loop2 = 0;
  int loop = 1;
  int random = rand();
  while (loop == 1) {
    getline(cin, input);
    if (input == "*") {
      cout << "Hello World";
    } else if (input == " * ") {
      cout << random;
    } else if (input == "*+*") {
      loop2 = 1;
      while (loop2 == 1) {}
    }
  }
}
