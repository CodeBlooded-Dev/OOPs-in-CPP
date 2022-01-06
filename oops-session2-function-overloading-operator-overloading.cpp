#include<bits/stdc++.h>
using namespace std;

class Calc
{
public:
	int a;
	Calc(int A) {
		a = A;
	}
// Method / Function Overloading

	void sum(int a, int b) {
		int s = a + b;
		cout << s << endl;
	}

	void sum(int a, long int b, long int c) {
		long int s = a + b + c;
		cout << s << endl;
	}
// Operator Overloading
	void operator + (const Calc &c1) {
		int add = a + c1.a;
		cout << add << endl;
	}

};

int main()
{
	Calc cal(10);
	Calc c1(20);
	cal + c1;
	cal.sum(20, 20);
	cal.sum(20, 20, 30);
	return 0;
}