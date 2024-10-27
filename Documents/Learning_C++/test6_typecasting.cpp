#include <iostream>
#include <cstdint>
int main(){
    float flt;
    int32_t sgn;
    uint32_t usgn;

    int fahrenheit = 100;
    int Celsius;
    Celsius = ((float)5/9.0)*(fahrenheit-32);

    flt = 34.5f;
    sgn = flt;
    usgn = sgn;

    std::cout<< "float value = "<<flt << std::endl;
    std::cout << "signed = " << sgn << std::endl;
    std::cout <<" unsigned = " << usgn << std::endl;
    std::cout<<std::endl<<std::endl;

    std::cout << "Fahreinheit = " << fahrenheit << std::endl;
    std::cout <<" Celsius = " << Celsius << std::endl;
    std::cout<<std::endl<<std::endl;

    float weight = 72.3;
    std::cout << "Float weight = " << weight << std::endl;
    std::cout <<" Integer weight = " << (int) weight << std::endl;
    std::cout << "Fractional part = " << (int)((weight - (int) weight) *10000) <<std::endl;
    std::cout<<std::endl<<std::endl;
    return (0);
}