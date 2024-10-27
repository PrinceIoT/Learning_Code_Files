#include <iostream>
#include <cstdint>

int main (){
    float age[] = {23.9, 65.6, 84.9, 84.8, 87.8, 20.9};
    float age_sum = age[0]+age[1]+age[2]+age[3]+age[4]+age[5];
    float age_average = age_sum/6.0;

    std::cout<< "age sum is = " <<age_average<< std::endl;
    std::cout<<std::endl<<std::endl;
    return(0);
}