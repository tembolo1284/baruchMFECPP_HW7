#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;

int main() {
	list <double> l1 = {1.1, 2.2, 3.3, 4.4};
	vector <double> vec1;
	map<string,double> m1 =
	{
		make_pair("one", 1.0),
		make_pair("two", 2.0),
		make_pair("three", 3.0)
	};

	cout << "First element of list is: " << l1.front() << endl;
	cout << "Last element of list is: " << l1.back() << endl;
	cout << "----------------------------" << endl;

	for (int i = 0; i < 5; i++) {
		vec1.push_back(2.0);
		cout << "Value in vector slot " << i << " is: " << vec1[i] << endl;
	}
	cout << "Capacity of vector is: " << vec1.capacity() << endl;
	for (int i = 0; i < 3; i++) {
		vec1.push_back(3.5);
		cout << "Value in vector slot " << i+5 << " is: " << vec1[(i+5)] << endl;
	}
	cout << "Capacity of vector is now: " << vec1.capacity() << endl;
	cout << "---------------------------" << endl;

	cout << "Value mapped to one is: " << m1["one"] << endl;
	cout << "Value mapped to two is: " << m1["two"] << endl;
	cout << "Value mapped to three is: " << m1["three"] << endl;





return 0;
}


