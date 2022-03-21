#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;

		int arr[n] = {};
		int numb = m;
		if(m > n){
			numb = m / n;
		}
		int ar[numb + 2] = {};
		ar[0] = n;
		int f = 1;
		int num;
		int curr = 0;
		for(int i = 0; i < m; i++){
			cin >> num;
			if(curr < numb + 1 && ar[curr] == 0){
				curr++;
			}
			if(f && arr[num - 1] <= curr){
				arr[num - 1]++;
				ar[curr]--;
				ar[curr + 1]++;
			}
			else{
				f = 0;
			}
		}

		if(f){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}