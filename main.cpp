#include <iostream>
#include "Student.h"
#include "Teacher.h"

/**
 * edX DEV210.2x LAB 3
 *
 * Main solution
 * @return exit code.
 */
int main() {

    Student *student1 = new Student("John","Doe",33,"White Lane Avenue","Los Angeles",123456789);
    Teacher *teacher1 = new Teacher("Professor","Doe",55,"White Lane Avenue","Los Angeles",123456789);

    student1->outputAge();
    teacher1->outputAge();

    return 0;
}