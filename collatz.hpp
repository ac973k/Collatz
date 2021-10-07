#ifndef COLLATZ_HPP
#define COLLATZ_HPP

#include <iostream>
#include <fstream>

class Collatz
{
private:
    int currentIteration = 0;
    int countIteration = 0;

    long long number = 0;
    long long forNumber = 0;

    std::ofstream file;

public:
    Collatz(std::string man);
    Collatz(long long num);

    void getResult();
};

#endif // COLLATZ_HPP
