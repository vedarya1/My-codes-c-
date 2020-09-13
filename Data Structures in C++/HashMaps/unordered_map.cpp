#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main() {
	unordered_map<string, int> ourMap;
	// insert
	pair<string, int> p("abc", 1);
	ourMap.insert(p);
	// OR
	ourMap["def"] = 2;
	
	// find or access
	cout << ourMap["abc"] << endl;
	// OR
	cout << ourMap.at("abc") << endl;
	
	// if not available
	 // cout << ourMap.at("ghi") << endl; // terminate called
	 cout << "size : " << ourMap.size() << endl;
	cout << ourMap["ghi"] << endl;  //  it inserts 0 instead or add
	cout << "size : " << ourMap.size() << endl;
	
	// check presence
	if(ourMap.count("ghi") > 0) {
		cout << "ghi is present" << endl;
	}
	
	// erase 
	ourMap.erase("ghi");
	cout << "size : " << ourMap.size() << endl;
		if(ourMap.count("ghi") > 0) {
		cout << "ghi is present" << endl;
	}
	
	
}
