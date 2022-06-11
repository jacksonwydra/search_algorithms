#ifndef SEARCH_ALGORITHMS__STUDENT_H_
#define SEARCH_ALGORITHMS__STUDENT_H_

#include <string>

#include "person.h"

class Student : public Person {
 public:
  Student();
  Student(std::string first_name, std::string last_name, int age, int id);
  ~Student();

  int Id();

 private:
  int id_;
};

#endif //SEARCH_ALGORITHMS__STUDENT_H_
