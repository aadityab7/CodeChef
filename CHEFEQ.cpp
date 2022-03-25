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
		int n;
		cin >> n;

		int arr[100000] = {};

		int num;
		int mx = 0;
		for(int i = 0; i < n; i++){
			cin >> num;
			arr[num - 1]++;
			if(arr[num - 1] > arr[mx]){
				mx = num - 1;
			}	
		}

		int ans = n - arr[mx];
		cout << ans << endl;
	}
	return 0;
}