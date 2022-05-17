
#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <string>
#include <algorithm>
#include "Sum.hpp"
#include "LessThanCheck.hpp"

using namespace std;
bool isSmaller(int i) { 
	if (i < 5.0) {
		return true;
	}
	else {
		return false;
	}
}
int main() {
	list <double> list1 = {1.5, 2.5, 3.5, 4.5, 5.5, 6.5};
	list <double> list2 = { 2.0, 3.0, 4.0, 5.0 };
	vector <double> vec1;
	map<string,double> map1;
	map1["one"]= 2.0;
	map1["two"]=2.0;
	map1["three"]=3.0;
	map1["four"] = 4.0;
	for (int i = 0; i < 11; i++) {
		vec1.push_back(i);
		cout << vec1[i] << " ";
	}
	//cout << "Sum of vec1 is: " << Sum(vec1) << endl;
	//cout << "Sum of list1 is: " << Sum(list1) << endl;
	//cout << "Sum of map1 is: " << Sum(map1) << endl;
	//cout << "___________________________" << endl;
	list<double>::const_iterator startl1 = ++list1.cbegin();
	list<double>::const_iterator endl1 = --list1.cend();

	vector<double>::const_iterator startv1 = ++vec1.cbegin();
	vector<double>::const_iterator endv1 = --vec1.cend();

	map<string,double>::const_iterator startm1 = ++map1.cbegin();
	map<string,double>::const_iterator endm1 = --map1.cend();

    //cout << "Sum of 2 iter vec1 : " << Sum(startv1, endv1) << endl;
	//cout << "Sum of 2 iter list: " << Sum(startl1, endl1) << endl;
	//cout << "Sum of 2 iter map: " << Sum<string,double>(startm1, endm1) << endl;

//countif test with STL count_if function
int howManyVec = count_if(vec1.begin(), vec1.end(), isSmaller);
int howManyList = count_if(list1.begin(), list1.end(), isSmaller);

cout << "\nThere are " << howManyVec << " numbers less than 5 in the container" << endl;
cout << "\nThere are " << howManyList << " numbers less than 5 in the container" << endl;


//countif test using my LessThan template
LessThanCheck<double> cond1(5.5);
int howManyVecMine = count_if(vec1.begin(), vec1.end(), cond1);
int howManyListMine = count_if(list1.begin(), list1.end(), cond1);
cout << "\nThere are " << howManyVecMine << " numbers less than " << cond1.getNum() << " in the container" << endl;
cout << "\nThere are " << howManyListMine << " numbers less than " << cond1.getNum() << " in the container" << endl;


return 0;
}
