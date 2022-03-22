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
		long n;
		cin >> n;

		long long arr[n];
		for(long i = 0; i < n; i++){
			cin >> arr[i];
		}

		sort(arr, arr + n);

		long double ans = arr[n - 1];

		for(long i = n - 2; i >= 0; i--){
		    long double num = arr[i] + ans;
			ans = (long double)(num) / (long double)2;
		}

		cout << fixed << setprecision(8) << ans << endl;
	}
	return 0;
}