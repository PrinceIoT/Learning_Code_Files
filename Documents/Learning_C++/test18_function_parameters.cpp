#include <iostream>

int square(int x){
    x = x * x;
    return x;
}

int main(){
    int a =9,b;
    b = square (a);
    std::cout << "a" << a <<","<< "b" << b << std::endl

}