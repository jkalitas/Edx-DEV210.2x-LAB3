#ifndef EDX_DEV210_2X_LAB3_STUDENT_H
#include "Person.h"
#define EDX_DEV210_2X_LAB3_STUDENT_H

/**
 * edX DEV210.2x LAB 3
 *
 * Student class from Person's basic class
 */
class Student : public Person {
 public:
  /**
   * Generic constructor
   */
  Student();
  /**
   * Complete constructor
   */
  Student(const std::string &firstName, const std::string &lastName, int age, const std::string &address, const std::string &city,
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
  virtual ~Student();
};

#endif //EDX_DEV210_2X_LAB3_STUDENT_H
