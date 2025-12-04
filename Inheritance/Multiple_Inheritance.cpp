/*
=====================================================================
                       🔥 MULTIPLE INHERITANCE 🔥
=====================================================================

📌 Easy Understanding:
A child class inherits from **two or more parent classes**.

📌 Real-Life Example:
SmartPhone → inherits features of Phone and Camera
Phone: call() function
Camera: click() function

📌 Why Use:
✔ Combine features of multiple classes into one
✔ Code reuse from multiple sources
=====================================================================
*/

#include <iostream>
using namespace std;

// Parent 1
class Phone {
public:
    void call() { cout << "Calling..." << endl; }
};

// Parent 2
class Camera {
public:
    void click() { cout << "Picture clicked" << endl; }
};

// Child class
class SmartPhone : public Phone, public Camera {
public:
    void display() {
        cout << "Smartphone features:" << endl;
    }
};

int main() {
    SmartPhone s1;
    s1.display();
    s1.call();   // inherited from Phone
    s1.click();  // inherited from Camera

    return 0;
}

/*
OUTPUT:
Smartphone features:
Calling...
Picture clicked
*/
