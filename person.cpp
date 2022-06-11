#include <iostream>

#include "person.h"

using std::cout;
using std::endl;
using std::string;

Person::Person()
    : first_name_("Default"), last_name_("Person"), age_(-1) {
  cout << "Constructing Person: " << FullName() << endl;
}

Person::Person(string first_name, string last_name, int age)
    : first_name_(first_name), last_name_(last_name), age_(age) {
  cout << "Constructing Person: " << FullName() << endl;
}

Person::~Person() {
  cout << "Deconstructing Person: " << FullName() << endl;
}

string Person::FullName() {
  return first_name_ + " " + last_name_;
}
