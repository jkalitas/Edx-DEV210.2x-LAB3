/**
 * edX DEV210.2x LAB 3
 *
 * Student class from Person's basic class
 */

#include "Student.h"

Student::Student() {}

Student::Student(const std::string &firstName, const std::string &lastName, int age, const std::string &address, const std::string &city,
                 unsigned int phoneNumber) : Person(firstName, lastName, age, address, city, phoneNumber) {}


void Student::outputIdentity(){
  std::cout << "I'm a Student" << std::endl;
}

void Student::outputAge() {
  outputIdentity();
  Person::outputAge();
}

Student::~Student() {
  std::cout << "Student Destructor" << std::endl;
}