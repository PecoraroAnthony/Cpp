////////////////////////////////////////////////////////
// Lesson 12.3 - lvalue references
///////////////////////////////////////////////////////

// src: learncpp.com

#include<iostream>
using namespace std;

int main(){
	int x{1};
	int& ref{x}; // references value of x (1)
	
	cout << x << ref << '\n'; // 11

	int y{2};
	ref=y;	     // assigns value of y (2) to ref
		     // does NOT change ref to reference y
	y=3;	     // because of this, this only effects y

	cout << x << ref << '\n'; //22

	x=4;	     // x and ref are bound so both change
	
	cout << x << ref << '\n'; // 44
}
