/*
=====================================================================
                        🔥 VIRTUAL FUNCTIONS IN C++ 🔥
=====================================================================

📌 Definition:
A virtual function is a member function in a base class
that you **expect to override in derived classes**.  
It allows **runtime polymorphism**, meaning the function
called is determined at runtime based on the object type.

📌 Key Points:
1. Declared with the keyword 'virtual' in the base class.
2. Enables **method overriding** in derived classes.
3. When called via a base class pointer/reference, the **derived version** executes.
4. Without 'virtual', the base class function is called even for derived objects.

📌 Real-life Analogy:
Base class: Animal → function: sound()  
Derived class: Dog → sound() prints "Bark"  
Derived class: Cat → sound() prints "Meow"  

Calling sound() through an Animal pointer calls the actual
derived class version.
=====================================================================
*/

#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void sound() override {  // Override base function
        cout << "Dog barks" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void sound() override {  // Override base function
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* a1;  // Base class pointer

    Dog d;
    Cat c;

    a1 = &d;
    a1->sound();  // Calls Dog's sound() because function is virtual

    a1 = &c;
    a1->sound();  // Calls Cat's sound() because function is virtual

    return 0;
}

/*
OUTPUT:
Dog barks
Cat meows
*/
