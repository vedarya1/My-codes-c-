#include<iostream>
using namespace std;
 #include<string>  
#include<math.h>


string mapping[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
int keypad(int num, string output[]){
    //base case
  if (num==0||num==1)
  {
      output[0]="";
      return 1;
  }
   
 string smallOutput[10000];
    
   int smallSize= keypad(num/10,smallOutput);
    
     string options= mapping[num%10];
    int k=0;
    for(int i=0;i<smallSize;i++)
    {
        for (int j=0;j<options.size();j++)
        {
            output[k]=smallOutput[i]+options[j];
         k++;   
        }
        
    }
    return k;
}*/

int main(){
	int num;
	cin>>num;
	if(num==1){
		
	}
	string output[10000];
	int count = keypad(num,output);
	for(int i=0;i<count && i<10000;i++){
		cout<< output[i]<<endl;
	}
	return  0 ;
	
}
