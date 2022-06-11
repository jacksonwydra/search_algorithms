#include <iostream>

#include "student.h"

using std::cout;
using std::endl;
using std::string;

Student::Student()
    : Person(), id_(-1) {
  cout << "Constructing Student: " << FullName() << endl;
}

Student::Student(std::string first_name, std::string last_name, int age, int id)
    : Person(first_name, last_name, age), id_(id) {
  cout << "Constructing Student: " << FullName() << endl;
}

Student::~Student() {
  cout << "Deconstructing Student: " << FullName() << endl;
}

int Student::Id() { return id_; }
