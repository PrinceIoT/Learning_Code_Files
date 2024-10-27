#include <iostream>
#include <string>

int main(){
    int a = 37;
    int *ptr;
    ptr = &a;

    std::cout << "a content: " << a << std::endl;
    std::cout << "a content: " << ptr << std::endl;
    std::cout << "a content: " << &a << std::endl;
    std::cout << "a content: " << *ptr << std::endl;
    

    std::cout<<std::endl<<std::endl;
    return 0;
}