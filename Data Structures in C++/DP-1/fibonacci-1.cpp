#include<bits/stdc++.h>
using namespace std;
/*
// T(n) = T(n-1) + T(n-2) = O(2^n)
int fibo(int n) {
	if(n <= 1) {
		return n;
	}
	int a = fibo(n-1);
	int b = fibo(n-2);
	return a+b;
}
*/
/*
// T = O(n)   && S = O(1)
int fiboHelper(int n,int *ans) {
	if(n <= 1) {
		return n;
	}
	
	// check if ans already exists
	if(ans[n] != -1) {
		return ans[n];
	} 
	
	int a = fiboHelper(n-1, ans);
	int b = fiboHelper(n-2, ans);
	
	// save output for future use
	ans[n] = a+b;
	
	// return the final output
	return ans[n];
}

int fibo(int n) {
	int *ans = new int[n+1];
	
	for(int i = 0; i <= n; i++ ) {
		ans[i] = -1;
	}
	return fiboHelper(n, ans);
}
*/

int fibo(int n) {
	int *ans = new int[n+1];
	// small calculation
	ans[0] = 0;
	ans[1] = 1;
	
	for(int i = 2; i <= n; i++) {
		ans[i] = ans[i-1] + ans[i-2];
	}
	
	return ans[n];
}

int main() {
	int n;
	cin >> n;
	cout << fibo(n) << endl;
}
