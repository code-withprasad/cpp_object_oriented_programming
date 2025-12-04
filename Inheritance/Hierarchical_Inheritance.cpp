/*
=====================================================================
                     🔥 HIERARCHICAL INHERITANCE 🔥
=====================================================================

📌 Easy Understanding:
One parent class → Many child classes
Multiple classes inherit properties from a single parent.

📌 Real-Life Example:
Animal → Dog, Cat, Cow
Dog, Cat, Cow inherit sound() from Animal.

📌 Why Use:
✔ Code reuse for multiple child classes
✔ Logical hierarchical relationship
=====================================================================
*/

#include <iostream>
using namespace std;

// Parent class
class Animal {
public:
    void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Child class 1
class Dog : public Animal {
public:
    void bark() { cout << "Dog barks" << endl; }
};

// Child class 2
class Cat : public Animal {
public:
    void meow() { cout << "Cat meows" << endl; }
};

int main() {
    Dog d1;
    Cat c1;

    d1.sound(); // inherited
    d1.bark();
    
    c1.sound(); // inherited
    c1.meow();

    return 0;
}

/*
OUTPUT:
Animal makes a sound
Dog barks
Animal makes a sound
Cat meows
*/
