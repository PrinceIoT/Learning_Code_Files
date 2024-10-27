#include <iostream>
#include <string>
#include <vector>
#include "cow_test10.h"

int main(){
    std::vector<cow>cattle;
    cattle.pushback(cow("Dishan",1, cow_purpose::meat));
    cattle.pushback(cow("Ciro",5, cow_purpose::milk));
    cattle.pushback(cow("Kiro",5, cow_purpose::hide));
    cattle.pushback(cow("Siro",5, cow_purpose::meat));
    cattle.pushback(cow("Jiro",5, cow_purpose::milk));

    std::cout<<"The first cow"<<cattle.begin()->get_name()<<std::endl;
    std::cout<<"At the index"<<cattle[1].get_name()<<std::endl;
    std::cout<<"Next to last one"<<prev(cattle.end(),2)->get_name()<<std::endl;
    std::cout<<"Last one is cow"<<(cattle.end()-1)->get_name()<<std::endl;

    std::cout<<std::endl<<std::endl;
    

}