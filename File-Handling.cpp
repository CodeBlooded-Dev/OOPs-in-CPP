// #include<iostream>
// #include <fstream>
#include <bits/stdc++.h>
using namespace std;

// In C++, files are mainly dealt by using three classes
// fstream, ifstream, ofstream available in fstream headerfile.

// 1) ofstream - Stream class to write on files.
// 2) ifstream - Stream class to read files.
// 3) fstream - Stream class to read and write on files.

// Problem Statement: Read and Write to a File.
// Input: File Handlig in CPP -1.
// Output: File Handling in CPP.

int main() {

	ofstream fout; // object fout created of class ofstream.

	string line;

	fout.open("Text-File.txt"); // open filer

// Write on a file
	while (fout) {

		getline(cin, line);

		if (line == "-1")
			break;
		fout << line << endl;
	}

	fout.close();

	ifstream fin; // object fin created of class ofstream.

	fin.open("Text-line.txt");

	// Read from a file
	while (fin) {

		getline(fin, line);
		cout << line << endl;
	}

	fin.close();

	return 0;
}