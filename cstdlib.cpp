#include <iostream>
#include <cstdlib>//常用数学函数库
int main()
{
    int a = std::abs(-1);//绝对值
    std::cout << a<<std::endl;

    std::div_t b = std::div(103,5);//除法
    std::cout << "商是：" << b.quot << "\t余数是：" << b.rem << std::endl;

    double  c = std::pow(5, 2);//次方
    std::cout << c<< std::endl;

    double d = std::sin(3.14);//正弦
    std::cout << d << std::endl;


}

