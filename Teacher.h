//
// Created by Luis Borges on 7/4/18.
//

#ifndef EDX_DEV210_2X_LAB3_TEACHER_H
#include "Person.h"
#define EDX_DEV210_2X_LAB3_TEACHER_H

class Teacher : public Person{
 public:
  /**
   * Generic constructor
   */
  Teacher();
  /**
   * Complete constructor
   */
  Teacher(const std::string &firstName, const std::string &lastName, int age, const std::string &address, const std::string &city,
          unsigned int phoneNumber);
  /**
   * Outputs object identity
   */
  virtual void outputIdentity();
  /**
   * Outputs student age
   */
  virtual void outputAge();
  /**
   * Virtual destructor
   */
  virtual ~Teacher();
};

#endif //EDX_DEV210_2X_LAB3_TEACHER_H
