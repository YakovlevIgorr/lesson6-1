//
// Created by Macbook on 27.08.2023.
//

#include "math_functions.h"

int addition(int a, int b){
    return a + b;
}

int subtraction(int a, int b){
    return a - b;
}

int multiplication(int a, int b){
    return a * b;
}

int division(int a, int b){
    return a / b;
}

int exponentiation(int a, int b){
    int w = a;
    for(int k = 1; k < b; k++){
        a *= w;
    }
    return a;
}
