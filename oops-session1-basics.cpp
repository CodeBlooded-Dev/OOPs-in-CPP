#include <bits/stdc++.h>
using namespace std;

/*created a class named employee it has attributes
and behaviour of employee*/
class Employee {
//Access modifiers (public, private, protected)
public:
    string Name;
    string Company;
    int Age;
    //Constructor, it construct the object of class
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }

    void introduceYourself() {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }
};
int main() {
    // created instance(object) empolyee1 for Employeee class
    // constructor invoked and parameter passed while creating object
    Employee employee1 = Employee("Vishal", "CodeWars", 20);
    employee1.introduceYourself();//calling class method

    Employee employee2 = Employee("Gilfoyle", "Pied Piper", 22);
    employee2.introduceYourself();

    return 0;
}