// A good cpp tutorial can be found at https://www.tutorialspoint.com/cplusplus

#include <iostream>
using namespace std;

// program entry point
int main()
{
  // variables declaration
  int age;

  cout << "How old are you?\n";
  cin >> age;

  if (age < 18)
  {
    cout << "Oh, you are a kid!\n";
  }
  else
  {
    cout << "Hey you are an adult!\n";
  }

  return 0;
}
