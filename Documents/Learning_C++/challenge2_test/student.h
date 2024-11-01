#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
public:
    Student(int id, const std::string &name);
    int get_id() const;
    std::string get_name() const;

private:
    int id;
    std::string name;
};

#endif
