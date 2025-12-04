/*
=====================================================================
                           🔥 ABSTRACTION IN C++ 🔥
=====================================================================

📌 Definition:
Abstraction is the concept of **hiding implementation details**
and showing only the **essential features** to the user.

- Focus on **what an object does**, not **how it does it**.
- Achieved using:
    1. **Abstract classes**
    2. **Pure virtual functions**

📌 Real-life Analogy:
Think of a **TV Remote**:
- You know what buttons do (volume up, power on/off)
- You don’t know the internal electronics
- You just use it to control the TV → Abstraction

📌 Why Use Abstraction:
✔ Hide complex details from users  
✔ Reduce code complexity  
✔ Provide interface to work with objects without knowing implementation  

📌 Key Points:
- Abstract class: Contains at least **one pure virtual function**
- Pure virtual function: Declared with `= 0`
- Cannot create objects of abstract class directly
- Derived class **must implement** pure virtual function
=====================================================================
*/

#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void area() = 0;

    void info() {
        cout << "This is a shape" << endl;
    }
};

// Derived class
class Circle : public Shape {
    double radius;
public:
    Circle(double r) { 
        radius = r; 
    }

    // Implement pure virtual function
    void area() override {
        cout << "Circle area: " << 3.14 * radius * radius << endl;
    }
};

// Another derived class
class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) { length = l; width = w; }

    void area() override {
        cout << "Rectangle area: " << length * width << endl;
    }
};

int main() {
    // Shape s; // ❌ Error: Cannot create object of abstract class

    Circle c(5);
    Rectangle r(4, 6);

    Shape* s1 = &c;
    Shape* s2 = &r;

    s1->area();  // Calls Circle's area()
    s2->area();  // Calls Rectangle's area()

    return 0;
}

/*
OUTPUT:
Circle area: 78.5
Rectangle area: 24
*/
