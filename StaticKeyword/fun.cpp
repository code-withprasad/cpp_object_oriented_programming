/*
=====================================================================
                           🔥 STATIC IN C++ 🔥
=====================================================================

📌 Definition:
The `static` keyword in C++ can be used for:
1. Variables inside a class (class-level variables)
2. Member functions inside a class (class-level functions)
3. Local variables inside a function (retains value across calls)

- Static variables belong to the class, not to any object.
- Static functions can access only static members.
- Local static variables keep their value between function calls.

📌 Real-Life Analogy:
- Think of a company:  
  - Employee name → different for each employee (non-static)  
  - Company name → same for all employees (static)  
- Local static variable example: Counting number of times a function is called.

📌 Why Use:
✔ Share data between objects  
✔ Keep track of counts or state  
✔ Utility/helper functions at class-level
=====================================================================
*/

#include <iostream>
using namespace std;

// Example 1: Static local variable in a function
void fun() {
    static int x = 0; // Retains value between calls
    cout << "X: " << x << endl;
    x++;
}

// Example 2: Static class members
class Employee {
public:
    string name;
    static string company;   // Static variable shared among all objects
    static int employeeCount;

    Employee(string n) {
        name = n;
        employeeCount++;
    }

    static void showCompany() { // Static function
        cout << "Company: " << company << endl;
    }

    void showDetails() {
        cout << "Employee Name: " << name << endl;
        cout << "Company: " << company << endl;
    }
};

// Initialize static members
string Employee::company = "TechCorp";
int Employee::employeeCount = 0;

int main() {
    cout << "=== Function Static Example ===" << endl;
    fun(); // X = 0
    fun(); // X = 1
    fun(); // X = 2

    cout << "\n=== Class Static Example ===" << endl;
    Employee e1("John");
    Employee e2("Smith");

    e1.showDetails();
    e2.showDetails();

    // Access static function without object
    Employee::showCompany();

    cout << "Total Employees: " << Employee::employeeCount << endl;

    return 0;
}

/*
OUTPUT:

=== Function Static Example ===
X: 0
X: 1
X: 2


*/
