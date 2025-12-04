/*
=====================================================================
                         🔥 HYBRID INHERITANCE 🔥
=====================================================================

📌 Easy Understanding:
Hybrid = Combination of multiple + multilevel + hierarchical inheritance.

📌 Real-Life Example:
Grandparent → Parent → Child
Parent also has sibling class sharing some features.

📌 Why Use:
✔ Used in complex real-world scenarios
✔ Combines advantages of multiple inheritance types
=====================================================================
*/

#include <iostream>
using namespace std;

// Grandparent
class Vehicle {
public:
    void start() { cout << "Vehicle started" << endl; }
};

// Parent 1
class Car : public Vehicle {
public:
    void displayCar() { cout << "This is a Car" << endl; }
};

// Parent 2
class Bike : public Vehicle {
public:
    void displayBike() { cout << "This is a Bike" << endl; }
};

// Child class inherits from both Car and Bike (multiple + multilevel)
class HybridVehicle : public Car, public Bike {
public:
    void show() { cout << "Hybrid vehicle features" << endl; }
};

int main() {
    HybridVehicle hv;
    hv.show();
    hv.displayCar();
    hv.displayBike();
    // Note: start() is ambiguous due to multiple inheritance from Vehicle
    // hv.start(); // would cause ambiguity
    return 0;
}

/*
OUTPUT:
Hybrid vehicle features
This is a Car
This is a Bike
*/
