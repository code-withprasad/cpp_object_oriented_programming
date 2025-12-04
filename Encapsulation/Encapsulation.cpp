/*
===================================== ⭐ Encapsulation in C++ Detailed Notes ⭐==============================

Encapsulation is a core concept of Object-Oriented Programming (OOP).
It refers to:

👉 Wrapping data (variables) + functions (methods) inside a single unit (class)  
👉 Restricting direct access using **access modifiers** (private, protected, public)

This allows us to control *how* data is accessed or modified.

-----------------------------------------------------------------------------------------------------------

============================= 🔥 Why Do We Use Encapsulation? (Benefits) ===================================

✔ Protects data from direct modification  
✔ Prevents accidental data corruption  
✔ Allows validation before updating data  
✔ Hides implementation details (Data Hiding)  
✔ Makes code cleaner, safe, maintainable  
✔ Gives controlled access through getters & setters

-----------------------------------------------------------------------------------------------------------

============================== 🏦 Real-life Example: ATM Machine ===========================================

• You enter your PIN → this is a PUBLIC function  
• Internally ATM checks your account & balance → PRIVATE data  
• You never see the internal code or database → DATA HIDING  
• You only use allowed options (withdraw, check balance) → CONTROLLED ACCESS  

This is exactly how Encapsulation works in C++.

-----------------------------------------------------------------------------------------------------------

======================================= ⭐ Types of Access Specifiers ⭐ ====================================

🔹 public:    Accessible from anywhere  
🔹 private:   Accessible only inside the class  
🔹 protected: Accessible inside class & subclasses (used in inheritance)

Encapsulation mainly uses **private** + **public getter/setter**.

-----------------------------------------------------------------------------------------------------------

*/

#include <iostream>
using namespace std;

class Employee {
private:
    double emp_salary;           // Private → Encapsulated data
    string department;           // Extra private data

    // Private helper function (example of abstraction)
    void validateDepartment(string dept) {
        if (dept == "") {
            department = "Not Assigned";
        } else {
            department = dept;
        }
    }

public:
    string emp_Name;
    int emp_ID;

    // ============================ Constructor Overloading ================================
    
    // Default (No-Argument) Constructor
    Employee() {
        this->emp_Name = "Unknown";
        this->emp_ID = 0;
        this->emp_salary = 0;
        this->department = "Not Assigned";
    }

    // Parameterized Constructor
    Employee(string emp_Name, int emp_ID, double emp_salary, string dept) {
        this->emp_Name = emp_Name;
        this->emp_ID = emp_ID;
        this->emp_salary = emp_salary;
        validateDepartment(dept);  // Using private method
    }

    // Copy Constructor
    Employee(const Employee &e) {
        this->emp_Name = e.emp_Name;
        this->emp_ID = e.emp_ID;
        this->emp_salary = e.emp_salary;
        this->department = e.department;
    }


    // ================================== Setter Methods ==================================

    void setSalary(double emp_salary) {
        if (emp_salary > 0) {
            this->emp_salary = emp_salary;
        } else {
            cout << "❌ Invalid Salary!" << endl;
        }
    }

    void setDepartment(string dept) {
        validateDepartment(dept);
    }

    // ================================== Getter Methods ==================================

    double getSalary() {
        return this->emp_salary;
    }

    string getDepartment() {
        return this->department;
    }

    // =============================== Display Employee Details =============================

    void display() {
        cout << "\n=========== Employee Details ===========\n";
        cout << "Name       : " << emp_Name << endl;
        cout << "ID         : " << emp_ID << endl;
        cout << "Salary     : " << emp_salary << endl;
        cout << "Department : " << department << endl;
        cout << "========================================\n";
    }
};


// ==========================================================================================
//                                      MAIN FUNCTION
// ==========================================================================================

int main() {

    // Using parameterized constructor
    Employee e1("John", 101, 55000, "IT");
    e1.display();

    // Updating salary using setter
    e1.setSalary(60000);

    cout << "\nUpdated Salary: " << e1.getSalary() << endl;

    // Using default constructor
    Employee e2;
    e2.display();

    // Using copy constructor
    Employee e3 = e1;
    e3.display();

    return 0;
}

