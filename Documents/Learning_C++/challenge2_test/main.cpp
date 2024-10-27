#include <iostream>
#include "student.h"
#include "course.h"
#include "grade.h"

int main() {
    Student student1(1, "John Doe");
    Course course1(101, "Math", 3);
    Grade grade1(1, 101, 'A');

    std::cout << "Student ID: " << student1.get_id() << ", Name: " << student1.get_name() << std::endl;
    std::cout << "Course ID: " << course1.get_id() << ", Credits: " << (int)course1.get_credits() << std::endl;
    std::cout << "Grade: " << grade1.get_grade() << std::endl;

    return 0;
}
