# Collatz
The Collatz conjecture is a conjecture in mathematics that concerns sequences defined as follows: start with any positive integer n. Then each term is obtained from the previous term as follows: if the previous term is even, the next term is one half of the previous term. If the previous term is odd, the next term is 3 times the previous term plus 1. The conjecture is that no matter what value of n, the sequence will always reach 1.


How to use:
Run ./collatz num, where num - number. Example: ./collatz 3

Iteration data and final result saved to csv file with named number. Example: 3.csv
Example file for number 3:

| Number       | Current Iteration | Count Iterations |
| ------------ |:-----------------:| ----------------:|
| 3            | 0                 |                  |
| 10           | 1                 |                  |
| 5            | 2                 |                  |
| 16           | 3                 |                  |
| 8            | 4                 |                  |
| 4            | 5                 |                  |
| 2            | 6                 |                  |
| 1            | 7                 |                  |
| 3            |                   | 7                |
