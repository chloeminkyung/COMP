//==============================================================================
// Name        : main.cpp
// Description : This is only a demo of BigDecimal test program. 
// 	        	 The one which grades your homework will be more complete
//	        	 and more strict.
//==============================================================================

#include "bigDecimal.h"

#include <iostream>
#include <sstream>
#include <stdio.h>
#include <string.h>

using namespace std;

char str[1024];

bool test_addition() {
	// 2000.101+3000.22
	BigDecimal bd1("2000.101");
	BigDecimal bd2("3000.22");
	BigDecimal result = bd1 + bd2;
	result.to_string(str);
	return strcmp(str, "5000.321") == 0;
}

bool test_subtraction() {
	// 2000.101-3000.22
	BigDecimal bd1("2000.101");
	BigDecimal bd2("3000.22");
	BigDecimal result = bd1 - bd2;
	result.to_string(str);
	return strcmp(str, "-1000.119") == 0;
}

bool test_multiplication() {
	// 500.56*600
	BigDecimal bd1("500.56");
	BigDecimal bd2("600");
	BigDecimal result = bd1 * bd2;
	result.to_string(str);
	return strcmp(str, "300336") == 0;
}

bool test_division() {
	// 1200.36/60
	BigDecimal bi1("1200.36");
	BigDecimal bi2("60");
	BigDecimal result = bi1 / bi2;
	result.to_string(str);
	return strcmp(str, "20.01") == 0;
}


bool test_assignment() {
	// bd2 = -12345.33334444
	BigDecimal bd1("-12345.33334444");
	BigDecimal bd2;
	bd2 = bd1;
	bd2.to_string(str);
	return strcmp(str, "-12345.33334444") == 0;
}

bool test_incdec() {
	// bi++
	BigDecimal bd("12345.55555");
	bd++;
	bd.to_string(str);
	return strcmp(str, "12346.55555") == 0;
}

bool test_comparison() {
	// 12345.55555 < 12345.55556
	BigDecimal bd1("12345.55555");
	BigDecimal bd2("12345.55556");
	return bd1 < bd2;
}



bool test_iostream() {
    // output
    stringstream ss;
    BigDecimal bi("1000");
    ss << bi;
    return strcmp(ss.str().c_str(), "1000") == 0;
}

int main() {
    cout << "addition: " << test_addition() << endl;
    cout << "subtraction: " << test_subtraction() << endl;
    cout << "multiplication: " << test_multiplication() << endl;
    cout << "division: " << test_division() << endl;
    cout << "assigment: " << test_assignment() << endl;
    cout << "incdec: " << test_incdec() << endl;
    cout << "comparison: " << test_comparison() << endl;
    cout << "iostream: " << test_iostream() << endl;
}
