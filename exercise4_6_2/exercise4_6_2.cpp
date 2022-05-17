#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <string>
#include "Sum.hpp"
using namespace std;
int main() {
	list <double> list1 = {1.0, 2.5, 3.5, 3.5};
	list <double> list2 = { 2.0, 3.0, 4.0, 5.0 };
	vector <double> vec1;
	map<string,double> map1;
	map1["one"]= 2.0;
	map1["two"]=2.0;
	map1["three"]=3.0;
	map1["four"] = 4.0;
	for (int i = 0; i < 11; i++) {
		vec1.push_back(i);
		cout << vec1[i] << endl;
	}
	cout << "Sum of vec1 is: " << Sum(vec1) << endl;
	cout << "Sum of list1 is: " << Sum(list1) << endl;
	cout << "Sum of map1 is: " << Sum(map1) << endl;
	cout << "___________________________" << endl;
	list<double>::const_iterator startl1 = ++list1.cbegin();
	list<double>::const_iterator endl1 = --list1.cend();

	vector<double>::const_iterator startv1 = ++vec1.cbegin();
	vector<double>::const_iterator endv1 = --vec1.cend();

	map<string,double>::const_iterator startm1 = ++map1.cbegin();
	map<string,double>::const_iterator endm1 = --map1.cend();

    cout << "Sum of 2 iter vec1 : " << Sum(startv1, endv1) << endl;
	cout << "Sum of 2 iter list: " << Sum(startl1, endl1) << endl;
	cout << "Sum of 2 iter map: " << Sum<string,double>(startm1, endm1) << endl;

return 0;
}
