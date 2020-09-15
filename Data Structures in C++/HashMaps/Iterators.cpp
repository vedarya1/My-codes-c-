#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
using namespace std;

int main() {
	unordered_map<string, int> ourmap;
	ourmap["abc"] = 1;
        ourmap["abc1"] = 2;
	ourmap["abc2"] = 3;
	ourmap["abc3"] = 4;
	ourmap["abc4"] = 5;
	
	unordered_map<string, int>::iterator it = ourmap.begin();
	while(it != ourmap.end()) {
		cout << "Key: " << it->first << " Value: " << it->second << endl;
		it++;
	}
	
	// find
	unordered_map<string, int>::iterator it2 = ourmap.find("abc");
	cout << "Iterator points to " << it2->first << " = " << it2->second << endl;
	ourmap.erase(it2,it2+4);
	cout << ourmap["abc"] << endl;

	
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	
	vector<int>::iterator it1 = v.begin();
	while(it1 != v.end()) {
		cout << *it1 << endl;
		it1++;
	}
	
	
}

