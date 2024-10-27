#include <iostream>
#include "records.h"

int main(){
    Student my_student(1, "Dishan");
    Course my_course(7, "Control 101", 8);
    Grade my_grade(1, 7 , 'B');

    std::cout<<"Student name is "<< my_student.get_name()<<std::endl;
    std::cout<<"Course name is "<< my_course.get_name()<<std::endl;
    std::cout<<"Course credits is " <<my_course.get_credits()<<std::endl;
    std::cout<<"Grade is "<< my_grade.get_grade()<<std::endl;

    std::cout<<std::endl<<std::endl;
    return (0);
}
