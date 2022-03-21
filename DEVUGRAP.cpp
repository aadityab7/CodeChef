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
		long n, k;
		cin >> n >> k;

		long arr[n];
		long long ans = 0;
		for(long i = 0; i < n; i++){
			cin >> arr[i];
			long num = arr[i] / k;
			long mn = ((num + 1) * k)- arr[i];
			if(num > 0){
				if(arr[i] - (num * k) < mn){
					mn = arr[i] - (num * k);
				}
			}

			ans += mn;
		}

		cout << ans << endl;
	}
	return 0;
}