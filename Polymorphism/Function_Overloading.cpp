/*
=====================================================================
               🔹 FUNCTION OVERLOADING (COMPILE-TIME) 🔹
=====================================================================

📌 Easy Understanding:
Multiple functions with the same name but different parameters.

📌 Real-Life Example:
calculate(int a, int b)
calculate(double a, double b)
Both are "calculate" but behave differently.

*/

#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;
    cout << "Sum of int: " << calc.add(5, 10) << endl;
    cout << "Sum of double: " << calc.add(5.5, 2.3) << endl;

    return 0;
}

/*
OUTPUT:
Sum of int: 15
Sum of double: 7.8
*/
