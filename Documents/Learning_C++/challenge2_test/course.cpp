#include "course.h"

Course::Course(int id, const std::string &name, unsigned char credits) : id(id), name(name), credits(credits) {}

int Course::get_id() const {
    return id;
}

unsigned char Course::get_credits() const {
    return credits;
}
