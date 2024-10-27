#ifndef GRADE_H
#define GRADE_H

class Grade {
public:
    Grade(int student_id, int course_id, char grade);
    int get_student_id() const;
    int get_course_id() const;
    char get_grade() const;

private:
    int student_id;
    int course_id;
    char grade;
};

#endif
