/*
=====================================================================
             🔹 METHOD OVERRIDING (RUN-TIME POLYMORPHISM) 🔹
=====================================================================

📌 Easy Understanding:
A child class redefines a parent class function with the same name.

📌 Real-Life Example:
Parent: Animal → sound()
Child: Dog → sound()
Child's function replaces parent’s function at runtime.

*/

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() { // virtual allows runtime polymorphism
        cout << "Animal makes sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* a;
    Dog d;
    a = &d;
    a->sound(); // calls Dog's sound() → runtime polymorphism
    return 0;
}

/*
OUTPUT:
Dog barks
*/
