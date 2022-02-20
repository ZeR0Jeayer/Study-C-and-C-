#include <stdio.h>
#include <iostream>
#include <string>

//F6
int main(int argc, char** argv) {
    
    
    std::cout << "Hello,World!";

    int var = 10;
    float varFloat = 0.0f; //float é para numero com vírgula mas se usa o f no final para inidcar que é float
    double varDouble = 0.0; //a diferença de um float e um double é que o double tem mais precisão
    bool varBool = true;
    bool varBoolTwo = false;
    std::cout << var << "\n";

    char varChar[10] = "123456789"; //sempre coloca um valor a mais do que vai se usar
    char varCharTwo = 'c';

    std::string varString = "fsauhfbuasbfoiuuhuoih";

    if (var >= 0) {
        std::cout << "e maior que ou igual a zero";
    }   

    else {
        std::cout << "e negativo";
    }

    return 0;
}