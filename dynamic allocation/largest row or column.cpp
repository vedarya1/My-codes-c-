#include<string>
void findLargest(int arr[][1000], int row, int col){
   int sum=0;
    int max=-9999999;
      int q = 0;
      string s = "";
     //rowsum
    for(int i=0;i<row;i++){
        sum=0;
        for(int j=0;j<col;j++){
           sum=sum+arr[i][j]; 
        }
         if(sum>max){
      max = sum;
      q = i;
      s = "row";
         }
    }
    //columnsum
    for(int j=0;j<col;j++){
        sum=0;
		for(int i=0;i<row;i++){
			sum=sum+arr[i][j];
		}
         if(sum>max){
    max = sum;
    q = j;
    s = "column";
  } 
    }
    cout<<s<<" "<<q<<" "<<max;
       
}
/* another ap
#include<string>
void findLargest(int arr[][1000], int row, int col){
   int sum1=0,sum2=0;
    int max1=-9999999,max2=-9999999;
      int q1 = 0,q2=0;
      string s1 = "";
    string s2 = "";
     //rowsum
    for(int i=0;i<row;i++){
        sum1=0;
        for(int j=0;j<col;j++){
           sum1=sum1+arr[i][j]; 
        }
         if(sum1>max1){
      max1 = sum1;
      q1 = i;
      s1 = "row";
         }
    }
    for(int j=0;j<col;j++){
        sum2=0;
		for(int i=0;i<row;i++){
			sum2=sum2+arr[i][j];
		}
         if(sum2>max2){
    max2 = sum2;
    q2 = j;
    s2 = "column";
  } 
    }
    if(max1==max2){
         cout<<s1<<" "<<q1<<" "<<max1;
    }
    if(max1>max2){
        cout<<s1<<" "<<q1<<" "<<max1;
    }
    else if(max1<max2){  
        cout<<s2<<" "<<q2<<" "<<max2;}
   
    
    
}
*/


