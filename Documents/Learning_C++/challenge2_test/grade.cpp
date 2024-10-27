#include "grade.h"

Grade::Grade(int student_id, int course_id, char grade) : student_id(student_id), course_id(course_id), grade(grade) {}

int Grade::get_student_id() const {
    return student_id;
}

int Grade::get_course_id() const {
    return course_id;
}

char Grade::get_grade() const {
    return grade;
}
