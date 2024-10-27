#include <iostream>
#include <string>
#include <cstdint>

#define CAPACITY 5000
#define DEBUG
int main(){
    int32_t large = CAPACITY;
    int8_t small = 32;
    large +=small;
    std::cout<<"Large integer value is: " <<large<<std::endl;

#ifdef DEBUG
    std::cout<<"About to perform addition operation"<<std::endl;
#endif

    std::cout<<std::endl<<std::endl;
    return(0);
}