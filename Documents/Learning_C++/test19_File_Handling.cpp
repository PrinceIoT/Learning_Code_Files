#include <iostream>
#include <fstream>
#include <string>

int main(){
    std:: ifstream inFile;
    std::string str;
    int number;
    char letter;

    inFile.open("text.txt");
    if(inFile.fail()){
        std::cout<<std::endl<<"File not found" <<std::endl;
    }
    else{
        while(!inFile.eof()){
            getline(inFile,str);
            //std::cout<<str<<std::endl;
            std::cout<<str<<",";
            getline(inFile,str);
            number=stoi(str);
            std::cout<<number<<",";
            getline(inFile,str);
            letter = str[0];
            std::cout << letter << std::endl;

        }
        inFile.close();
    }
    std::cout<<std::endl<<std::endl;
    return(0);
}