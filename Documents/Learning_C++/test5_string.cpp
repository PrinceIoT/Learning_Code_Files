#include <iostream>
#include <cstring>

int main(){
    const size_t LENGTH1 = 25;
    char array_str1[LENGTH1] = "Here I come ";
    char array_str2[] = "Just landed";

    std::string std_str1 = "Come home immediately ";
    std::string std_str2 = "Welcome to the party";

    strncat(array_str1, array_str2, LENGTH1);
    std::cout<< array_str1 << std::endl;
    std::cout<< std_str1 + std_str2 << std::endl;

    std::cout<<std::endl<<std::endl;
    return (0);
}