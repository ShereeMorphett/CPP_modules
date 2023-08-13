#include "libcpp/libcpp.hpp" //quotes are internal <> are external includes
#include <iostream>


void libcpp::hello_world()
{
    std::cout << "Hello, World!\n";
    
}


int libcpp::add(int a, int b)
{
    return a + b;
}