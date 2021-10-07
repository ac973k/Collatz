#include <iostream>
#include <sstream>
#include <string.h>

#include "collatz.hpp"

int main(int argc, char **argv)
{
    if (argc <= 1) {
        std::cout << "Error! Use collatz --help" << std::endl;
    }
    else if (argc == 2) {

        if (strcmp(argv[1], "--help") == 0) {
            Collatz collatz("--help");
        }
        else {
            std::stringstream convert(argv[1]); // создаем переменную stringstream с именем convert, инициализируя её значением argv[1]

            int myint;
            if (!(convert >> myint)) {
                // выполняем конвертацию
                myint = 0; // если конвертация терпит неудачу, то присваиваем myint значение по умолчанию
            }

            Collatz collatz(myint);
            collatz.getResult();
        }
    }

    return 0;
}
