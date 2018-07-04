/**
 * @header Person.h
 *
 * @brief This is the header file of Person.
 *
 * @author jmrs83@gmail.com 2018
 *
 * */
#ifndef EDX_DEV210_2X_LAB3_PERSON_H

#include <iostream>

#define EDX_DEV210_2X_LAB3_PERSON_H

using namespace std;

class Person {

 private:
  std::string _firstName{};
  std::string _lastName{};
  int _age{};
  std::string _address{};
  std::string _city{};

 protected:
  unsigned int _phoneNumber{};

 public:
  Person();

  Person(const std::string &firstName, const std::string &lastName, int age, const std::string &address, const std::string &city,
         unsigned int phoneNumber);

  virtual void outputIdentity() = 0;
  virtual void outputAge() const;

};

#endif //EDX_DEV210_2X_LAB3_PERSON_H
