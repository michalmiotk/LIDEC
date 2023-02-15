#include "CLILoader.hpp"

#include <iostream>
#include <regex>

template <typename T>
void CLILoader<T>::showExampleInput(){
    std::cout<<"please give me input like "<<std::endl;
    std::cout<<"action param1 param2 param3 param4"<<std::endl;
    std::cout<<"MakeSoup water potato onion oil"<<std::endl;
}

template <typename T>
std::string CLILoader<T>::capture(){
    std::string userProvidedStr{};
    std::cin>>userProvidedStr;
    return userProvidedStr;
}

