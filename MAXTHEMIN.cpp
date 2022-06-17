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
		int k;
		cin >> k;

		long arr[n];

		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		sort(arr, arr + n);

		if(k >= n){
			k = n - 1;
		}
		

		long ans = arr[k];

		cout << ans << endl;
	}
	return 0;
}