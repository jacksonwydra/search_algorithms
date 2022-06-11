#include <iostream>
#include <string>

#include "person.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  {
    Person scope;
  }

  cout << "First name: ";
  string first_name;
  cin >> first_name;

  cout << "Last name: ";
  string last_name;
  cin >> last_name;

  cout << "Age: ";
  int age;
  cin >> age;

  Person user(first_name, last_name, age);
  cout << "Hello, " << user.GetName() << endl;

  return 0;
}
