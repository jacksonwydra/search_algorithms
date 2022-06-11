#include <iostream>
#include <random>
#include <string>

#include "person.h"
#include "student.h"

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

  unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
  std::default_random_engine generator(seed);
  std::uniform_int_distribution<int> distribution(1000, 9999);
  int id = distribution(generator);

  Student user(first_name, last_name, age, id);
  cout << "Hello, " << user.FullName() << " (" << user.Id() << ")" << endl;

  return 0;
}
