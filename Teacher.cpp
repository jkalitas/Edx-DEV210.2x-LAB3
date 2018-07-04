//
// Created by Luis Borges on 7/4/18.
//

#include "Teacher.h"

Teacher::Teacher() {}

Teacher::Teacher(const std::string &firstName, const std::string &lastName, int age, const std::string &address, const std::string &city,
                 unsigned int phoneNumber) : Person(firstName, lastName, age, address, city, phoneNumber) {}

void Teacher::outputIdentity(){
  std::cout << "I'm a Teacher" << std::endl;
}

void Teacher::outputAge(){
  outputIdentity();
  Person::outputAge();
}

Teacher::~Teacher() {
  std::cout << "Teacher Destructor" << std::endl;
}

