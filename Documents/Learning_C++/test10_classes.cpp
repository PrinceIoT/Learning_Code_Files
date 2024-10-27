#include <iostream>
#include <string>
#include "cow_test10.h"

int main(){
    cow my_cow("Dishan", 7, cow_purpose::pet);

    std::cout<< my_cow.get_name()<< " Is a type " << (int) my_cow.get_purpose() << " cow" << std::endl;
    std::cout<< my_cow.get_name() << " Is a type " << (int) my_cow.get_age() << " age" << std::endl;

    std::cout<<std::endl<<std::endl;
    return (0);

}



