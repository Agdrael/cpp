#include <iostream>
#include <vector>
#include "../include/triangulo.h"

void generar_triangulo()
{
    std::vector<auto>data{1};
    for (const auto number: data){
        std::cout<<number << ' ';
    }
    std::cout << '\n';
}