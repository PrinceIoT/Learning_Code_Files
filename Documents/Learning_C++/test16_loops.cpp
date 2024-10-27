#include <iostream>
#include <vector>
#include <iterator>
int main(){
    std::vector<int> numbers = {12,45,76,34,64,29};
    /*std::vector<int>::iterator ptr = numbers.begin();*/
    auto ptr = numbers.begin();

    while (ptr != numbers.end()){
        std::cout << *ptr <<"";
        ptr = next(ptr, 1);

    }
    std::cout<<std::endl;

    int i = 0;
    do
    {
        /* code */
        std::cout<<numbers[i] <<";";
        i++;
    } while (/* condition */ i < numbers.size());
    std::cout<<std::endl;
    std::cout<<std::endl<<std::endl;
    return (0);
}