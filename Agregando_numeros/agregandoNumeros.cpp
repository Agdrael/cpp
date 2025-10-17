#include <iostream>
#include <functional>

auto main()->int{
    std::cout<< std::plus<int>{}(1,1.23)<< '\n'; //Fuerza que sean enteros y devuelve la suma entera, no incluye el .23
    std::cout << std::plus<>{}(1,1.23)<<"\n"; //Averigua el tipo de datos y devuelve 2.23
}