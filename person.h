#include <string>

class Person {
 private:
  std::string first_name_;
  std::string last_name_;
  int age_;

 public:
  Person();
  Person(std::string first_name, std::string last_name, int age);
  ~Person();

  std::string GetName();
};
