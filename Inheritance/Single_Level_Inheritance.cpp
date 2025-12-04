/*
=====================================================================
                        🔥 INHERITANCE IN C++ 🔥
=====================================================================

📌 Easy Understanding:
Inheritance means a child gets features and behaviour from its parent.
Example:
    Grandfather → Father → Son
    Son can use:
        → His own features
        → Father's features
        → Grandfather's features

📌 Technical Definition:
Inheritance allows one class (child/derived class) to acquire the 
properties and behaviour (data + functions) of another class 
(parent/base class).

📌 Why We Use Inheritance?
✔ Avoid code duplication  
✔ Reuse parent class logic  
✔ Make programs cleaner  
✔ Extend features without modifying old code  
✔ Build hierarchical structures (Base → Derived)

📌 Real-Life Example:
A Father has:
    - House
    - Car
    - Savings
Son inherits all these without rewriting them → This is inheritance.

=====================================================================
                     📌 TYPES OF INHERITANCE IN C++
=====================================================================
1. Single       → One parent → One child  
2. Multilevel   → Grandparent → Parent → Child  
3. Multiple     → Two parents → One child  
4. Hierarchical → One parent → Many children  
5. Hybrid       → Combination of above types

=====================================================================
 📌 HOW ACCESS SPECIFIERS AFFECT INHERITANCE (Important for interviews)
=====================================================================
 Parent Member       Public Inh.      Protected Inh.     Private Inh.
----------------------------------------------------------------------
   public            public           protected          private
   protected         protected        protected          private
   private           ❌ Not inherited  ❌ Not inherited   ❌ Not inherited

=====================================================================
                🔥 SINGLE LEVEL INHERITANCE (Example) 🔥
=====================================================================
 Parent Class → Vehicle
 Child Class  → Car
 Car inherits:
    - wheels (variable)
    - start() function
=====================================================================
*/

#include <iostream>
using namespace std;

// ======================== Parent Class ===========================
class Vehicle {
public:
    int wheels;

    Vehicle() {
        wheels = 4;  // default value
    }

    void start() {
        cout << "Vehicle is starting..." << endl;
    }
};

// ======================== Child Class ============================
class Car : public Vehicle { 
public:
    string brand;
    string color;
    double price;

    // Constructor
    Car(string brand, string color, double price) {
        this->brand = brand;
        this->color = color;
        this->price = price;
    }

    void display() {
        cout << "Brand  : " << brand << endl;
        cout << "Color  : " << color << endl;
        cout << "Price  : " << price << endl;

        // Inherited from Vehicle class
        cout << "Wheels : " << wheels << endl;
        start(); // calling inherited function
    }
};

// =========================== Main ================================
int main() {
    Car c("BMW", "Black", 8000000.00);
    c.display();

    return 0;
}

/*
=====================================================================
💡 OUTPUT:
Brand  : BMW
Color  : Black
Price  : 8000000
Wheels : 4
Vehicle is starting...
=====================================================================
*/
