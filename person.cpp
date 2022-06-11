#include <iostream>

#include "person.h"

using std::cout;
using std::endl;
using std::string;

Person::Person() : first_name_("Default"), last_name_("Person"), age_(-1) {
  cout << "Constructing " << GetName() << endl;
}

Person::Person(string first_name, string last_name, int age)
    : first_name_(first_name), last_name_(last_name), age_(age) {}

Person::~Person() {
  cout << "Deconstructing " << GetName() << endl;
}

string Person::GetName() {
  return first_name_ + " " + last_name_;
}
