#ifndef COURSE_H
#define COURSE_H

#include <string>

class Course {
public:
    Course(int id, const std::string &name, unsigned char credits);
    int get_id() const;
    unsigned char get_credits() const;

private:
    int id;
    std::string name;
    unsigned char credits;
};

#endif
