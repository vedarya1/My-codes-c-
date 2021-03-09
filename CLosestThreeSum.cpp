#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void merge(vector<int>& v, int si, int ei) {
	int n = ei-si+1;
	int m = (si+ei)/2;
	int n1 = m-si+1;
	int n2 = ei-m;
	int P1[n1];
	int P2[n2];
	int i, j, k;
	for(i = 0; i < n1; i++) {
		P1[i] = v[si+i];
	}
	for( j = 0; j < n2; j++) {
		P2[j] = v[m+1+j];
	}
	i = 0;
	j = 0;
	k = si;
	while(i < n1 && j < n2) {
		if(P1[i]<=P2[j]) {
			v[k] = P1[i];
			i++;
		}
		else {
			v[k] = P2[j];
			j++;
		}
		k++;
	}
	while(i < n1) {
		v[k] = P1[i];
		i++;
		k++;
	}
	
	while(j<n2) {
		v[k] = P2[j];
		j++;
		k++;
	}
	
}

void sortHelper(vector<int>& v, int si, int ei) {
	if(si >= ei) {
		return;
	}
	int m = (si+ei)/2;
	sortHelper(v,si,m);
	sortHelper(v,m+1,ei);
	merge(v,si,ei);
}

void mergesort(vector<int>& v,int n) {
	sortHelper(v, 0,  n-1);
}

int solution(vector<int> &v, int t) {
//	sort(v.begin(), v.end());
    mergesort(v,v.size());
	int closestSum = -1000000000;
	
	for(int i = 0; i < v.size(); i++) {
		int ptr1 = i+1, ptr2 = v.size()-1;
		while(ptr1 < ptr2) {
			int sum = v[i]+v[ptr1]+v[ptr2];
			if(sum > closestSum) {
				closestSum = sum;
			}
			if(sum > t) {
				ptr2--;
			}
			else {
				ptr1++;
			}
		}
	}
	return closestSum;
}

int main() {
	int n;
	cin >> n;
	int target;
	cin >> target;
	vector<int> v(n,0);
	for(int i = 0; i < n; i++) {
		cin >> v[i];
	}
	cout << solution(v, target);
	return 0;
}
