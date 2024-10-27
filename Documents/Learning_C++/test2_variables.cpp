#include <iostream>
#include <string>

int a,b=1;

int main(){
    bool my_flag;
    a=4;
    my_flag = false;
    std::cout<<"a = "<< a <<std::endl;
    std::cout<<"b= "<< b << std::endl;
    std::cout<<"flag= "<< my_flag <<std::endl;

    my_flag = true;
    std::cout<<"a + b = "<<a + b<<std::endl;
    std::cout<<"a-b = "<<a-b<<std::endl;
    std::cout<<"flag = "<<my_flag<<std::endl;

    unsigned int positive;
    positive = b-a;
    std::cout<<"unsigned positive: "<<positive<<std::endl;

    std::cout<<std::endl<<std::endl;
    return(0);
}