//=================================================
// Name        : bigDecimal.h
// Created on  : 31 Oct 2017
// Description : Big decimal header file
//=================================================

#ifndef BIGDECIMAL_H_
#define BIGDECIMAL_H_
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct Node { 
  char data;
  Node* next;
};

class BigDecimal {
public:
	BigDecimal();
	BigDecimal(const char* str);
	BigDecimal(int i);
	BigDecimal(float f);
	BigDecimal(double d);
	BigDecimal(const BigDecimal& bi);
	~BigDecimal();

	/* #### You need to implement from_string(const char*) and to_string(char*) methods. #### */
	/**
	 * Method: void from_string(const char* str)
	 * Description:
	 * 		from_string method will read the number from str.
	 * 		If str is valid, it will be parsed and stored into sign and storage, and then return true. Otherwise, false will be returned.
	 */
	bool from_string(const char* str);

	/**
	 * Method: void to_string(const char* str)
	 * Description:
	 * 		to_string method will output the current number to str.
	 */
	void to_string(char* str);

	/* #### Please add your overloading methods below. #### */

private:
	Node* linkedList;

};

#endif 
