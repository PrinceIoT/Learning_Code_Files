#include <iostream>
//#define AGE_LENGTH 4
int main(){
    const size_t AGE_LENGTH = 4;
    int age [AGE_LENGTH];
    float temperature[] = {23.5, 17.4, 22.9, 22.2};

    age [0] = 20;
    age [1] = 21;
    age [2] = 22;
    age [3] = 23;
    std::cout<<"Age Length is = " << AGE_LENGTH<<std::endl;
    std::cout<<"My age is = "<<age[0]<<std::endl;
    std::cout<<"My age is = "<<age[1]<<std::endl;
    std::cout<<"My age is = "<<age[2]<<std::endl;
    std::cout<<"My age is = "<<age[3]<<std::endl;

    std::cout<<std::endl<<std::endl;
    std::cout<<"Temp 0 is = "<<temperature[0]<<std::endl;
    std::cout<<"Temp 1 is = "<<temperature[1]<<std::endl;
    std::cout<<"Temp 2 is = "<<temperature[2]<<std::endl;
    std::cout<<"Temp 3 is = "<<temperature[3]<<std::endl;

    std::cout<<std::endl<<std::endl;
    return(0);
}

