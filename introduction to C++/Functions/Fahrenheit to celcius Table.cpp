



#include<iostream>
using namespace std;


void printTable(int start,int end,int step){
	int celcius;
	for(int i = start;i<=end;i=i+step){
		celcius = 5.0/9*(i-32);
		cout<<i<<"\t"<<celcius<<endl;
	}
}

int main(){
	int start,end,step;
	cin>>start>>end>>step;
	
	printTable(start,end,step);
}
