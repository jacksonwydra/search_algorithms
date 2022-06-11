#ifndef SEARCH_ALGORITHMS__PERSON_H_
#define SEARCH_ALGORITHMS__PERSON_H_

#include <string>

class Person {
 public:
  Person();
  Person(std::string first_name, std::string last_name, int age);
  ~Person();

  std::string FullName();

 private:
  std::string first_name_;
  std::string last_name_;
  int age_;
};

#endif //SEARCH_ALGORITHMS__PERSON_H_
