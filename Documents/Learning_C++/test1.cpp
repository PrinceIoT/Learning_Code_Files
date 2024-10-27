#include <iostream>
#include <string>

int main(){

    std::string str;
    std::cout<< "Hi There, My name is: " <<std::flush;
    std::cin >> str;
    std::cout << "Nice to meet you" <<str<< "!" <<std::endl;

    std::cout<< std::endl << std::endl;
    return (0);
}