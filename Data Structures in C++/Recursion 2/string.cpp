#include<iostream>
using namespace std;

int main(){
	
/*	//dynamically
	string* sp = new string;
	*sp = "vedu";
	cout<<sp<<endl;
	cout<<*sp<<endl;*/
	
	string s = "ved";
	//cin>>s;  //unable to print with spaces
	getline(cin,s);
	cout<<s<<endl;
	
	s= "defdef";
	cout<<s[0]<<endl;
	s[0]= 'a';
	cout<<s<<endl;
	
	string s1;
	s1 = "def";
	
	string s2 = s+s1;
	cout<<s2<<endl;
	
	cout<<s2.size()<<endl;//size
	cout<<s.substr(2)<<endl;//substring
	cout<<s2.substr(3,3)<<endlv;//substring with required size
	
	cout<<s.find("def")<<endl;//index of required string
	
	
/*	//static
	string s = "ved";
	string s1;
	s1= "prakash";
	cout<<s1<<endl;
	cout<<s<<endl;*/
	
	
}
