// A program that greet the input name

#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;

  cout << "What's your name?\n";
  getline(cin, name);

  cout << "Hello " << name << "!\n";

  return 0;
}
