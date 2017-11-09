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
	
	BigDecimal operator+() const;
	BigDecimal operator+(const BigDecimal& bd) const;
	BigDecimal operator+(int i) const;
	BigDecimal operator+(float f) const;
	BigDecimal operator+(double b) const;
	friend BigDecimal operator+(int i, const BigDecimal& bd);
	friend BigDecimal operator+(float f, const BigDecimal& bd);
	friend BigDecimal operator+(double b, const BigDecimal& bd);

	BigDecimal operator-() const;
	BigDecimal operator-(const BigDecimal& bd) const;
	BigDecimal operator-(int i) const;
	BigDecimal operator-(float f) const;
	BigDecimal operator-(double b) const;
	friend BigDecimal operator-(int i, const BigDecimal& bd);
	friend BigDecimal operator-(float f, const BigDecimal& bd);
	friend BigDecimal operator-(double b, const BigDecimal& bd);

	BigDecimal operator*() const;
	BigDecimal operator*(const BigDecimal& bd) const;
	BigDecimal operator*(int i) const;
	BigDecimal operator*(float f) const;
	BigDecimal operator*(double b) const;
	friend BigDecimal operator*(int i, const BigDecimal& bd);
	friend BigDecimal operator*(float f, const BigDecimal& bd);
	friend BigDecimal operator*(double b, const BigDecimal& bd);

	/* presicion for this operator overloading should not be longer than the original two number. 
	 * 		example: 1.23333/2, the result precision should be 5. */
	BigDecimal operator/(const BigDecimal& bd) const;
	BigDecimal operator/(int i) const;
	BigDecimal operator/(float f) const;
	BigDecimal operator/(double b) const;
	friend BigDecimal operator/(int i, const BigDecimal& bd);
	friend BigDecimal operator/(float f, const BigDecimal& bd);
	friend BigDecimal operator/(double b, const BigDecimal& bd);

	/* both BigDecimal = BigDecimal and BigDecimal = int, float, double - return type BigDecimal& to support concatenation. */
	BigDecimal& operator=(const BigDecimal& bd);
	BigDecimal& operator=(int i);
	BigDecimal& operator=(float f);
	BigDecimal& operator=(double b);

	BigDecimal& operator++();
	BigDecimal operator++(int);

	BigDecimal& operator--();
	BigDecimal operator--(int);

	bool operator>(const BigDecimal& bd) const;
	bool operator>(int i) const;
	bool operator>(float f) const;
	bool operator>(double b) const;
	friend bool operator>(int i, const BigDecimal& bd);
	friend bool operator>(float f, const BigDecimal& bd);
	friend bool operator>(double b, const BigDecimal& bd);

	bool operator>=(const BigDecimal& bd) const;
	bool operator>=(int i) const;
	bool operator>=(float f) const;
	bool operator>=(double b) const;
	friend bool operator>=(int i, const BigDecimal& bd);
	friend bool operator>=(float f, const BigDecimal& bd);
	friend bool operator>=(double b, const BigDecimal& bd);

	bool operator<(const BigDecimal& bd) const;
	bool operator<(int i) const;
	bool operator<(float f) const;
	bool operator<(double b) const;
	friend bool operator<(int i, const BigDecimal& bd);
	friend bool operator<(float f, const BigDecimal& bd);
	friend bool operator<(double b, const BigDecimal& bd);
	
	bool operator<=(const BigDecimal& bd) const;
	bool operator<=(int i) const;
	bool operator<=(float f) const;
	bool operator<=(double b) const;
	friend bool operator<=(int i, const BigDecimal& bd);
	friend bool operator<=(float f, const BigDecimal& bd);
	friend bool operator<=(double b, const BigDecimal& bd);

	bool operator==(const BigDecimal& bd) const;
	bool operator==(int i) const;
	bool operator==(float f) const;
	bool operator==(double b) const;
	friend bool operator==(int i, const BigDecimal& bd);
	friend bool operator==(float f, const BigDecimal& bd);
	friend bool operator==(double b, const BigDecimal& bd);

	bool operator!=(const BigDecimal& bd) const;
	bool operator!=(int i) const;
	bool operator!=(float f) const;
	bool operator!=(double b) const;
	friend bool operator!=(int i, const BigDecimal& bd);
	friend bool operator!=(float f, const BigDecimal& bd);
	friend bool operator!=(double b, const BigDecimal& bd);

	/* presicion should not be longer than original two numbers.
	 * 		example: base ^ power, base = BigDecimal, power = BigDecimal (converted into integer). */
	BigDecimal operator^(const BigDecimal& bd) const;
	BigDecimal operator^(int i) const;
	BigDecimal operator^(float f) const;
	BigDecimal operator^(double b) const;
	friend BigDecimal operator^(int i, const BigDecimal& bd);
	friend BigDecimal operator^(float f, const BigDecimal& bd);
	friend BigDecimal operator^(double b, const BigDecimal& bd);

	BigDecimal operator<<(int i);
	BigDecimal operator<<(float f);
	BigDecimal operator<<(double b);
	friend ostream& operator<<(ostream& output, const BigDecimal& bd);

	BigDecimal operator>>(int i);
	BigDecimal operator>>(float f);
	BigDecimal operator>>(double b);
	friend istream& operator>>(istream& input, BigDecimal& bd);


private:
	Node* linkedList;

};

#endif 
