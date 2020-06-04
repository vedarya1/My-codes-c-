#include<iostream>
using namespace std;
#include<cstring>
//strcmp
/*int main(){
	char input1[100],input2[100];
	cin>>input1>>input2;
	if(strcmp(input1,input2)==0){
		cout<<"true"<<endl;
	}
	else {
		cout<<"false"<<endl;
	}
	
}*/
//strcpy
/*int main(){
char input1[100],input2[100];
	cin>>input1>>input2;
	cout<<strcpy(input1,"hello")<<endl;
	cout<<input2;	
}*/

//strncpy
/*);
	cout<<input1<<endl;
	cout<<input2<<endl;	
}*/


//prefixes
void printAllPrefixes(char input[]){
	//i is end index of my prefix
	for(int i=0;input[i]!='\0';i++){
		//j represents start index of my prefix
		for(int j=0;j<=i;j++){
			cout<<input[j];
		}
		cout<<endl;
	}
}
int main(){
	char input[100];
	cin>>input;
	printAllPrefixes(input);

}





