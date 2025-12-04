/*
=====================================================================
                       🔥 MULTILEVEL INHERITANCE 🔥
=====================================================================

📌 Easy Understanding:
Multilevel Inheritance means a class is derived from a derived class.
Grandparent → Parent → Child
Child class can access properties of both parent and grandparent.

📌 Technical Definition:
A derived class acts as a base class for another derived class.

📌 Real-Life Example:
Human → Student → EngineeringStudent
EngineeringStudent inherits properties of Student and Human.

📌 Why Use:
✔ Code reuse
✔ Hierarchical relationship
✔ Cleaner, modular code
=====================================================================
*/

#include <iostream>
using namespace std;

// Grandparent class
class Human {
public:
    string name;
};

// Parent class
class Student : public Human {
public:
    int roll;
};

// Child class
class EngineeringStudent : public Student {
public:
    string branch;

    void display() {
        cout << "Name  : " << name << endl; // inherited from Human
        cout << "Roll  : " << roll << endl; // inherited from Student
        cout << "Branch: " << branch << endl;
    }
};

int main() {
    EngineeringStudent e1;
    e1.name = "John";
    e1.roll = 101;
    e1.branch = "CSE";

    e1.display();
    return 0;
}

/*
OUTPUT:
Name  : John
Roll  : 101
Branch: CSE
*/
