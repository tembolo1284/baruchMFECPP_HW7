#ifndef Sum_CPP
#define Sum_CPP
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include "Sum.hpp"
#include "LessThanCheck.hpp"

template <typename T>
LessThanCheck<T>::LessThanCheck() : numSmaller(0) {  //constructor with number to compare container values to
}

template <typename T>
LessThanCheck<T>::LessThanCheck(T t) : numSmaller(t) {  //constructor with number to compare container values to
}

template <typename T>
LessThanCheck<T>::~LessThanCheck() { //destructor
}

template <typename T>
bool LessThanCheck<T>::operator () (int i) { //function to do the comparison
	if (i < numSmaller) {
		return true;
	}
	else {
		return false;
	}
}

template <typename T>
T LessThanCheck<T>::getNum() {
	return numSmaller;
}

#endif