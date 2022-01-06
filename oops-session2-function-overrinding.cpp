#include<bits/stdc++.h>
using namespace std;

// Method Overridding

class Bike {
public:
	int speedlimit = 200;
	virtual void run() {
		cout << "running" << endl;
	}
};

class honda: public Bike {
public:
	int speedlimit = 80;
	void run() {
		cout << "running at 40kmph" << endl;
	}
};

class apache: public Bike {
public:
	void run() {
		cout << "running at 80kmph" << endl;
	}
};

int main() {

	honda h;
	Bike &b1 = h;// reference variable of base class
	// refers to the object of derived class
	b1.run(); // calling overridden method of derived class
	cout << b1.speedlimit << endl; // data members can't be overridden

	apache a;
	Bike &b2 = a;
	b2.run();

	// Another way to access overriden method

	// Bike *b1;
	// b1 = new apache();
	// b1->run();
}