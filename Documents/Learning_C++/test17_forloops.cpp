#include <iostream>
#include <vector>

int main(){
    std::vector<int>numbers = {23,45,67,45,23,78,45,34,123,78,89};
    float average;

    average = 0.0f;
    for(int i = 0; i<numbers.size(); i++)
        average +=numbers[i];
    average /=numbers.size();
    std::cout<<"Average: "<<average<<std::endl;

    average = 0.0f;
    for(auto x: numbers)
        average +=x;
    average /=numbers.size();
    std::cout<<"Average: "<<average<<std::endl;
    

    std:: cout<<std::endl<<std::endl;
    return (0);
}