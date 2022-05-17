#ifndef LessThanCheck_HPP
#define LessThanCheck_HPP
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
using namespace std;

template <typename T>
class LessThanCheck {
private:
	T numSmaller;
public:
	LessThanCheck();
	LessThanCheck(T t);
	~LessThanCheck();

	bool operator () (int i);
	T getNum();
	//Stack<T, size>& operator = (const Stack<T, size>& source);
};
#ifndef LessThanCheck_cpp // Must be the same name as in source file #define
#include "LessThanCheck.cpp"
#endif

#endif