#ifndef Sum_HPP
#define Sum_HPP
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
using namespace std;
//for vector or list
template <typename T>
inline double Sum(const T& v) {
	double result{};
	typename T::const_iterator i;
	for (i = v.cbegin(); i != v.cend(); i++) {
		result += *i;
	}
	return result;
}//for map
template <typename T1, typename T2>
inline double Sum(const map<T1, T2>& m) {
	double result{};
	for (typename map<T1,T2>::const_iterator i = m.begin(); i != m.end(); i++) {
		result += i->second;
	}
	return result;
}
//two iterators vector or list
template <typename T>
double Sum(T& v1, T& v2) {
	double result{};
	for (T& i = v1; i != v2; ++i) {
		result = move(result) + *i;
	}
	return result;
}
//for two iterators for maps
template <typename T1, typename T2>
double Sum(typename map<T1,T2>::const_iterator& begin, typename map<T1,T2>::const_iterator& end) {
	double result{};
	for (typename map<T1, T2>::const_iterator& i = begin; i != end; ++i) {
		result = move(result) + i->second;
	}
	return result;
}

#endif