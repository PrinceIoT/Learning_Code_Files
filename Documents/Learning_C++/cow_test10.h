#pragma once
#ifndef COW_H
#define COW_H
#include <vector>
#include <string>

enum class cow_purpose {pet, hide, milk, meat};

class cow{
public:
    cow(std::string name_i, int age_i, cow_purpose purpose_i);
    std::string get_name() const;
    int get_age() const;
    cow_purpose get_purpose();
    void set_age(int new_age);
private:
    std::string name;
    int age;
    cow_purpose purpose;
};
#endif