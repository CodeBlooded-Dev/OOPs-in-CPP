#include <bits/stdc++.h>
using namespace std;

//abstract class
class AbstractEmployee {
    virtual void askForPromotion() = 0; // Pure Virtual function
};
/*created a class named employee it has attributes
and behaviour of employee*/
class Employee: AbstractEmployee {
//Access modifiers (public, private, protected)
private:
    string Company;
    int Age;
//Protected specifier is same as private.
//But it give access to child class to access its members.
protected:
    string Name;
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
            cout << Name << "  " << "got Promoted" << endl;
        else
            cout << "Sorry, No Promotion" << endl;
    }

    virtual void work() {
        cout << Name << " is checking email, task backlog, performing tasks" << endl;
    }
};
//class Developer is inherited from class Enployee and has access to that class.
class Developer: public Employee {
public:
    string FavProgrammingLanguage;

    Developer(string name, string company, int age, string favProgrammingLanguage) : Employee(name, company, age) {
        FavProgrammingLanguage = favProgrammingLanguage;
    }

    void fixBugs() {
        cout << Name << " " << "fixed Bugs" << " " << "using" << " " << FavProgrammingLanguage << endl;
    }
    void work() {
        cout << Name << " coding in " << FavProgrammingLanguage << endl;
    }

};

class Teacher: public Employee {
public:
    string Subject;
    void prepareLesson() {
        cout << Name << " " << "Preparing" << Subject << "Lesson" << endl;
    }

    Teacher(string name, string company, int age, string subject)
        : Employee(name, company, age)
    {
        Subject = subject;
    }

    void work() {
        cout << Name << " teaching " << Subject << endl;
    }
};
int main() {
    // The most common use of polymorphism is when a
    // Parent class reference is use to refer child class object

    Developer Dev =  Developer("Vishal", "ABC", 20, "C++");
    Teacher teach = Teacher("Gilfoyle", "System Security", 30, "Machine Learning");

    Employee* e1 = &Dev;
    Employee* e2 = &teach;

    e1->work();
    e2->work();


    return 0;
}