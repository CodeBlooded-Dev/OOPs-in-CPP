#include <bits/stdc++.h>
using namespace std;

//abstract class
class AbstractEmployee {
    virtual void askForPromotion() = 0; // Virtual function
};
/*created a class named employee it has attributes
and behaviour of employee*/
class Employee: AbstractEmployee {
//Access modifiers (public, private, protected)
private:
    string Name;
    string Company;
    int Age;
public:
    void setName(string name) { // setter
        if (name.length() >= 4)
            Name = name;
    }
    string getName() { //getter
        return Name;
    }

    void setCompany(string company) {
        Company = company;
    }
    string getComapany() {
        return Company;
    }

    void setAge(int age) {
        Age = age;
    }
    int getAge() {
        return Age;
    }

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

    void askForPromotion() { // virtual function is overriden
        if (Age >= 25)
            cout << "You got Promoted" << endl;
        else
            cout << "Sorry, No Promotion" << endl;
    }
};
int main() {
    // created instance(object) empolyee1 for Employeee class
    // constructor invoked and parameter passed while creating object
    Employee employee1 = Employee("Vishal", "CodeWars", 20);
    // // employee1.introduceYourself();//calling class method

    Employee employee2 = Employee("Gilfoyle", "Pied Piper", 25);
    // employee2.introduceYourself();

    employee1.askForPromotion();
    employee2.askForPromotion();

    return 0;
}