////////////////////////////////////////////////////////
// Lesson 12.2 - Value categories (lvalues and rvalues)
///////////////////////////////////////////////////////

// src: learncpp.com

/* This small program tests whether a given value is an lvalue
 * or rvalue.
*/
#include<iostream>
using namespace std;

int foo(){
	return 5;
}

int main(){
	int x {5};
	&x;	// compiles: x is an lval
//	&5;	// compiler error: 5 is rval
//	&foo();	// compiler error: foo() is rval

	cout << "Address of x = " << &x << endl;
	return 0;
}


