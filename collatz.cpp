#include "collatz.hpp"

#include <string>

Collatz::Collatz(std::string man) {
    if (man == "--help") {
        std::cout << "Use collatz 1253, where 1253 - number! (Long Long, from -9 223 372 036 854 775 808 to +9 223 372 036 854 775 807)" << std::endl;
    }
    else {
        std::cout << "Error! Use collatz --help" << std::endl;
    }
}

Collatz::Collatz(long long num) {
    file.open(std::to_string(num) + ".csv", std::ofstream::app);

    number = num;
}

void Collatz::getResult() {
    file << "Число,Текущая Итерация,Всего Итераций" << "\n";

    forNumber = number;

    file << number << "," << currentIteration << "\n";

    while (number != 1) {
        if (number % 2 == 0) {
            number = number / 2;
            currentIteration++;
            countIteration = currentIteration;

            file << number << "," << currentIteration << "\n";
        }
        else if (number % 2 != 0) {
            number = (number * 3) + 1;
            currentIteration++;
            countIteration = currentIteration;

            file << number << "," << currentIteration << "\n";
        }
    }

    file << forNumber << "," << " " << "," << countIteration << "\n";
}
