#include <iostream>
#include <string>
#include <vector>

int main(){
    std::vector<int>primes;
    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(4);
    primes.push_back(5);
    primes.push_back(7);
    primes.push_back(54);

    std::cout<< "The vector has "<< primes.size() <<" elements."<<std::endl;
    std::cout<<std::endl<<std::endl;
    return (0);

}