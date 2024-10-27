#include <iostream>
#include <string>

enum cow_purpose {pet, hide, milk, meat};

struct cow{
    std::string name;
    int age;
    cow_purpose purpose;
};

int main(){
    cow my_cow;
    my_cow.age = 9;
    my_cow.name = "Alan";
    my_cow.purpose = cow_purpose::meat;

    std::cout<< my_cow.name << " Is a type " << (int) my_cow.purpose << "cow" << std::endl;
    std::cout<< my_cow.name << " Is a type " << (int) my_cow.age << " age" << std::endl;

    std::cout<<std::endl<<std::endl;
    return (0);

}