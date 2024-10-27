#include "student.h"

Student::Student(int id, const std::string &name) : id(id), name(name) {}

int Student::get_id() const {
    return id;
}

std::string Student::get_name() const {
    return name;
}
