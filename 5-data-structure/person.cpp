// Simple data structure example

#include <iostream>
#include <string>
using namespace std;

struct person
{
  string firstName;
  string lastName;
};

void printPerson(person a);

int main()
{
  person student;

  student.firstName = "Marco";
  student.lastName = "Casagrande";

  printPerson(student);

  return 0;
}

void printPerson(person a)
{
  cout << a.firstName << " " << a.lastName << endl;
}
