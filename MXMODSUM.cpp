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

		long m;
		cin >> m;

		long arr[n];

		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		sort(arr, arr + n);

		long ans = 0;
		long num = arr[n - 1];

		for(int i = 0; i < n; i++){
			ans = max(ans, arr[i] + num + ((arr[i] - num) % m + m) % m);
		}

		cout << ans << endl;
	}
	return 0;
}