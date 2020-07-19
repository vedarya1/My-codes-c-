#include<iostream>
using namespace std;

void wavePrint(int **input, int row, int col) {
	for(int i = 0; i < col; i++) {
		if(i%2 == 0) { // even : 2, 4, 6
			for(int j = 0; j < row; j++) {
				cout << input[j][i] << " ";
			}
		}
		else {
			for(int j = 0; j < row; j++) {
				cout << input[row-j-1][i] << " ";
			}
		}
	}
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int row, col;
		cin >> row >> col;
		int **input = new int *[row];
		for(int i = 0; i < row; i++) {
			input[i] = new int[col];
			for(int j = 0; j< col; j++) {
				cin >> input[i][j];
			}
		}
		wavePrint(input, row, col);
		cout << endl;
	}
}
