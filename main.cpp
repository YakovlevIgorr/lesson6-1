#include <iostream>
#include "math_functions.h"
int main() {
    int a, b, c;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание,"
                 " 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> c;
    if(c == 1){
        std::cout << a << " прибавить " << b << " = " << addition(a,b);
    }else if(c == 2){
        std::cout << a << " минус " << b << " = " << subtraction(a, b);
    }else if(c == 3){
        std::cout << a << " умножить на " << b << " = " << multiplication(a, b);
    }else if(c == 4){
        std::cout << a << " разделить на " << b << " = " << division(a, b);
    }
    else if(c == 5){
        std::cout << a << " в степени " << b << " = " << exponentiation(a, b);
    }

    return 0;
}
