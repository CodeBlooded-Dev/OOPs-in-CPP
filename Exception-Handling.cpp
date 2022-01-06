#include<bits/stdc++.h>
using namespace std;

int main() {
	int a = -1;

	cout << "Before try block" << endl;

	try {
		cout << "Inside try block" << endl;
		if (a < 0)
			throw a;
	}
	catch (int a) {
		cout << "Inside catch block" << endl;
	}

	return 0;
}