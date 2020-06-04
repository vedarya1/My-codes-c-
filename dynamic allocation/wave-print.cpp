#include<bits/stdc++.h>

using namespace std;


void wavePrint(int **input, int row, int col)
{
   for(int j=0;j<col;j++){
   	for(int i=0;i<row;i++){
   		cout<<input[i][j];
	   }
	   
   }
}
int main()
{

	int row, col;
	cin >> row >> col;
	int **input = new int *[row];
	for (int i = 0; i < row; i++)
	{
		input[i] = new int[col];
		for (int j = 0; j < col; j++)
		{
			cin >> input[i][j];
		}
	}
	wavePrint(input, row, col);
	cout << endl;
}
