// Using vectors

#include <iostream>
using namespace std;

int main()
{
  int lottery[6];

  for (int i = 0; i < 6; i++)
  {
    cout << "Extract number " << i + 1 << ": ";
    cin >> lottery[i];
  }

  cout << "The extracted numbers are:\n";
  for (int i = 0; i < 6; i++)
  {
    cout << lottery[i] << ", ";
  }
  cout << endl;

  return 0;
}